#include <stdio.h>
#include <iostream>
#include <SDL2/SDL.h>

#include <OS.h>
#include "Render_OpenGl.h"

Renderer_OpenGl::Renderer_OpenGl(OS &os, int height, int width) {


if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
    std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
    //return 4;
}

//open a window
SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
if (win == nullptr){
    std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
    //return 3;
}

//renderer
SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
if (ren == nullptr){
    std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
    //return 2;
}

//load bitmap
SDL_Surface *bmp = SDL_LoadBMP("test_image.bmp");
if (bmp == nullptr){
    std::cout << "SDL_LoadBMP Error: " << SDL_GetError() << std::endl;
    //return 6;
}

SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
SDL_FreeSurface(bmp);
if (tex == nullptr){
    std::cout << "SDL_CreateTextureFromSurface Error: " << SDL_GetError() << std::endl;
    //return 5;
}

std::cout << "Render clear";
SDL_RenderClear(ren);

std::cout << "Rendercopy";
SDL_RenderCopy(ren, tex, NULL, NULL);

std::cout << "SDL_RenderPresent ";
SDL_RenderPresent(ren);

bool quit = false;

//Event handler
SDL_Event e;

while (!quit)
{
	//Handle events on queue
	while (SDL_PollEvent(&e) != 0)
	{
		//User requests quit
		if (e.type == SDL_QUIT)
		{
			quit = true;
		}
	}
}

};

Renderer_OpenGl::~Renderer_OpenGl() {
    
};

void Renderer_OpenGl::DrawLine(int x1, int y1, int x2, int y2, ColorSpace colorSpace) {
    
};

void Renderer_OpenGl::DrawLine(Point start, Point end, ColorSpace colorSpace){
    
};

void Renderer_OpenGl::FillRect(int x, int y, int height, int width, Color32 color, ColorSpace colorSpace) {
    
};

void Renderer_OpenGl::FillRect(Rect rect, Color32 color, ColorSpace colorSpace) {
    
};

void Renderer_OpenGl::Blit(int x, int y, const void *image, ColorSpace colorSpace, int width, int height) {
    
};
