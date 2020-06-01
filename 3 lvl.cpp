#include "Header.h"

int LVL3(SDL_Window* window, SDL_Renderer* rend, allVar& all) {


	drow_LVL3(window, rend, all);
	click_LVL3(window, rend, all);

	return 1;
}

int click_LVL3(SDL_Window* window, SDL_Renderer* rend, allVar& all) {

	SDL_Event event;
	int x1, y1;
	bool quit2 = false;


	while (!quit2)
	{
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit2 = true;
				clear(window, rend, all);
			}

			if (event.type == SDL_MOUSEBUTTONUP && event.button.button == SDL_BUTTON_LEFT) {
				SDL_GetMouseState(&x1, &y1);

				//¬ыход в глав меню
				if ((x1 >= 700) && (x1 <= 800) && (y1 >= 0) && (y1 <= 200)) {
					Menu(window, rend, all);
				}

				///////////////////////////////////////////////////////////////////////
				//1 строка
				//1 квадрат
				if ((x1 >= 0) && (x1 <= 200) && (y1 >= 0) && (y1 <= 200)) {
					turn(window, rend, all, all.mas[1], 1, 0, 0);
					SDL_RenderPresent(rend);
				}

				//2 квадрат
				if ((x1 >= 200) && (x1 <= 400) && (y1 >= 0) && (y1 <= 200)) {
					turn(window, rend, all, all.mas[2], 2, 200, 0);
				}

				//3 квадрат
				if ((x1 >= 400) && (x1 <= 600) && (y1 >= 0) && (y1 <= 200)) {
					turn(window, rend, all, all.mas[3], 3, 400, 0);
				}

				//4 квадрат
				if ((x1 >= 600) && (x1 <= 800) && (y1 >= 0) && (y1 <= 200)) {
					turn(window, rend, all, all.mas[4], 4, 600, 0);
				}

				///////////////////////////////////////////////////////////////////////
				//2 строка
				//5 квадрат
				if ((x1 >= 0) && (x1 <= 200) && (y1 >= 200) && (y1 <= 400)) {
					turn(window, rend, all, all.mas[5], 5, 0, 200);
					SDL_RenderPresent(rend);
				}

				//6 квадрат
				if ((x1 >= 200) && (x1 <= 400) && (y1 >= 200) && (y1 <= 400)) {
					turn(window, rend, all, all.mas[6], 6, 200, 200);
				}

				//7 квадрат
				if ((x1 >= 400) && (x1 <= 600) && (y1 >= 200) && (y1 <= 400)) {
					turn(window, rend, all, all.mas[7], 7, 400, 200);
				}

				//8 квадрат ‘иниш

				///////////////////////////////////////////////////////////////////////
				//3 строка

				//9 квадрат это —тарт

				//10 квадрат
				if ((x1 >= 200) && (x1 <= 400) && (y1 >= 400) && (y1 <= 600)) {
					turn(window, rend, all, all.mas[10], 10, 200, 400);
				}

				//11 квадрат
				if ((x1 >= 400) && (x1 <= 600) && (y1 >= 400) && (y1 <= 600)) {
					turn(window, rend, all, all.mas[11], 11, 400, 400);
				}

				//12 квадрат
				if ((x1 >= 600) && (x1 <= 800) && (y1 >= 400) && (y1 <= 600)) {
					turn(window, rend, all, all.mas[12], 12, 600, 400);
				}


				///////////////////////////////////////////////////////////////////////
				//4 строка
				//13 квадрат
				if ((x1 >= 0) && (x1 <= 200) && (y1 >= 600) && (y1 <= 800)) {
					turn(window, rend, all, all.mas[13], 13, 0, 600);
				}

				//14 квадрат
				if ((x1 >= 200) && (x1 <= 400) && (y1 >= 600) && (y1 <= 800)) {
					turn(window, rend, all, all.mas[14], 14, 200, 600);
				}

				//15 квадрат
				if ((x1 >= 400) && (x1 <= 600) && (y1 >= 600) && (y1 <= 800)) {
					turn(window, rend, all, all.mas[15], 15, 400, 600);
				}

				//16 квадрат
				if ((x1 >= 600) && (x1 <= 800) && (y1 >= 600) && (y1 <= 800)) {
					turn(window, rend, all, all.mas[16], 16, 600, 600);
				}


			}

			if (((all.mas[13] == 6) && (all.mas[14] == 1) && (all.mas[15] == 5)
				&& (all.mas[11] == 4) && (all.mas[10] == 6) 
				&& (all.mas[6] == 4) && (all.mas[5] == 6) 
				&& (all.mas[1] == 3) && (all.mas[2] == 1)
				&& (all.mas[3] == 4) && (all.mas[7] == 6)) 

				|| ((all.mas[5] == 3) && (all.mas[6] == 4) && (all.mas[10] == 6) 
				&& (all.mas[11] == 5) && (all.mas[7] == 3))) {

				win(window, rend, all);
				Menu(window, rend, all);
			}
		}
	}

	return 1;
}

////////////////////////////////////////////////////////////////////////////////////////////////////


//ќтрисовка пол€
int drow_LVL3(SDL_Window* window, SDL_Renderer* rend, allVar& all) {

	
	//1 строчка
	//1
	all.Kybik[1].x = 0;
	all.Kybik[1].y = 0;
	all.mas[1] = 4;
	SDL_QueryTexture(all.bmp4, NULL, NULL, &all.Kybik[1].w, &all.Kybik[1].h);
	SDL_RenderCopy(rend, all.bmp4, NULL, &all.Kybik[1]);
	//2
	all.Kybik[2].x = 200;
	all.Kybik[2].y = 0;
	all.mas[2] = 1;
	SDL_QueryTexture(all.bmp1, NULL, NULL, &all.Kybik[2].w, &all.Kybik[2].h);
	SDL_RenderCopy(rend, all.bmp1, NULL, &all.Kybik[2]);
	//3
	all.Kybik[3].x = 400;
	all.Kybik[3].y = 0;
	all.mas[3] = 6;
	SDL_QueryTexture(all.bmp6, NULL, NULL, &all.Kybik[3].w, &all.Kybik[3].h);
	SDL_RenderCopy(rend, all.bmp6, NULL, &all.Kybik[3]);
	//4
	all.Kybik[4].x = 600;
	all.Kybik[4].y = 0;
	all.mas[4] = 0;
	SDL_QueryTexture(all.bmp, NULL, NULL, &all.Kybik[4].w, &all.Kybik[4].h);
	SDL_RenderCopy(rend, all.bmp, NULL, &all.Kybik[4]);

	////////////////////////////////////////////////////////////////////////////////////////////////////

	//2 строчка
	//5
	all.Kybik[5].x = 0;
	all.Kybik[5].y = 200;
	all.mas[5] = 5;
	SDL_QueryTexture(all.bmp5, NULL, NULL, &all.Kybik[5].w, &all.Kybik[5].h);
	SDL_RenderCopy(rend, all.bmp5, NULL, &all.Kybik[5]);

	//6
	all.Kybik[6].x = 200;
	all.Kybik[6].y = 200;
	all.mas[6] = 3;
	SDL_QueryTexture(all.bmp3, NULL, NULL, &all.Kybik[6].w, &all.Kybik[6].h);
	SDL_RenderCopy(rend, all.bmp3, NULL, &all.Kybik[6]);

	//7
	all.Kybik[7].x = 400;
	all.Kybik[7].y = 200;
	all.mas[7] = 3;
	SDL_QueryTexture(all.bmp3, NULL, NULL, &all.Kybik[7].w, &all.Kybik[7].h);
	SDL_RenderCopy(rend, all.bmp3, NULL, &all.Kybik[7]);

	//8
	all.Kybik[8].x = 600;
	all.Kybik[8].y = 200;
	all.mas[8] = 0;
	SDL_QueryTexture(all.bmpFinish, NULL, NULL, &all.Kybik[8].w, &all.Kybik[8].h);
	SDL_RenderCopy(rend, all.bmpFinish, NULL, &all.Kybik[8]);

	////////////////////////////////////////////////////////////////////////////////////////////////////

	//3 строчка
	//9
	all.Kybik[9].x = 0;
	all.Kybik[9].y = 400;
	all.mas[9] = 0;
	SDL_QueryTexture(all.bmpStart, NULL, NULL, &all.Kybik[9].w, &all.Kybik[9].h);
	SDL_RenderCopy(rend, all.bmpStart, NULL, &all.Kybik[9]);

	//10
	all.Kybik[10].x = 200;
	all.Kybik[10].y = 400;
	all.mas[10] = 4;
	SDL_QueryTexture(all.bmp4, NULL, NULL, &all.Kybik[10].w, &all.Kybik[10].h);
	SDL_RenderCopy(rend, all.bmp4, NULL, &all.Kybik[10]);

	//11
	all.Kybik[11].x = 400;
	all.Kybik[11].y = 400;
	all.mas[11] = 5;
	SDL_QueryTexture(all.bmp5, NULL, NULL, &all.Kybik[11].w, &all.Kybik[11].h);
	SDL_RenderCopy(rend, all.bmp5, NULL, &all.Kybik[11]);

	//12
	all.Kybik[12].x = 600;
	all.Kybik[12].y = 400;
	all.mas[12] = 3;
	SDL_QueryTexture(all.bmp3, NULL, NULL, &all.Kybik[12].w, &all.Kybik[12].h);
	SDL_RenderCopy(rend, all.bmp3, NULL, &all.Kybik[12]);

	////////////////////////////////////////////////////////////////////////////////////////////////////

	//4 строчка
	//13
	all.Kybik[13].x = 0;
	all.Kybik[13].y = 600;
	all.mas[13] = 4;
	SDL_QueryTexture(all.bmp4, NULL, NULL, &all.Kybik[13].w, &all.Kybik[13].h);
	SDL_RenderCopy(rend, all.bmp4, NULL, &all.Kybik[13]);

	//14
	all.Kybik[14].x = 200;
	all.Kybik[14].y = 600;
	all.mas[14] = 1;
	SDL_QueryTexture(all.bmp1, NULL, NULL, &all.Kybik[14].w, &all.Kybik[14].h);
	SDL_RenderCopy(rend, all.bmp1, NULL, &all.Kybik[14]);

	//15
	all.Kybik[15].x = 400;
	all.Kybik[15].y = 600;
	all.mas[15] = 3;
	SDL_QueryTexture(all.bmp4, NULL, NULL, &all.Kybik[15].w, &all.Kybik[15].h);
	SDL_RenderCopy(rend, all.bmp4, NULL, &all.Kybik[15]);
	//16
	all.Kybik[16].x = 600;
	all.Kybik[16].y = 600;
	all.mas[16] = 6;
	SDL_QueryTexture(all.bmp6, NULL, NULL, &all.Kybik[16].w, &all.Kybik[16].h);
	SDL_RenderCopy(rend, all.bmp6, NULL, &all.Kybik[16]);

	// нопка выхода
	all.Kybik[0].x = 700;
	all.Kybik[0].y = 0;
	SDL_QueryTexture(all.bmpMenu, NULL, NULL, &all.Kybik[0].w, &all.Kybik[0].h);
	SDL_RenderCopy(rend, all.bmpMenu, NULL, &all.Kybik[0]);


	SDL_RenderPresent(rend);

	return 1;
}