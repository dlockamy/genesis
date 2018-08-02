#ifndef LOG_H
#define LOG_H

class Log 
{
    public:

    Log();
    Log(const char *path);
    ~Log();

    void Error(const char *error);
    void Printf(const char *format, ...);
};

#endif //LOG_H