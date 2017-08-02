#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include <sstream>

#include "LTimer.hpp"
#include "Scene.hpp"

#define FPS 20
#define TICKS_PER_FRAME 1000 / FPS

bool quit = false;

void pushEventQuit() {
	SDL_Event evtQuit;
	evtQuit.type = SDL_QUIT;

	SDL_PushEvent(&evtQuit);
}

void handleSpace() {
	std::cout << " <next> " << std::endl;
}

void handleKeypress(std::string key) {
	std::cout << "Key " << key << std::endl;

	if (key == "Escape") {
		std::cout << "bye!!" << std::endl;
		pushEventQuit();
	} else if (key == "Space") {
		handleSpace();
	}
}

void render(SDL_Renderer *ren, Scene *scene) {
	scene->renderTextures(ren);

	SDL_RenderClear(ren);
	SDL_RenderCopy(ren, scene->tBackground, NULL, NULL);

	SDL_Rect renderQuad = { 10, 440, 700, 35 };

	SDL_SetRenderDrawColor(ren, 255, 100, 100, 255);
	SDL_RenderFillRect(ren, &renderQuad);
	SDL_RenderCopyEx(ren, scene->tText, NULL, &renderQuad, 0.0, NULL, SDL_FLIP_NONE);
	SDL_RenderPresent(ren);
}

void eventHandler() {
	SDL_Event event;

	// /usr/include/SDL2/SDL_events.h
	while (SDL_PollEvent(&event)) {
		switch (event.type) {
			case SDL_KEYDOWN:
				handleKeypress(SDL_GetKeyName(event.key.keysym.sym));
				break;
			case SDL_QUIT:
				quit = true;
				break;
			case 0x1100: // SDL_AUDIODEVICEADDED: So this compiles on CentOS 7
				std::cout << "Audio device found" << std::endl;
				break;
			case SDL_TEXTINPUT:
			case SDL_KEYUP:
			case SDL_MOUSEMOTION:
			case SDL_MOUSEBUTTONDOWN:
			case SDL_MOUSEBUTTONUP:
			case SDL_MOUSEWHEEL:
			case SDL_WINDOWEVENT:
				break;
			default:
				std::cout << "Unhandled event " << event.type << std::endl;
				break;
		}
	}
}

void loopFrames(SDL_Renderer *ren, Scene *scene) {
	int countedFrames = 0;

	LTimer fps;
	fps.start();

	LTimer cap;

	std::stringstream txtFps;

	while (!quit) {
		cap.start();

		eventHandler();

		float afps = countedFrames / (fps.getTicks() / 1000.f);

		if (afps > 20000) {
			afps = 0;
		}

		render(ren, scene);
	
		countedFrames++;

		int frameTicks = cap.getTicks();
		if (frameTicks < TICKS_PER_FRAME) {
			SDL_Delay(TICKS_PER_FRAME - frameTicks);
		}
	}
}

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();

	SDL_Window *win = SDL_CreateWindow("Boleas Game", 100, 100, 720, 480, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	Scene* scene = new Scene();

	loopFrames(ren, scene);

	SDL_Quit();

	return 0;
}
