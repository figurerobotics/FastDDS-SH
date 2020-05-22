// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file test_servicePubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#ifndef _TEST_SERVICE_PUBSUBTYPES_H_
#define _TEST_SERVICE_PUBSUBTYPES_H_

#include <fastrtps/config.h>
#include <fastrtps/TopicDataType.h>

#include "test_service.h"

#if !defined(GEN_API_VER) || (GEN_API_VER != 1)
#error Generated test_service is not compatible with current installed Fast-RTPS. Please, regenerate it with fastrtpsgen.
#endif

/*!
 * @brief This class represents the TopicDataType of the type Method0_In defined by the user in the IDL file.
 * @ingroup TEST_SERVICE
 */
class Method0_InPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef Method0_In type;

    eProsima_user_DllExport Method0_InPubSubType();

    eProsima_user_DllExport virtual ~Method0_InPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type Method1_In defined by the user in the IDL file.
 * @ingroup TEST_SERVICE
 */
class Method1_InPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef Method1_In type;

    eProsima_user_DllExport Method1_InPubSubType();

    eProsima_user_DllExport virtual ~Method1_InPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type Method2_In defined by the user in the IDL file.
 * @ingroup TEST_SERVICE
 */
class Method2_InPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef Method2_In type;

    eProsima_user_DllExport Method2_InPubSubType();

    eProsima_user_DllExport virtual ~Method2_InPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};

/*!
 * @brief This class represents the TopicDataType of the type Method0_Result defined by the user in the IDL file.
 * @ingroup TEST_SERVICE
 */
class Method0_ResultPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef Method0_Result type;

    eProsima_user_DllExport Method0_ResultPubSubType();

    eProsima_user_DllExport virtual ~Method0_ResultPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type Method1_Result defined by the user in the IDL file.
 * @ingroup TEST_SERVICE
 */
class Method1_ResultPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef Method1_Result type;

    eProsima_user_DllExport Method1_ResultPubSubType();

    eProsima_user_DllExport virtual ~Method1_ResultPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type Method2_Result defined by the user in the IDL file.
 * @ingroup TEST_SERVICE
 */
class Method2_ResultPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef Method2_Result type;

    eProsima_user_DllExport Method2_ResultPubSubType();

    eProsima_user_DllExport virtual ~Method2_ResultPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};

/*!
 * @brief This class represents the TopicDataType of the type TestService_Request defined by the user in the IDL file.
 * @ingroup TEST_SERVICE
 */
class TestService_RequestPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef TestService_Request type;

    eProsima_user_DllExport TestService_RequestPubSubType();

    eProsima_user_DllExport virtual ~TestService_RequestPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type TestService_Reply defined by the user in the IDL file.
 * @ingroup TEST_SERVICE
 */
class TestService_ReplyPubSubType : public eprosima::fastrtps::TopicDataType {
public:
    typedef TestService_Reply type;

    eProsima_user_DllExport TestService_ReplyPubSubType();

    eProsima_user_DllExport virtual ~TestService_ReplyPubSubType();
    eProsima_user_DllExport virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
    eProsima_user_DllExport virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
    eProsima_user_DllExport virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
        bool force_md5 = false) override;
    eProsima_user_DllExport virtual void* createData() override;
    eProsima_user_DllExport virtual void deleteData(void * data) override;
    MD5 m_md5;
    unsigned char* m_keyBuffer;
};

#endif // _TEST_SERVICE_PUBSUBTYPES_H_