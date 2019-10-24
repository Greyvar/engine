#include "net.hpp"

using std::cout;
using std::endl;

using greyvarproto::ServerFrameResponse; 

void processServerFrame(ServerFrameResponse sframe) {
    cout << "Frame: " << endl;

    if (sframe.has_grid()) {
        processServerFrameGrid(sframe.grid());
    }

	if (sframe.has_entityspawn()) {
		processServerFrameEntitySpawns(sframe.entityspawn());
	}
}
