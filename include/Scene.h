#ifndef SCENE_H
#define SCENE_H

#include <OS.h>

typedef enum {
    BASE,
    MODEL,
    IMAGE,
    VIDEO
} ObjectTypes;

class Scene {
public:
    Scene(OS &os);
    ~Scene();


//private:

};

#endif //SCENE_H