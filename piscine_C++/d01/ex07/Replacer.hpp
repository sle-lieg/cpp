#ifndef REPLACER_HPP
# define REPLACER_HPP

#include <iostream>
#include <string>
#include <fstream>

class Exceptions
{
    public:
        Exceptions();
};

class Replacer
{
    public:
        Replacer(std::string fname, std::string s1, std::string s2);
        ~Replacer();

        void readFile( void );
        void findAndReplace( void );
        void replace( void );
        void closeFiles( void );
    
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;
        std::string _sCopy;
        std::ifstream _ifs;
        std::ofstream _ofs;
};

#endif