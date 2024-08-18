#ifndef _CONTAINER_H_
#define _CONTAINER_H_

#include "player.h"

class Container {
public:
	Player* player;
	Container* next;
	Container();			// constructor
};

#endif // _CONTAINER_H_
