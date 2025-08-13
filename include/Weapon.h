#pragma once

#include <Upgrade_weapon.h>

class Weapon
{
private:
    float m_damage = 0;
    float m_attack_speed = 0;

    Upgrade_Weapon m_knife_upgrade;

public:
    // Weapon();
    // ~Weapon();

public:
    inline float get_damage() const { return m_damage; };
    inline float get_attack_speed() const { return m_attack_speed; };

    inline void set_damage(float _damage) { m_damage = _damage; };
    inline void set_attack_speed(float _attack_speed) { m_attack_speed = _attack_speed; };

    inline Upgrade_Weapon& get_knife_upgrade() { return m_knife_upgrade; };


};

