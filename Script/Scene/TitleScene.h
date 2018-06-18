#pragma once

#include "../Base/BaseScene.h"

class C_TitleScene : public C_BaseScene{

public:
	C_TitleScene(C_SceneChanger *argSceneChanger);
	virtual ~C_TitleScene();

	void Update() override;
	void Draw() override;

private:
	typedef enum{
		TitleMenu_Start,
		TitleMenu_Config,
		TitleMenu_Exit,

		TitleMenu_Num,
	}e_TitleMenu;

	e_TitleMenu selectMenu;
	int backGroundImage;
	int titleImage;
	int startImage;
	int configImage;
	int exitImage;

};

