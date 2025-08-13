#pragma once


#include <iostream>


#include <Weapon.h>

#include <Upgrade_weapon.h>



class Build
{
private:
    Weapon* m_knife = nullptr;

public:
    void print_upgrades();

    void set_Weapon(Weapon* _knife);

    float calculate_damage_for_hit();
    float calculate_attack_speed();
    float calculate_DPS();
};

