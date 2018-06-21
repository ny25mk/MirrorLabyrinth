#pragma once

#include "../Define/Enum.h"
#include "../Base/BaseCharacter.h"

class C_Player;

class C_Mirror : public C_BaseCharacter{

public:
	C_Mirror(C_Position argPos,C_Player *player);
	virtual ~C_Mirror();
	virtual void Update() override;
	virtual void Draw() override;
	virtual void Animation() override;
	void Fhashing();

private:
	C_Player *player;
	int nowDire;
	int flashTime;
	bool flashFlag;
	bool moveFlag;

};