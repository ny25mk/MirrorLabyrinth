#include "Stairs.h"
#include "../System/SoundPlayer.h"

C_Stairs::C_Stairs(C_Position<int> argPos):C_BaseBlock(argPos){
}


C_Stairs::~C_Stairs(){
}

void C_Stairs::Update(){



}

void C_Stairs::Draw(){

	DrawGraph((pos.x * Block_Size), (pos.y * Block_Size), image[0], TRUE);
	DrawGraph((pos.x * Block_Size), (pos.y * Block_Size), image[2], TRUE);

}

void C_Stairs::HitAction(){



}
