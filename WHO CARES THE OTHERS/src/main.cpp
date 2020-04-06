#include "raylib.h"
#include "screens/WindowInit.h"
#include "background/background.h"
#include "player/player.h"

static void Initialize();
static void UnloadAssets();


int main()
{
	Initialize();

	Screens::ScreenController();
	
	UnloadAssets();

	return 0;
}

static void Initialize()
{
	InitWindow(GetScreenWidth(), GetScreenHeight(), "WHO CARES THE OTHERS");
	background::LoadBackground();
	
	SetExitKey(KEY_BACK);
	SetTargetFPS(60);

	Screens::Initialize();
	player::Initialize();
}

static void UnloadAssets()
{
	background::Unload();
}