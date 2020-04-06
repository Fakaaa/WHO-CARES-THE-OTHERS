#include "background.h"

namespace background
{
	bool stopTransition = false;
	static BACKGROUND bg;

	void LoadBackground()
	{
		Image bgRezize;
		bgRezize = LoadImage("assets/background/bg.jpg");
		ImageResize(&bgRezize, 1920, 1000);
		bg.posx = 0;
		bg.posy = 50;
		bg.bg = LoadTextureFromImage(bgRezize);
		UnloadImage(bgRezize);
	}

	void DrawMenu()
	{
		DrawTexture(bg.bg, bg.posx, bg.posy, WHITE);
	}

	void Unload()
	{
		UnloadTexture(bg.bg);
	}

}