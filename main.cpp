#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_syswm.h>

SDL_Window* window = NULL;
const int WIDTH = 640;
const int HEIGHT = 480;

int main(int argc, char* args[])
{
	printf("Start bgfx sample\n");

	if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL coud not initialize! SDL_Error: %s\n",
		       SDL_GetError());
	}
	else
	{
		window = SDL_CreateWindow("BGFX Tutorial",
		                          SDL_WINDOWPOS_UNDEFINED,
		                          SDL_WINDOWPOS_UNDEFINED,
		                          WIDTH, HEIGHT,
		                          SDL_WINDOW_SHOWN);
		if(window == NULL)
		{
			printf("Window could  not be created! SDL_Error: %s\n",
			       SDL_GetError());
		}
	}

	bool quit = false;
	SDL_Event currentEvent;
	while(!quit)
	{
		while(SDL_PollEvent(&currentEvent) != 0)
		{
			if(currentEvent.type == SDL_QUIT)
			{
				quit = true;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();
	
	return 0;
}
