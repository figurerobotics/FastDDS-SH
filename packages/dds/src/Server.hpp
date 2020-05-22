/*
 * Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef SOSS__DDS__INTERNAL__SERVER_HPP
#define SOSS__DDS__INTERNAL__SERVER_HPP

#include "DDSMiddlewareException.hpp"
#include "Participant.hpp"
#include "DynamicTypeAdapter.hpp"

#include <soss/SystemHandle.hpp>

#include <fastrtps/publisher/PublisherListener.h>
#include <fastrtps/subscriber/SubscriberListener.h>

#include <thread>
#include <condition_variable>

namespace soss {
namespace dds {

class Participant;

class Server
    : public virtual ServiceProvider
    , private eprosima::fastrtps::PublisherListener
    , private eprosima::fastrtps::SubscriberListener
{
public:

    Server(
            Participant* participant,
            const std::string& service_name,
            const xtypes::DynamicType& request_type,
            const xtypes::DynamicType& reply_type,
            const YAML::Node& config);

    virtual ~Server() override;

    Server(
            const Server& rhs) = delete;

    Server& operator = (
            const Server& rhs) = delete;


    Server(
            Server&& rhs) = delete;


    Server& operator = (
            Server&& rhs) = delete;

    void call_service(
            const xtypes::DynamicData& request,
            ServiceClient& client,
            std::shared_ptr<void> call_handle) override;

    bool add_config(
            const YAML::Node& configuration);

private:

    void onPublicationMatched(
            eprosima::fastrtps::Publisher* pub,
            eprosima::fastrtps::rtps::MatchingInfo& info) override;

    void onSubscriptionMatched(
            eprosima::fastrtps::Subscriber* sub,
            eprosima::fastrtps::rtps::MatchingInfo& info) override;

    void onNewDataMessage(
            eprosima::fastrtps::Subscriber* sub) override;

    void receive(
            eprosima::fastrtps::rtps::SampleIdentity sample_id);

    Participant* participant_;
    eprosima::fastrtps::Publisher* dds_publisher_;
    eprosima::fastrtps::Subscriber* dds_subscriber_;
    DynamicData* request_dynamic_data_;
    DynamicData* reply_dynamic_data_;

    const std::string service_name_;
    const xtypes::DynamicType& request_type_;
    const xtypes::DynamicType& reply_type_;

    std::map<std::shared_ptr<void>, ServiceClient*> callhandle_client_;
    std::map<eprosima::fastrtps::rtps::SampleIdentity, std::shared_ptr<void>, SampleIdentityComparator>
    sample_callhandle_;
    std::map<std::string, std::string> type_to_discriminator_;
    std::map<std::string, std::string> request_reply_;
    std::map<eprosima::fastrtps::rtps::SampleIdentity, std::string, SampleIdentityComparator> reply_id_type_;

    std::mutex mtx_;
    std::mutex request_data_mtx_;
    std::mutex reply_data_mtx_;

    std::map<std::thread::id, std::thread*> reception_threads_;
    bool stop_cleaner_;
    std::vector<std::thread::id> finished_threads_;
    std::mutex cleaner_mtx_;
    std::condition_variable cleaner_cv_;
    std::thread cleaner_thread_;

    void cleaner_function();
};


} // namespace dds
} // namespace soss

#endif // SOSS__DDS__INTERNAL__SERVER_HPP