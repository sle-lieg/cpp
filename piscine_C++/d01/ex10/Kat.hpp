#ifndef KAT_HPP
# define KAT_HPP

#include <string>
#include <fstream>

class Kat
{
    public:
        Kat(std::string const args[]);
        ~Kat();

        void    processArgs() const;
        void    readStdin( void ) const;
        void    readFile( std::string const fileName) const;

    private:
        std::string const   _args[];
        // char const      **_args;
        std::ofstream   _ofs;
};

#endif