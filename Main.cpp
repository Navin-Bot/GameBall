#include "Header.h"

/*Обновляем поверхность
SDL_UpdateWindowSurface(window); проверить что делает! */ 

#define SCREEN_W 800
#define SCREEN_H 800


int main(int argc, char* argv[]) {

	allVar all;

	setlocale(LC_ALL, "Russian");
	
	if (SDL_Init(SDL_INIT_EVERYTHING) > 0) {
		cout << "Проблема с библиотекой SDL!" << endl;
		return 0;
	}

	SDL_Window* window = NULL;
	SDL_Renderer* rend = NULL;

	if (SDL_CreateWindowAndRenderer(SCREEN_W, SCREEN_H, SDL_WINDOW_SHOWN, &window, &rend) != 0) {
		cout << "Проблема с библиотекой SDL!" << endl;
		SDL_Quit();
		return 0;
	}

	SDL_SetRenderDrawColor(rend, 0, 0, 0, 0);
	SDL_RenderClear(rend);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	LoadIMG(rend, all);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//LVL1(window, rend, all);

	//LVL2(window, rend, all);

	//LVL3(window, rend, all);
	
	Menu(window, rend, all);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	clear(window, rend, all);
	return 1;
}