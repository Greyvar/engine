#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "Scene.hpp"

void Scene::loadFont(std::string filename) {
	this->font = TTF_OpenFont("res/ttf/DejaVuSans.ttf", 72);

	if (!this->font) {
		std::cout << "Failed to load font. " << TTF_GetError() << std::endl;
		return;
	}

}

void Scene::loadImage(std::string filename) {
	this->sBackground = SDL_LoadBMP("res/img/logo.bmp");

	if (!this->sBackground) {
		std::cout << "error: " << SDL_GetError() << std::endl;
		return;
	}
}

void Scene::setText(std::string text) {
	this->text = text;
}

void Scene::setBackground() {

}

void Scene::renderTextures(SDL_Renderer* ren) {
	this->sText = TTF_RenderText_Solid(this->font, this->text.c_str(), this->fontColor);
	this->tText = SDL_CreateTextureFromSurface(ren, this->sText); 

	this->tBackground = SDL_CreateTextureFromSurface(ren, this->sBackground);

	SDL_FreeSurface(this->sText);
}

Scene::Scene(void) {
	this->loadFont("DejaVuSans.ttf");
	this->loadImage("logo.bmp");
}
