#include "Header.h"

void LoadIMG(SDL_Renderer* rend, allVar& all) {

	//Картинка победы
	SDL_Surface* bmp41 = SDL_LoadBMP("texturs/win.bmp");
	all.bmpWin = SDL_CreateTextureFromSurface(rend, bmp41);
	SDL_FreeSurface(bmp41);

	//Пустой блок
	SDL_Surface* bmp11 = SDL_LoadBMP("texturs/block.bmp");
	all.bmp = SDL_CreateTextureFromSurface(rend, bmp11);
	SDL_FreeSurface(bmp11);

	//Старт
	SDL_Surface* bmp12 = SDL_LoadBMP("texturs/start.bmp");
	all.bmpStart = SDL_CreateTextureFromSurface(rend, bmp12);
	SDL_FreeSurface(bmp12);

	//Финиш
	SDL_Surface* bmp13 = SDL_LoadBMP("texturs/Finish.bmp");
	all.bmpFinish = SDL_CreateTextureFromSurface(rend, bmp13);
	SDL_FreeSurface(bmp13);

	//1
	SDL_Surface* bmp14 = SDL_LoadBMP("texturs/1.bmp");
	all.bmp1 = SDL_CreateTextureFromSurface(rend, bmp14);
	SDL_FreeSurface(bmp14);

	//2
	SDL_Surface* bmp15 = SDL_LoadBMP("texturs/2.bmp");
	all.bmp2 = SDL_CreateTextureFromSurface(rend, bmp15);
	SDL_FreeSurface(bmp15);

	//3
	SDL_Surface* bmp16 = SDL_LoadBMP("texturs/3.bmp");
	all.bmp3 = SDL_CreateTextureFromSurface(rend, bmp16);
	SDL_FreeSurface(bmp16);

	//4
	SDL_Surface* bmp17 = SDL_LoadBMP("texturs/4.bmp");
	all.bmp4 = SDL_CreateTextureFromSurface(rend, bmp17);
	SDL_FreeSurface(bmp17);

	//5
	SDL_Surface* bmp18 = SDL_LoadBMP("texturs/5.bmp");
	all.bmp5 = SDL_CreateTextureFromSurface(rend, bmp18);
	SDL_FreeSurface(bmp18);

	//6
	SDL_Surface* bmp19 = SDL_LoadBMP("texturs/6.bmp");
	all.bmp6 = SDL_CreateTextureFromSurface(rend, bmp19);
	SDL_FreeSurface(bmp19);

	//Главное меню (задний фон)
	SDL_Surface* bmp20 = SDL_LoadBMP("texturs/back.bmp");
	all.bmpback = SDL_CreateTextureFromSurface(rend, bmp20);
	SDL_FreeSurface(bmp20);

	//Главное меню (кнопка)
	SDL_Surface* bmp30 = SDL_LoadBMP("texturs/menu.bmp");
	all.bmpMenu = SDL_CreateTextureFromSurface(rend, bmp30);
	SDL_FreeSurface(bmp30);

	//легко
	SDL_Surface* bmp21 = SDL_LoadBMP("texturs/button1.bmp");
	all.bmpbutton1 = SDL_CreateTextureFromSurface(rend, bmp21);
	SDL_FreeSurface(bmp21);

	//нормально
	SDL_Surface* bmp22 = SDL_LoadBMP("texturs/button2.bmp");
	all.bmpbutton2 = SDL_CreateTextureFromSurface(rend, bmp22);
	SDL_FreeSurface(bmp22);

	//Сложно
	SDL_Surface* bmp23 = SDL_LoadBMP("texturs/button3.bmp");
	all.bmpbutton3 = SDL_CreateTextureFromSurface(rend, bmp23);
	SDL_FreeSurface(bmp23);

}


void clear(SDL_Window* window, SDL_Renderer* rend, allVar& all) {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(rend);
	SDL_DestroyTexture(all.bmp);
	SDL_DestroyTexture(all.bmp);
	SDL_DestroyTexture(all.bmpStart);
	SDL_DestroyTexture(all.bmpFinish);
	SDL_DestroyTexture(all.bmp1);
	SDL_DestroyTexture(all.bmp2);
	SDL_DestroyTexture(all.bmp3);
	SDL_DestroyTexture(all.bmp4);
	SDL_DestroyTexture(all.bmp5);
	SDL_DestroyTexture(all.bmp6);


	//Выход из SDL и программы
	SDL_Quit();
	exit(1);
	
}

//Поворот картинки
int turn(SDL_Window* window, SDL_Renderer* rend, allVar& all, int key, int i, int x1, int y1) {

	switch (key) {
	case 1:
		all.Kybik[i].x = x1;
		all.Kybik[i].y = y1;
		all.mas[i] = 2;
		SDL_QueryTexture(all.bmp2, NULL, NULL, &all.Kybik[i].w, &all.Kybik[i].h);
		SDL_RenderCopy(rend, all.bmp2, NULL, &all.Kybik[i]);
		break;

	case 2:
		all.Kybik[i].x = x1;
		all.Kybik[i].y = y1;
		all.mas[i] = 1;
		SDL_QueryTexture(all.bmp1, NULL, NULL, &all.Kybik[i].w, &all.Kybik[i].h);
		SDL_RenderCopy(rend, all.bmp1, NULL, &all.Kybik[i]);
		break;

	case 3:
		all.Kybik[i].x = x1;
		all.Kybik[i].y = y1;
		all.mas[i] = 4;
		SDL_QueryTexture(all.bmp4, NULL, NULL, &all.Kybik[i].w, &all.Kybik[i].h);
		SDL_RenderCopy(rend, all.bmp4, NULL, &all.Kybik[i]);
		break;

	case 4:
		all.Kybik[i].x = x1;
		all.Kybik[i].y = y1;
		all.mas[i] = 5;
		SDL_QueryTexture(all.bmp5, NULL, NULL, &all.Kybik[i].w, &all.Kybik[i].h);
		SDL_RenderCopy(rend, all.bmp5, NULL, &all.Kybik[i]);
		break;

	case 5:
		all.Kybik[i].x = x1;
		all.Kybik[i].y = y1;
		all.mas[i] = 6;
		SDL_QueryTexture(all.bmp6, NULL, NULL, &all.Kybik[i].w, &all.Kybik[i].h);
		SDL_RenderCopy(rend, all.bmp6, NULL, &all.Kybik[i]);
		break;

	case 6:
		all.Kybik[i].x = x1;
		all.Kybik[i].y = y1;
		all.mas[i] = 3;
		SDL_QueryTexture(all.bmp3, NULL, NULL, &all.Kybik[i].w, &all.Kybik[i].h);
		SDL_RenderCopy(rend, all.bmp3, NULL, &all.Kybik[i]);
		break;
	}
	SDL_RenderPresent(rend);
	return 1;
}

void win(SDL_Window* window, SDL_Renderer* rend, allVar& all) {

	SDL_Rect rect;

	rect.x = 100;
	rect.y = 300;
	SDL_QueryTexture(all.bmpWin, NULL, NULL, &rect.w, &rect.h);
	SDL_RenderCopy(rend, all.bmpWin, NULL, &rect);
	SDL_RenderPresent(rend);
	SDL_Delay(2000);
}