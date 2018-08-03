#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <inttypes.h>

typedef uint8_t     Color;
typedef uint16_t    Color16;
typedef uint32_t    Color32;

typedef enum {
    RGB_16,
    RGB_256,
    RGBA_256
} ColorSpace;

class Point {
public:
    int x,y;
};

class Line {
public:
    Point Start;
    Point End;
};

class Rect {
public:
    Point Start;
    int Width, Height;    
};



#endif //GRAPHICS_H