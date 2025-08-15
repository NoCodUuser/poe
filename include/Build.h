#pragma once


#include <iostream>


#include <Weapon.h>

#include <Upgrade_weapon.h>

#include <Character.h>


class Build
{
private:
    Weapon* m_knife = nullptr;
    Character* m_thief = nullptr;

public:
    inline void set_knife(Weapon* _knife){ m_knife = _knife; };
    inline void set_thief(Character* _thief) { m_thief = _thief; };

    void print_health();
    void print_mana();
    void print_damage();

    void print_damage_per_hit();
    void print_attack_speed();
    void print_dps();
// добавить вывод огненного урона и проверить верно ли работает огненная сфера
    float calculate_damage_per_hit();
    float calculate_attack_speed();
    float calculate_dps();

    void pick_gigant();

    float calculate_gigant_health();
    float calculate_gigant_damage();

    // float calculate_mana();
    // float calculate_bonus_damage();

};

