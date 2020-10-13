#pragma once

#include <grpc++/grpc++.h>
#include "proto/server_interface.grpc.pb.h"
#include "../LocalPlayer.hpp" 

#include <queue>

using greyvarproto::ServerInterface;
using greyvarproto::ConnectionRequest;
using greyvarproto::NewPlayer;
using greyvarproto::NoResponse;
using greyvarproto::ConnectionResponse;
using greyvarproto::ClientRequests;
using greyvarproto::ServerFrameResponse;
using grpc::Channel;
using grpc::ClientContext;

using std::cout;
using std::endl;

void processServerFrame(ServerFrameResponse sframe);
void processServerFrameGrid(greyvarproto::Grid grid);
void processServerFrameEntitySpawns(greyvarproto::EntitySpawn spawn);

class NetClient {
	public:
		NetClient(NetClient const&) = delete;
		void operator=(NetClient const&) = delete;

		static NetClient& get() {
			static NetClient instance(grpc::CreateChannel("localhost:2000", grpc::InsecureChannelCredentials()));

			return instance;
		}

		ClientRequests* nextFrameToSend = new ClientRequests(); 

		void connect();
		void playerSetup(LocalPlayer* lp);

		ClientRequests* getNextFrameToSend() {
			return this->nextFrameToSend;
		}

		bool hasFrames() {
			return !this->serverFrameBuffer.empty();
		}

		void processServerFrames();

		bool isReady() {
			auto state = this->channel->GetState(false);

			return state == GRPC_CHANNEL_READY;
		}

		void sendRecvFrame();

	private:
		NetClient(std::shared_ptr<Channel> channel) : stub_(ServerInterface::NewStub(channel)) {
			this->channel = channel;

			cout << "NetClient" << endl;
		}
		
		std::queue<ServerFrameResponse> serverFrameBuffer;

		std::shared_ptr<Channel> channel;
		std::unique_ptr<ServerInterface::Stub> stub_;
};

