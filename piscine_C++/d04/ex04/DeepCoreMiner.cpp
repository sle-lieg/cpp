#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{}

DeepCoreMiner::~DeepCoreMiner()
{}

void DeepCoreMiner::mine(IAsteroid* asteroid)
{
    std::cout << "* mining deep ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}