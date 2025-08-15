#pragma once

#include <Upgrade_weapon.h>


class Weapon
{
private:
    float m_physical_damage = 0;
    float m_fire_damage = 0;
    float m_cold_damage = 0;
    float m_electric_damage = 0;
    float m_attack_speed = 0;

    Upgrade_Weapon m_knife_upgrade;

public:
    // Weapon();
    // ~Weapon();

public:
    inline float get_physical_damage() const { return m_physical_damage; };
    inline float get_fire_damage() const { return m_fire_damage; };
    inline float get_cold_damage() const { return m_cold_damage; };
    inline float get_electric_damage() const { return m_electric_damage; };
    inline float get_attack_speed() const { return m_attack_speed; };

    inline void set_physical_damage(float _physical_damage) { m_physical_damage = _physical_damage; };
    inline void set_fire_damage(float _fire_damage) { m_fire_damage = _fire_damage; };
    inline void set_cold_damage(float _cold_damage) { m_cold_damage = _cold_damage; };
    inline void set_electric_damage(float _electric_damage) { m_electric_damage = _electric_damage; };
    inline void set_attack_speed(float _attack_speed) { m_attack_speed = _attack_speed; };

    inline Upgrade_Weapon& get_knife_upgrade() { return m_knife_upgrade; };


};

