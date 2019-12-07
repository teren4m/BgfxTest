#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_syswm.h>
#include <bgfx/bgfx.h>
#include <bgfx/platform.h>

SDL_Window *window = NULL;
const int WIDTH = 640;
const int HEIGHT = 480;

int main()
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

	printf("Collect information about the window\n");
	SDL_SysWMinfo wmi;
	SDL_VERSION(&wmi.version);
	if(!SDL_GetWindowWMInfo(window, &wmi)){
		return 1;
	}

	bgfx::PlatformData pd;
	printf("and give the pointer to the window to pd\n");
	pd.ndt = wmi.info.x11.display;
	pd.nwh = (void*)(uintptr_t)wmi.info.x11.window;

	printf("Tell bgfx about the platform and window\n");
	bgfx::setPlatformData(pd);
	
	printf("Render empty frame\n");
	bgfx::renderFrame();

	printf("Initialize bgfx\n");
	bgfx::init();

	//Reset window
	bgfx::reset(WIDTH, HEIGHT, BGFX_RESET_VSYNC);

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
