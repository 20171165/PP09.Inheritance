#pragma once
#include "SDL.h"
#include "GameObject.h"
#include "Player.h"

class Game
{
public:
	Game() {}
	~Game() {}
	bool init(const char* title, int xpos, int ypos,
		int width, int height, bool fullscreen);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool running() { return m_bRunning; }
	
	GameObject m_go;
	Player m_player;

private:
	SDL_Window * m_pWindow;
	SDL_Renderer* m_pRenderer;
	bool m_bRunning;
	int m_currentFrame;
	//TextureManager m_textureManager;
	//SDL_Texture* m_pTexture; // the new SDL_Texture variable
	//SDL_Rect m_sourceRectangle; // 
	//SDL_Rect m_destinationRectangle; // 
};