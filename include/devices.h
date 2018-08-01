#ifndef DEVICES_H
#define DEVICES_H

class DeviceInfo
{

};

class Device
{
public:
    virtual void Open(){};
    virtual void Close(){};

    virtual void GetInfo();
};

class AudioDevice: public Device
{

};

class GraphicsDevice: public Device{

};

#endif //DEVICES_H