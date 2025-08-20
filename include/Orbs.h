#pragma once

#include <random>


class Orbs
{
private:
    float m_increased_fire_damage = 0;
    float m_increased_cold_damage = 0;
    float m_increased_electric_damage = 0;
    float m_increased_physical_damage = 0;
    float m_increased_attack_speed = 0;

public:
    Orbs(std::mt19937& generator);
    // ~Orbs();

public:
    inline float get_increased_fire_damage() const { return m_increased_fire_damage; }
    inline float get_increased_cold_damage() const { return m_increased_cold_damage; }
    inline float get_increased_electric_damage() const { return m_increased_electric_damage; }
    inline float get_increased_physical_damage() const { return m_increased_physical_damage; }
    inline float get_increased_attack_speed() const { return m_increased_attack_speed; }

    inline void set_increased_fire_damage(float _increased_fire_damage) { m_increased_fire_damage = _increased_fire_damage; }
    inline void set_increased_cold_damage(float _increased_cold_damage) { m_increased_cold_damage = _increased_cold_damage; }
    inline void set_increased_electric_damage(float _increased_electric_damage) { m_increased_electric_damage = _increased_electric_damage; }
    inline void set_increased_physical_damage(float _increased_physical_damage) { m_increased_physical_damage = _increased_physical_damage; }
    inline void set_increased_attack_speed(float _increased_attack_speed) { m_increased_attack_speed = _increased_attack_speed; }

    void print_random_increased_damage_orb();
};
