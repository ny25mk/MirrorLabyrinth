#pragma once

#include "../Define/Enum.h"
#include "../Base/BaseCharacter.h"

class C_Mirror;

class C_Player : public C_BaseCharacter{

public:
	C_Player(C_Position argPos);
	virtual ~C_Player();
	virtual void Update() override;
	virtual void Draw() override;
	void Move(int argMoveDire);
	virtual void Animation() override;
	C_Position GetPosition();
	e_Direction GetDirection();

private:
	e_Direction nowDire;
	bool moveFlag;
	C_Mirror *mirror;

};
