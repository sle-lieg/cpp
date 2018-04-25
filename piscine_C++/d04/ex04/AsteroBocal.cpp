#include "AsteroBocal.hpp"

AsteroBocal::AsteroBocal() : _name("AsteroBocal")
{}

AsteroBocal::~AsteroBocal()
{}

std::string AsteroBocal::beMined(DeepCoreMiner *) const
{
    return "Thorite";
}

std::string AsteroBocal::beMined(StripMiner *) const
{
    return "Flavium";
}

std::string AsteroBocal::getName() const
{
    return _name;
}