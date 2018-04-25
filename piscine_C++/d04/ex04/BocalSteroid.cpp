#include "BocalSteroid.hpp"

BocalSteroid::BocalSteroid() : _name("BocalSteroid")
{}

BocalSteroid::~BocalSteroid()
{}

std::string BocalSteroid::beMined(DeepCoreMiner *) const
{
    return "Zazium";
}

std::string BocalSteroid::beMined(StripMiner *) const
{
    return "Krpite";
}

std::string BocalSteroid::getName() const
{
    return _name;
}