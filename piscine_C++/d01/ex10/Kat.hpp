#ifndef KAT_HPP
# define KAT_HPP

#include <string>
#include <sstream>
#include <fstream>

class Exceptions
{
    public:
        Exceptions(std::string const errMessage);
        ~Exceptions( void );
        
        void    handleError( void ) const;

    private:
        std::string const _message;
};

class Kat
{
    public:
        Kat(char const **av, int ac);
        ~Kat();

        void    processArgs() const;
        void    readStdin( void ) const;
        void    readFile( std::string const fileName) const;

    private:
        std::string         _truncFiles[100];
        std::string         _appFiles[100];        
        char const          **_args;
        std::stringstream   _ss;
        std::ofstream       _ofs;
};

#endif