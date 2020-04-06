/*
GRAPHICS_API_OPENGL_33
PLATFORM_DESKTOP
*/

#include "raylib.h"

int main(void)
{
	int screenWidth = 1366;
	int screenHeight = 768;
	InitWindow(screenWidth, screenHeight, "Consola");

	bool enterPressed = false;
	while (enterPressed == false)
	{
		ClearBackground(BLACK);
		BeginDrawing();

		DrawText("Apriete enter para terminar el loop", screenWidth / 2, screenHeight / 2, 25, WHITE);
		if (IsKeyDown(KEY_ENTER))
			enterPressed = true;

		EndDrawing();
	}

	CloseWindow();
}
