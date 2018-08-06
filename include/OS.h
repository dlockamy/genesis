#ifndef OS_H
#define OS_H

#include <Object.h>

class OS : public Object {
public:
    
    OS();

    void GetDisplayDeviceInfo();
    void GetAudioDeviceInfo();

};

#endif //OS_H