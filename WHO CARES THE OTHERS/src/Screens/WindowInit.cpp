#include "WindowInit.h"
#include "raylib.h"
#include "background/background.h"
#include "player/player.h"

namespace Screens
{
	States state;

	
	static void Menu();
	static void CharacterCreation();
	static void Transition();
	static void MainWeb();
	static void Game();
	static void Credits();

	void Initialize()
	{
		state = menu;
	}

	void ScreenController()
	{
		while (!WindowShouldClose() && player::player.InGame == true)
		{
			switch (state)
			{
			case Screens::menu:
				Menu();
				break;
			case Screens::characterCreation:
				CharacterCreation();
				break;
			case Screens::transition:
				Transition();
				break;
			case Screens::mainWeb:
				MainWeb();
				break;
			case Screens::game:
				Game();
				break;
			case Screens::credits:
				Credits();
				break;
			default:
				break;
			}
		}
	}

	static void Menu()
	{
	
		player::InputPlayer();

		if (IsKeyPressed(KEY_ESCAPE))
		{
			player::player.InGame = false;
		}

		BeginDrawing();
		ClearBackground(BLACK);
	
		background::DrawMenu();

		EndDrawing();
	}

	static void CharacterCreation()
	{
	
	}

	static void Transition()
	{
	
	}

	static void MainWeb()
	{
	
	}

	static void Game()
	{
	
	}

	static void Credits()
	{
	
	}
}