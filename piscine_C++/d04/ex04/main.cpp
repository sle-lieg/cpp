#include "MiningBarge.hpp"
#include "BocalSteroid.hpp"
#include "AsteroBocal.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"


int main()
{
    MiningBarge barge;

    IMiningLaser* laser1 = new DeepCoreMiner;
    IMiningLaser* laser2 = new StripMiner;
    // DeepCoreMiner   laser1;
    // StripMiner      laser2;
    // DeepCoreMiner   laser3;
    // StripMiner      laser4;

    BocalSteroid    ast1;
    AsteroBocal     ast2;

    barge.equip(laser1);
    barge.equip(laser2);
    // barge.equip(&laser1);
    // barge.equip(&laser2);
    // barge.equip(&laser3);
    // barge.equip(&laser4);

    barge.mine(&ast1);
    barge.mine(&ast2);    

    return 0;
}