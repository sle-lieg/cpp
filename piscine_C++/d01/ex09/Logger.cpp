#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include "Logger.hpp"
#include <stdlib.h>

Logger::Logger(std::string const fileName) : _fileName(fileName)
{
    _logFuncs[0] = &Logger::logToConsole;
    _logFuncs[1] = &Logger::logToFile;
}

Logger::~Logger()
{}

void    Logger::logToConsole(std::string const & str) const
{
    std::cout << str << std::endl;
}

void    Logger::logToFile(std::string const & str) const
{
    std::ofstream ofs(_fileName, std::ios_base::app);
    if (!ofs.is_open())
        throw Exceptions("Error: file " + _fileName + " doesn't exist or path is invalid.");
    ofs.write(str.c_str(), str.size());
    ofs.write("\n", 1);
    if (ofs.bad())
        throw Exceptions("Error: an error occured while writing to file " + _fileName + ".");
    ofs.close();
}

std::string     Logger::makeLogEntry(std::string message) const
{
    std::time_t date;
    std::string logMess;
    std::stringstream ss;

    std::time(&date);
    logMess = std::ctime(&date);

    ss << "[" << logMess.substr(0, logMess.size() - 1) << "]";
    ss << "[" << getenv("USER") << "]";
    ss << message;

    return ss.str();
}

void    Logger::log(std::string const & dest, std::string const & message) const
{
    const int   tabLen = 2;
    std::string funcsNames[] = {"logToConsole", "logToFile"};
    for (int i = 0; i < tabLen; ++i)
    {
        if (funcsNames[i] == dest)
        {
            (this->*_logFuncs[i])(this->makeLogEntry(message));
            return;
        }
    }
}

/**
 * ******** Class Exceptions **********
 */
Exceptions::Exceptions(const std::string errMessage) : _message(errMessage)
{
}

Exceptions::~Exceptions()
{}

void    Exceptions::handleError() const
{
    std::cout << _message << std::endl;
}
