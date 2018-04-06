#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <string>

class Exceptions
{
    public:
        Exceptions(std::string const errMessage);
        ~Exceptions( void );
        
        void    handleError( void ) const;

    private:
        std::string const _message;
};

class Logger
{
    public:
        Logger(std::string const fileName);
        ~Logger();
        
        void    log(std::string const & dest, std::string const & message) const;

    private:
        typedef void (Logger::*logFuncs)(std::string const &) const;
        
        void        logToConsole(std::string const & str) const;
        void        logToFile(std::string const & str) const;
        std::string makeLogEntry(std::string message) const;

        logFuncs    _logFuncs[2];
        std::string _fileName;
};

#endif