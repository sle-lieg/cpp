#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
    for (int i = 0; i < NB_LASERS; ++i)
        _lasers[i] = nullptr;
}

MiningBarge::MiningBarge(MiningBarge const &src)
{
    for (int i = 0; i < NB_LASERS; ++i)
        _lasers[i] = src._lasers[i];
}

MiningBarge::~MiningBarge()
{}

MiningBarge& MiningBarge::operator=(MiningBarge const &src)
{
    for (int i = 0; i < NB_LASERS; ++i)
        _lasers[i] = src._lasers[i];
    return *this;
}

void MiningBarge::equip(IMiningLaser* laser)
{
    for (int i = 0; i < NB_LASERS; ++i)
        if (!_lasers[i])
        {
            _lasers[i] = laser;
            return;
        }

}

void MiningBarge::mine(IAsteroid* asteroid) const
{
    for (int i = 0; i < NB_LASERS; ++i)
        if (_lasers[i])
            _lasers[i]->mine(asteroid);
}