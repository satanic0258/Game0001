#include "OldMaid.h"



OldMaid::OldMaid(int comNum){
	for (int i = 0; i <= comNum; ++i) {
		mPlayerList = new Player;
	}
	mPlayerNum = comNum + 1;
}


OldMaid::~OldMaid(){
}
