#pragma once

#include <iostream>
#include <locale.h>
#include "SDL.h"

using namespace std;


struct allVar {

	SDL_Texture* bmp = nullptr;
	SDL_Texture* bmpStart = nullptr;
	SDL_Texture* bmpFinish = nullptr;

	SDL_Texture* bmp1 = nullptr;
	SDL_Texture* bmp2 = nullptr;
	SDL_Texture* bmp3 = nullptr;
	SDL_Texture* bmp4 = nullptr;
	SDL_Texture* bmp5 = nullptr;
	SDL_Texture* bmp6 = nullptr;

	SDL_Texture* bmpback = nullptr;
	SDL_Texture* bmpMenu = nullptr;
	SDL_Texture* bmpbutton1 = nullptr;
	SDL_Texture* bmpbutton2 = nullptr;
	SDL_Texture* bmpbutton3 = nullptr;
	SDL_Texture* bmpWin = nullptr;


	SDL_Rect Kybik[17]; //квадраты
	int mas[17];// mas[№ квадрата] = № картинки 

};



//О природе, о погоде
void LoadIMG(SDL_Renderer* rend, allVar& all);
void clear(SDL_Window* window, SDL_Renderer* rend, allVar& all);
void win(SDL_Window* window, SDL_Renderer* rend, allVar& all);
int turn(SDL_Window* window, SDL_Renderer* rend, allVar& all, int key, int i, int x1, int y1);
//


//Главное меню
int Menu(SDL_Window* window, SDL_Renderer* rend, allVar& all);
//


//1 LVL
int LVL1(SDL_Window * window, SDL_Renderer * rend, allVar& all);
//


//2 LVL
int LVL2(SDL_Window* window, SDL_Renderer* rend, allVar& all);
int drow_LVL2(SDL_Window* window, SDL_Renderer* rend, allVar& all);
int click_LVL2(SDL_Window* window, SDL_Renderer* rend, allVar& all);

//

//
int LVL3(SDL_Window* window, SDL_Renderer* rend, allVar& all);
int click_LVL3(SDL_Window* window, SDL_Renderer* rend, allVar& all);
int drow_LVL3(SDL_Window* window, SDL_Renderer* rend, allVar& all);
//



