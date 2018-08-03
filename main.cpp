
#include <stdio.h>
#include <iostream>

#include <Renderer.h>
#include "renderer/Render_OpenGl.h"

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main(int argc, char* args[]) {

std::cout << "Starting up..... ";

Renderer *renderer = new Renderer_OpenGl(640,480);

return 0;

}
