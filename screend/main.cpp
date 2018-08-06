
#include <stdio.h>
#include <iostream>

#include <OS.h>

#include "../renderer/Render_OpenGl.h"

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main(int argc, char* args[]) {

std::cout << "Starting up..... ";

OS *os = new OS();
Renderer *renderer = new Renderer_OpenGl(*os, 640,480);

return 0;

}
