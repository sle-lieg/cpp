#include "Replacer.hpp"
#include <iostream>


/**
 * ******** Class Replacer **********
 */
Replacer::Replacer(std::string fname, std::string s1, std::string s2) :
    _filename(fname), _s1(s1), _s2(s2), _sCopy(""), _ifs(fname, std::ios::in), _ofs(fname + ".replace", std::ios::trunc)
{
    if (!_ifs.is_open())
        throw Exceptions("Error: file doesn't exist or path '" + fname + "' is invalid");
    if (_s1.empty())
        throw Exceptions("Error: 'str to find' can't be empty");
    if (!_ofs.is_open())
        throw Exceptions("Error: path '" + fname + "' is invalid");
}

Replacer::~Replacer()
{
}

void Replacer::readFile()
{
    std::string buffer;

    while (std::getline(_ifs, buffer))
        _sCopy += buffer;
    if (_ifs.bad())
        throw Exceptions("Error: an error occured while reading file " + _filename);
}

void Replacer::findAndReplace()
{
    for (std::size_t i = 0; (i = _sCopy.find(_s1, i)) != std::string::npos;)
        _sCopy.replace(i, _s1.size(), _s2);
}

void Replacer::replace(void)
{

    readFile();
    std::cout << _sCopy << std::endl;

    findAndReplace();

    _ofs.write(_sCopy.c_str(), _sCopy.size());
    if (_ofs.bad())
        throw Exceptions("Error: an error occured while writing to file " + _filename + ".replace");
}

void Replacer::closeFiles()
{
    _ifs.close();
    _ofs.close();
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