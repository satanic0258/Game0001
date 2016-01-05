#pragma once

#include "Table.h"
#include "Stock.h"
#include "Player.h"
#include <vector>

class OldMaid{
private:
	Table mTable;
	Stock mStock;
	Player* mPlayerList;
	int mPlayerNum;
public:
	OldMaid(int comNum);
	~OldMaid();

};

