#ifndef RENDERER_OPENGL_H
#define RENDERER_OPENGL_H

#include <Renderer.h>

class Renderer_OpenGl : public Renderer {
public:
    Renderer_OpenGl(int height, int width);
    ~Renderer_OpenGl();

    void DrawLine(int x1, int y1, int x2, int y2, ColorSpace colorSpace);
    void DrawLine(Point start, Point end, ColorSpace colorSpace);

    void FillRect(int x, int y, int height, int width, Color32 color, ColorSpace colorSpace);
    void FillRect(Rect rect, Color32 color, ColorSpace colorSpace);

    void Blit(int x, int y, const void *image, ColorSpace colorSpace, int width, int height);
};

#endif //RENDERER_OPENGL_H