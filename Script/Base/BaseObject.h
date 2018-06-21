#pragma once

#include "DxLib.h"
#include "../System/Position.h"

class C_BaseObject{

public:
	C_BaseObject();
	C_BaseObject(C_Position argPos);
	virtual ~C_BaseObject();
	virtual void Update() = 0;
	virtual void Draw() = 0;

protected:
	static const int Block_Size;

	C_Position pos;

};
