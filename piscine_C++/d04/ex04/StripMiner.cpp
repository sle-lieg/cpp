#include "StripMiner.hpp"

StripMiner::StripMiner()
{}

StripMiner::~StripMiner()
{}

void StripMiner::mine(IAsteroid* asteroid)
{
    std::cout << "* strip mining ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}