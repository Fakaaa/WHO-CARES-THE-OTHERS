#include "player.h"
#include "Screens/WindowInit.h"

namespace player
{
	PLAYER player;

	void Initialize()
	{
		player.InGame = true;
	}

	void InputPlayer()
	{
		if (IsKeyPressed(MouseButton::MOUSE_RIGHT_BUTTON))
		{
			Screens::state = Screens::game;
		}

	}
}