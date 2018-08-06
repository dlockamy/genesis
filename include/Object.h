#ifndef OBJECT_H
#define OBJECT_H

#include <inttypes.h>

class Object {
public:
    Object();
    ~Object();

private:
    uint32_t id;
};

#endif //OBJECT_H