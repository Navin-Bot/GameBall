#include "Header.h"

int Menu(SDL_Window* window, SDL_Renderer* rend, allVar& all) {

	SDL_Rect b;

	b.x = 0;
	b.y = 0;
	SDL_QueryTexture(all.bmpback, NULL, NULL, &b.w, &b.h);
	SDL_RenderCopy(rend, all.bmpback, NULL, &b);

	//////////////////////////////////////////////////////////////////
	//Легко
	b.x = 50; b.y = 450;
	SDL_QueryTexture(all.bmpbutton1, NULL, NULL, &b.w, &b.h);
	SDL_RenderCopy(rend, all.bmpbutton1, NULL, &b);

	//Нормально
	b.x = 300; b.y = 450;
	SDL_QueryTexture(all.bmpbutton2, NULL, NULL, &b.w, &b.h);
	SDL_RenderCopy(rend, all.bmpbutton2, NULL, &b);

	//Сложно
	b.x = 550; b.y = 450;
	SDL_QueryTexture(all.bmpbutton3, NULL, NULL, &b.w, &b.h);
	SDL_RenderCopy(rend, all.bmpbutton3, NULL, &b);

	//Кнопка выхода
	b.x = 700;
	b.y = 0;
	SDL_QueryTexture(all.bmpMenu, NULL, NULL, &b.w, &b.h);
	SDL_RenderCopy(rend, all.bmpMenu, NULL, &b);

	SDL_RenderPresent(rend);


	SDL_Event ev;
	int x1, y1;
	bool quit = false;

	while (!quit)
	{
		while (SDL_PollEvent(&ev)) {

			if (ev.type == SDL_QUIT) {
				quit = true;
				clear(window, rend, all);
			}

		

			if (ev.type == SDL_MOUSEBUTTONUP && ev.button.button == SDL_BUTTON_LEFT) {
				SDL_GetMouseState(&x1, &y1);

				//Выход в глав меню
				if ((x1 >= 700) && (x1 <= 800) && (y1 >= 0) && (y1 <= 200)) {
					clear(window, rend, all);
				}

				//Легко (нажатие)
				if ((x1 >= 50) && (x1 <= 250) && (y1 >= 450) && (y1 <= 650)) {
					LVL1(window, rend, all);
				}

				//Нормально (нажатие)
				if ((x1 >= 350) && (x1 <= 550) && (y1 >= 450) && (y1 <= 650)) {
					LVL2(window, rend, all);
				}

				//Сложно (нажатие)
				if ((x1 >= 550) && (x1 <= 750) && (y1 >= 450) && (y1 <= 650)) {
					LVL3(window, rend, all);
				}
			}
		}

	}

	return 1;
}