#pragma once
#include "SDL.h"
#include "SerialInterface.h"


class Game
{
public:
	Game();
	~Game();

	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();

	bool running() { return isRunning; };

private:
	SDL_Window* mainWindow;
	SDL_Renderer* mainRenderer;

	bool isRunning;

	SerialInterface* serialInterface;
};

