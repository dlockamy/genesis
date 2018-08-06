#ifndef RENDERER_H
#define RENDERER_H

#include <OS.h>
#include <graphics.h>

class Renderer {
public:
    Renderer();
    ~Renderer();

    virtual void DrawLine(int x1, int y1, int x2, int y2, ColorSpace colorSpace)=0;
    virtual void DrawLine(Point start, Point end, ColorSpace colorSpace)=0;

    virtual void FillRect(int x, int y, int height, int width, Color32 color, ColorSpace colorSpace)=0;
    virtual void FillRect(Rect rect, Color32 color, ColorSpace colorSpace)=0;

    virtual void Blit(int x, int y, const void *image, ColorSpace colorSpace, int width, int height)=0;
};

#endif //RENDERER_H