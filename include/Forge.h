#pragma once

#include <Weapon.h>

#include <Orbs.h>


class Forge
{
private:
    Weapon* m_knife;

    Orbs* m_fire_orb;

public:
    // Forge();
    // ~Forge();

public:
    float calculation_fire_damage();

    void use_fire_orb();

};
