#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
private:
    Logger();

public:
    static Logger& getInstance();


    void log(const std::string& message);
};

#endif