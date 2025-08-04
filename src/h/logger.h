
/*
    File/console logging
*/

#pragma once

#include <string>
#include <vector>

namespace Framer{

    enum LogLevel{
        INFO, WARNING, ERROR, CRITICAL
    };

    class Logger{

        static Logger * _instance;
        std::vector<std::string> _logs;
        unsigned short _maxSize;

        Logger();

        public:

        Logger* getInstance();
        
        //Log Methods
        void Log(std::string msg);
        void Log(std::string msg, LogLevel level);
    
        void flush();
    };
}

