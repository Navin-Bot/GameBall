#include "Header.h"

int LVL1(SDL_Window* window, SDL_Renderer* rend, allVar& all) {


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Отрисовка поля
	SDL_Rect Kyb;

	//1 строчка
	int x = 0;
	for (int i = 0; i <= 4; i++) {

		Kyb.x = 0 + x;
		x += 200;
		Kyb.y = 0;
		SDL_QueryTexture(all.bmp, NULL, NULL, &Kyb.w, &Kyb.h);
		SDL_RenderCopy(rend, all.bmp, NULL, &Kyb);
	}


	//2 строчка
	x = 0;
	for (int i = 0; i <= 4; i++) {

		Kyb.x = 0 + x;
		x += 200;
		Kyb.y = 200;
		SDL_QueryTexture(all.bmp, NULL, NULL, &Kyb.w, &Kyb.h);
		SDL_RenderCopy(rend, all.bmp, NULL, &Kyb);
	}


	//3 строчка
	x = 0;
	for (int i = 0; i <= 4; i++) {

		Kyb.x = 0 + x;
		x += 200;
		Kyb.y = 600;
		SDL_QueryTexture(all.bmp, NULL, NULL, &Kyb.w, &Kyb.h);
		SDL_RenderCopy(rend, all.bmp, NULL, &Kyb);
	}


	//start
	Kyb.x = 0;
	Kyb.y = 400;
	SDL_QueryTexture(all.bmpStart, NULL, NULL, &Kyb.w, &Kyb.h);
	SDL_RenderCopy(rend, all.bmpStart, NULL, &Kyb);


	//finish
	Kyb.x = 600;
	Kyb.y = 400;
	SDL_QueryTexture(all.bmpFinish, NULL, NULL, &Kyb.w, &Kyb.h);
	SDL_RenderCopy(rend, all.bmpFinish, NULL, &Kyb);


	//block 1
	Kyb.x = 400;
	Kyb.y = 400;
	SDL_QueryTexture(all.bmp1, NULL, NULL, &Kyb.w, &Kyb.h);
	SDL_RenderCopy(rend, all.bmp1, NULL, &Kyb);

	//block 2
	Kyb.x = 200;
	Kyb.y = 400;
	SDL_QueryTexture(all.bmp2, NULL, NULL, &Kyb.w, &Kyb.h);
	SDL_RenderCopy(rend, all.bmp2, NULL, &Kyb);


	//Кнопка выхода
	Kyb.x = 700;
	Kyb.y = 0;
	SDL_QueryTexture(all.bmpMenu, NULL, NULL, &Kyb.w, &Kyb.h);
	SDL_RenderCopy(rend, all.bmpMenu, NULL, &Kyb);

	SDL_RenderPresent(rend);

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Нажатие на мышку + поворот квадрата

	SDL_Event event;
	int x1, y1;
	int k1 = 2, k2 = 1;

	bool quit1 = false;

	while (!quit1)
	{
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit1 = true;
				clear(window, rend, all);
			}

			if (event.type == SDL_MOUSEBUTTONUP && event.button.button == SDL_BUTTON_LEFT) {
				SDL_GetMouseState(&x1, &y1);

				//Выход в глав меню
				if ((x1 >= 700) && (x1 <= 800) && (y1 >= 0) && (y1 <= 200)) {
					Menu(window, rend, all);
				}

				//Для квадрата №1
				if ((x1 >= 200) && (x1 <= 400) && (y1 >= 400) && (y1 <= 600)) {

					Kyb.x = 200;
					Kyb.y = 400;

					if (k1 == 1) {

						SDL_QueryTexture(all.bmp2, NULL, NULL, &Kyb.w, &Kyb.h);
						SDL_RenderCopy(rend, all.bmp2, NULL, &Kyb);
						SDL_RenderPresent(rend);

						k1 = 2;
						//cout << "k1: " << k1 << endl;
					}
					else {


						SDL_QueryTexture(all.bmp1, NULL, NULL, &Kyb.w, &Kyb.h);
						SDL_RenderCopy(rend, all.bmp1, NULL, &Kyb);
						SDL_RenderPresent(rend);
						k1 = 1;
						//cout << "k1: " << k1 << endl;
					}


				}


				//Для квадрата №2
				if ((x1 >= 400) && (x1 <= 600) && (y1 >= 400) && (y1 <= 600)) {

					Kyb.x = 400;
					Kyb.y = 400;

					if (k2 == 2) {


						SDL_QueryTexture(all.bmp1, NULL, NULL, &Kyb.w, &Kyb.h);
						SDL_RenderCopy(rend, all.bmp1, NULL, &Kyb);
						SDL_RenderPresent(rend);
						k2 = 1;
						//cout << "k2: " << k2 << endl;
					}

					else {

						SDL_QueryTexture(all.bmp2, NULL, NULL, &Kyb.w, &Kyb.h);
						SDL_RenderCopy(rend, all.bmp2, NULL, &Kyb);
						SDL_RenderPresent(rend);
						k2 = 2;
						//cout << "k2: " << k2 << endl;
					}

				}
				//Проверка победы
				if ((k1 == 1) && (k2 == 1)) {
					win(window, rend, all);
					Menu(window, rend, all);
				}

			}
		}
	}

	return 1;
}