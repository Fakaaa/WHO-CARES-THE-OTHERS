#pragma once

#ifndef WINDOW_INIT
#define WINDOW_INIT_H

namespace Screens
{

	enum States
	{
		menu,characterCreation,transition,mainWeb,game,credits
	};

	extern States state;

	extern void Initialize();
	extern void ScreenController();
}
#endif // !WINDOW_INIT