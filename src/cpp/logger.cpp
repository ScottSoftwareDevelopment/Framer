#include "logger.h"

void Framer::Logger::flush()
{
}

Framer::Logger *Framer::Logger::getInstance()
{
    if(_instance == nullptr){
        _instance = new Logger();
    }

    return _instance;
}

void Framer::Logger::Log(std::string msg)
{
    Log(msg, INFO);
}

void Framer::Logger::Log(std::string msg, LogLevel level)
{
    
}
