
#ifndef BACKGROUND
#define BACKGROUND_H

#include "raylib.h"

namespace background
{
	struct BACKGROUND
	{
		Texture2D bg;
		int posx;
		int posy;
	};
	
	extern bool stopTransition;

	extern void LoadBackground();
	extern void Unload();
	extern void DrawMenu();
	extern void DrawTransition();
	extern void DrawFigth();
}


#endif // !BACKGROUND
