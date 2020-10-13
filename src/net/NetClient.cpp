#include "net/NetClient.hpp"

#include <boleas/gui/Gui.hpp>

void NetClient::connect() {
	ConnectionRequest req; 
	ConnectionResponse res;
	ClientContext ctx;

	stub_->Connect(&ctx, req, &res);

	Gui::get().addMessage("connected to server");

	cout << "server version" << res.serverversion() << endl;
}

void NetClient::playerSetup(LocalPlayer* lp) {
	NewPlayer np; 
	NoResponse ignoreme;
//	np.username("untitled.player");

	ClientContext ctx; 

	stub_->PlayerSetup(&ctx, np, &ignoreme);
}

void NetClient::sendRecvFrame() {
	ServerFrameResponse res;
	ClientContext ctx;

	auto s = stub_->GetServerFrame(&ctx, *this->nextFrameToSend, &res);

	this->nextFrameToSend = new ClientRequests();

	if (!s.ok()) {
		cout << "omg, srv frame fail: " << s.error_message() << endl;
	} else {
		serverFrameBuffer.push(res);
	}
}

void NetClient::processServerFrames() {
	while (this->hasFrames()) {
		auto frame = this->serverFrameBuffer.front();
		this->serverFrameBuffer.pop();

		processServerFrame(frame);
	}
}
