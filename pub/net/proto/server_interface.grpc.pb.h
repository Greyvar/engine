// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: server_interface.proto
#ifndef GRPC_server_5finterface_2eproto__INCLUDED
#define GRPC_server_5finterface_2eproto__INCLUDED

#include "server_interface.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace greyvarproto {

class ServerInterface final {
 public:
  static constexpr char const* service_full_name() {
    return "greyvarproto.ServerInterface";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Connect(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::greyvarproto::ConnectionResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ConnectionResponse>> AsyncConnect(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ConnectionResponse>>(AsyncConnectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ConnectionResponse>> PrepareAsyncConnect(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ConnectionResponse>>(PrepareAsyncConnectRaw(context, request, cq));
    }
    virtual ::grpc::Status PlayerSetup(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::greyvarproto::NoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::NoResponse>> AsyncPlayerSetup(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::NoResponse>>(AsyncPlayerSetupRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::NoResponse>> PrepareAsyncPlayerSetup(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::NoResponse>>(PrepareAsyncPlayerSetupRaw(context, request, cq));
    }
    virtual ::grpc::Status GetServerFrame(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::greyvarproto::ServerFrameResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ServerFrameResponse>> AsyncGetServerFrame(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ServerFrameResponse>>(AsyncGetServerFrameRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ServerFrameResponse>> PrepareAsyncGetServerFrame(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ServerFrameResponse>>(PrepareAsyncGetServerFrameRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Connect(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void PlayerSetup(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetServerFrame(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ConnectionResponse>* AsyncConnectRaw(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ConnectionResponse>* PrepareAsyncConnectRaw(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::NoResponse>* AsyncPlayerSetupRaw(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::NoResponse>* PrepareAsyncPlayerSetupRaw(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ServerFrameResponse>* AsyncGetServerFrameRaw(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greyvarproto::ServerFrameResponse>* PrepareAsyncGetServerFrameRaw(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Connect(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::greyvarproto::ConnectionResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::ConnectionResponse>> AsyncConnect(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::ConnectionResponse>>(AsyncConnectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::ConnectionResponse>> PrepareAsyncConnect(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::ConnectionResponse>>(PrepareAsyncConnectRaw(context, request, cq));
    }
    ::grpc::Status PlayerSetup(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::greyvarproto::NoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::NoResponse>> AsyncPlayerSetup(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::NoResponse>>(AsyncPlayerSetupRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::NoResponse>> PrepareAsyncPlayerSetup(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::NoResponse>>(PrepareAsyncPlayerSetupRaw(context, request, cq));
    }
    ::grpc::Status GetServerFrame(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::greyvarproto::ServerFrameResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::ServerFrameResponse>> AsyncGetServerFrame(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::ServerFrameResponse>>(AsyncGetServerFrameRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::ServerFrameResponse>> PrepareAsyncGetServerFrame(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greyvarproto::ServerFrameResponse>>(PrepareAsyncGetServerFrameRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Connect(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response, std::function<void(::grpc::Status)>) override;
      void PlayerSetup(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response, std::function<void(::grpc::Status)>) override;
      void GetServerFrame(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::greyvarproto::ConnectionResponse>* AsyncConnectRaw(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::greyvarproto::ConnectionResponse>* PrepareAsyncConnectRaw(::grpc::ClientContext* context, const ::greyvarproto::ConnectionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::greyvarproto::NoResponse>* AsyncPlayerSetupRaw(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::greyvarproto::NoResponse>* PrepareAsyncPlayerSetupRaw(::grpc::ClientContext* context, const ::greyvarproto::NewPlayer& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::greyvarproto::ServerFrameResponse>* AsyncGetServerFrameRaw(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::greyvarproto::ServerFrameResponse>* PrepareAsyncGetServerFrameRaw(::grpc::ClientContext* context, const ::greyvarproto::ClientRequests& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Connect_;
    const ::grpc::internal::RpcMethod rpcmethod_PlayerSetup_;
    const ::grpc::internal::RpcMethod rpcmethod_GetServerFrame_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Connect(::grpc::ServerContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response);
    virtual ::grpc::Status PlayerSetup(::grpc::ServerContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response);
    virtual ::grpc::Status GetServerFrame(::grpc::ServerContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Connect() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Connect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConnect(::grpc::ServerContext* context, ::greyvarproto::ConnectionRequest* request, ::grpc::ServerAsyncResponseWriter< ::greyvarproto::ConnectionResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PlayerSetup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_PlayerSetup() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_PlayerSetup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayerSetup(::grpc::ServerContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPlayerSetup(::grpc::ServerContext* context, ::greyvarproto::NewPlayer* request, ::grpc::ServerAsyncResponseWriter< ::greyvarproto::NoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetServerFrame : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetServerFrame() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetServerFrame() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerFrame(::grpc::ServerContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetServerFrame(::grpc::ServerContext* context, ::greyvarproto::ClientRequests* request, ::grpc::ServerAsyncResponseWriter< ::greyvarproto::ServerFrameResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Connect<WithAsyncMethod_PlayerSetup<WithAsyncMethod_GetServerFrame<Service > > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_Connect() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::greyvarproto::ConnectionRequest, ::greyvarproto::ConnectionResponse>(
          [this](::grpc::ServerContext* context,
                 const ::greyvarproto::ConnectionRequest* request,
                 ::greyvarproto::ConnectionResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->Connect(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_Connect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Connect(::grpc::ServerContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_PlayerSetup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_PlayerSetup() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::greyvarproto::NewPlayer, ::greyvarproto::NoResponse>(
          [this](::grpc::ServerContext* context,
                 const ::greyvarproto::NewPlayer* request,
                 ::greyvarproto::NoResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->PlayerSetup(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_PlayerSetup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayerSetup(::grpc::ServerContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void PlayerSetup(::grpc::ServerContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetServerFrame : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_GetServerFrame() {
      ::grpc::Service::experimental().MarkMethodCallback(2,
        new ::grpc::internal::CallbackUnaryHandler< ::greyvarproto::ClientRequests, ::greyvarproto::ServerFrameResponse>(
          [this](::grpc::ServerContext* context,
                 const ::greyvarproto::ClientRequests* request,
                 ::greyvarproto::ServerFrameResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->GetServerFrame(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_GetServerFrame() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerFrame(::grpc::ServerContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void GetServerFrame(::grpc::ServerContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_Connect<ExperimentalWithCallbackMethod_PlayerSetup<ExperimentalWithCallbackMethod_GetServerFrame<Service > > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Connect() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Connect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PlayerSetup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_PlayerSetup() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_PlayerSetup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayerSetup(::grpc::ServerContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetServerFrame : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetServerFrame() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetServerFrame() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerFrame(::grpc::ServerContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Connect() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Connect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConnect(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_PlayerSetup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_PlayerSetup() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_PlayerSetup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayerSetup(::grpc::ServerContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPlayerSetup(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetServerFrame : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetServerFrame() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_GetServerFrame() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerFrame(::grpc::ServerContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetServerFrame(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_Connect() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->Connect(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_Connect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Connect(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_PlayerSetup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_PlayerSetup() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->PlayerSetup(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_PlayerSetup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayerSetup(::grpc::ServerContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void PlayerSetup(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetServerFrame : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_GetServerFrame() {
      ::grpc::Service::experimental().MarkMethodRawCallback(2,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->GetServerFrame(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_GetServerFrame() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetServerFrame(::grpc::ServerContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void GetServerFrame(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Connect() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::greyvarproto::ConnectionRequest, ::greyvarproto::ConnectionResponse>(std::bind(&WithStreamedUnaryMethod_Connect<BaseClass>::StreamedConnect, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Connect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::greyvarproto::ConnectionRequest* request, ::greyvarproto::ConnectionResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedConnect(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::greyvarproto::ConnectionRequest,::greyvarproto::ConnectionResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PlayerSetup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_PlayerSetup() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::greyvarproto::NewPlayer, ::greyvarproto::NoResponse>(std::bind(&WithStreamedUnaryMethod_PlayerSetup<BaseClass>::StreamedPlayerSetup, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_PlayerSetup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PlayerSetup(::grpc::ServerContext* context, const ::greyvarproto::NewPlayer* request, ::greyvarproto::NoResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPlayerSetup(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::greyvarproto::NewPlayer,::greyvarproto::NoResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetServerFrame : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetServerFrame() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::greyvarproto::ClientRequests, ::greyvarproto::ServerFrameResponse>(std::bind(&WithStreamedUnaryMethod_GetServerFrame<BaseClass>::StreamedGetServerFrame, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetServerFrame() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetServerFrame(::grpc::ServerContext* context, const ::greyvarproto::ClientRequests* request, ::greyvarproto::ServerFrameResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetServerFrame(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::greyvarproto::ClientRequests,::greyvarproto::ServerFrameResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Connect<WithStreamedUnaryMethod_PlayerSetup<WithStreamedUnaryMethod_GetServerFrame<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Connect<WithStreamedUnaryMethod_PlayerSetup<WithStreamedUnaryMethod_GetServerFrame<Service > > > StreamedService;
};

}  // namespace greyvarproto


#endif  // GRPC_server_5finterface_2eproto__INCLUDED