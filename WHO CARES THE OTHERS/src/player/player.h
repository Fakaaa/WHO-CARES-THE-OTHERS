#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"


namespace player
{

	struct PLAYER
	{
		Texture2D playerClass;
		bool InGame;

	};

	extern PLAYER player;

	extern void Initialize();
	extern void InputPlayer();
	extern void LoadTexture();
	extern void Unload();
	extern void CreateCharacter();

}


#endif // !PLAYER_H