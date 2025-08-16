#pragma once

#include <Passive_Skills.h>


class Character
{
private:
    float m_health = 0;
    float m_mana = 0;
    float m_fire_damage = 0;
    float m_cold_damage = 0;
    float m_electric_damage = 0;
    float m_physical_damage = 0;
    float m_attack_speed = 0;

    Passive_Skills m_gigant;
    Passive_Skills m_clever;
    Passive_Skills m_killer;

public:
    // Character();
    // ~Character()
public:
    inline float get_health() const { return m_health; };
    inline float get_mana() const { return m_mana; };
    inline float get_fire_damage() const { return m_fire_damage; };
    inline float get_cold_damage() const { return m_cold_damage; };
    inline float get_electric_damage() const { return m_electric_damage; };
    inline float get_physical_damage() const { return m_physical_damage; };
    inline float get_attack_speed() const { return m_attack_speed; };

    inline void set_health(float _health) { m_health = _health; };
    inline void set_mana(float _mana) { m_mana = _mana; };
    inline void set_fire_damage(float _fire_damage) { m_fire_damage = _fire_damage; };
    inline void set_cold_damage(float _cold_damage) { m_cold_damage = _cold_damage; };
    inline void set_electric_damage (float _electric_damage) { m_electric_damage = _electric_damage; };
    inline void set_physical_damage(float _damage) { m_physical_damage = _damage; };
    inline void set_attack_speed(float _attack_speed) { m_attack_speed = _attack_speed; };

    inline Passive_Skills& get_gigant() { return m_gigant; };
    inline Passive_Skills& get_clever() { return m_clever; };
    inline Passive_Skills& get_killer() { return m_killer; };
};

