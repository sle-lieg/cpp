#include <iostream>
#include "Logger.hpp"

int main()
{
    try {
        Logger logger("logFile.txt");

        logger.log("", "hey");
        logger.log("logToConsole", "bobby");
        logger.log("logToConsole", "hefrwgw");
        logger.log("logToConsole", "hewgry");

        Logger logger2("logFile.txt");
        
        logger2.log("logToFile", "hey");
        logger2.log("logToFile", "bobby");
        logger2.log("logToFile", "hefrwgw");
        logger2.log("logToFile", "hewgry");
    } catch (Exceptions &e) {
        e.handleError();
    }

    return (0);
}
