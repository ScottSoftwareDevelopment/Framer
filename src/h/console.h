#pragma once

#include <string>

namespace Console{

    void ClearConsole();
    void Write(std::string message);
    void Write(std::string message, short foreground);
    void Write(std::string message, short foreground, short background);

}