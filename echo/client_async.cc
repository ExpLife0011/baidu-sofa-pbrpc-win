// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <unistd.h>
#include <sofa/pbrpc/pbrpc.h>
#include "echo_service.pb.h"

#ifdef _MSC_VER
#define  usleep(x)  Sleep(x)
#endif 

// ����ص�����
void EchoCallback(sofa::pbrpc::RpcController* cntl,
        sofa::pbrpc::test::EchoRequest* request,
        sofa::pbrpc::test::EchoResponse* response,
        bool* callbacked)
{
	// ��ӡһЩ��־
    SLOG(NOTICE, "RemoteAddress=%s", cntl->RemoteAddress().c_str());
    SLOG(NOTICE, "IsRequestSent=%s", cntl->IsRequestSent() ? "true" : "false");
    if (cntl->IsRequestSent())
    {
        SLOG(NOTICE, "LocalAddress=%s", cntl->LocalAddress().c_str());
        SLOG(NOTICE, "SentBytes=%ld", cntl->SentBytes());
    }
	 // �������Ƿ�ʧ��
    if (cntl->Failed()) {
        SLOG(ERROR, "request failed: %s", cntl->ErrorText().c_str());
    }
    else {
        SLOG(NOTICE, "request succeed: %s", response->message().c_str());
    }
	 // �����ڻص�������ִ��һЩ�ͷ���Դ�Ĳ���
    delete cntl;
    delete request;
    delete response;
    *callbacked = true;
}

int main()
{
    SOFA_PBRPC_SET_LOG_LEVEL(NOTICE);

    // Define an rpc server.
	// ����RpcClient���󣬹���RPC��������Դ
	// ͨ����˵��һ��client����ֻ��Ҫһ��RpcClientʵ��
	// ����ͨ��RpcClientOptionsָ��һЩ���ò�����Ʃ���߳��������ص�
    sofa::pbrpc::RpcClientOptions client_options;
	client_options.work_thread_num = 2;
	client_options.callback_thread_num = 2;

    sofa::pbrpc::RpcClient rpc_client(client_options);

    // Define an rpc channel.
	// ����RpcChannel���󣬴���һ����Ϣͨ�����贫��Server�˷����ַ
    sofa::pbrpc::RpcChannelOptions channel_options;
    sofa::pbrpc::RpcChannel rpc_channel(&rpc_client, "127.0.0.1:12321", channel_options);

    // Prepare parameters.
	// ����RpcController�������ڿ��Ʊ��ε���
	// �������ó�ʱʱ�䡢ѹ����ʽ�ȣ�Ĭ�ϳ�ʱʱ��Ϊ3�룬Ĭ��ѹ����ʽΪ��ѹ��
    sofa::pbrpc::RpcController* cntl = new sofa::pbrpc::RpcController();
    cntl->SetTimeout(3000);
	// ����������÷�����������Ϣ
    sofa::pbrpc::test::EchoRequest* request = new sofa::pbrpc::test::EchoRequest();
    request->set_message("Hello,����һ�����ģ�����գ�\n");
    sofa::pbrpc::test::EchoResponse* response = new sofa::pbrpc::test::EchoResponse();
    bool callbacked = false;
    google::protobuf::Closure* done = sofa::pbrpc::NewClosure(
            &EchoCallback, cntl, request, response, &callbacked);

    // Async call.
	// ����EchoServer�����׮����EchoServer_Stub��ʹ�����涨�����Ϣͨ����������
    sofa::pbrpc::test::EchoServer_Stub stub(&rpc_channel);
	// ������ã����һ������ΪNULL��ʾΪͬ������
    stub.Echo(cntl, request, response, done);

    // Wait call done.
    while (!callbacked) {
        usleep(100000);
    }

    return EXIT_SUCCESS;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
