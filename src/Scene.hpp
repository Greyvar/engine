#ifndef SCENE_H
#define SCENE_H

class Scene {
	public:
		Scene();
		void loadFont(std::string filename);
		void loadImage(std::string filename);
		void setText(std::string txt);
		void setBackground();

		void renderTextures(SDL_Renderer *ren);


		SDL_Color fontColor = { 100, 255, 255, 255 };
		TTF_Font *font;

		SDL_Surface *sText; 
		SDL_Texture *tText;
		
		SDL_Surface *sBackground;
		SDL_Texture *tBackground; 
	private:
		std::string text = "blaaat";
};

#endif
