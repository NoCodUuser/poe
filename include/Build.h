#pragma once


#include <iostream>


#include <Weapon.h>

#include <Character.h>


class Build
{
private:
    Weapon* m_knife = nullptr;
    Character* m_thief = nullptr;

    float m_total_fire_damage = 0;
    float m_total_cold_damage = 0;
    float m_total_electric_damage = 0;
    float m_total_physical_damage = 0;
    float m_total_attack_speed = 0;
    float m_total_damage = 0;

public:
    inline void set_weapon(Weapon* _weapon){ m_knife = _weapon; }
    inline void set_thief(Character* _thief) { m_thief = _thief; }

    inline float get_total_fire_damage() const { return m_total_fire_damage; }
    inline float get_total_cold_damage() const { return m_total_cold_damage; }
    inline float get_total_electric_damage() const { return m_total_electric_damage; }
    inline float get_total_physical_damage() const { return m_total_physical_damage; }
    inline float get_total_attack_speed() const { return m_total_attack_speed; }
    inline float get_total_damage() const { return m_total_damage; }

    inline void set_total_fire_damage(float _total_fire_damage) { m_total_fire_damage = _total_fire_damage; }
    inline void set_total_cold_damage(float _total_cold_damage) { m_total_cold_damage = _total_cold_damage; }
    inline void set_total_electric_damage(float _total_electric_damage) { m_total_electric_damage = _total_electric_damage; }
    inline void set_total_physical_damage(float _total_physical_damage) { m_total_physical_damage = _total_physical_damage; }
    inline void set_total_attack_speed(float _total_attack_speed) { m_total_attack_speed = _total_attack_speed; }
    inline void set_total_damage(float _total_damage) { m_total_damage = _total_damage; }

    void update_total_stats();

    void print_health();
    void print_mana();

    void print_total_damage();
    void print_total_elemental_damage();
    void print_total_physical_damage();
    void print_attack_speed();
    void print_dps(); // доделать

    float calculate_total_fire_damage();
    float calculate_total_cold_damage();
    float calculate_total_electric_damage();
    float calculate_total_physical_damage();
    float calculate_total_attack_speed();
    float calculate_total_damage();

    void pick_gigant();
    void pick_clever();
    void pick_killer();

    float calculate_gigant_health();
    float calculate_gigant_damage();

    float calculate_clever_mana();
    float calculate_clever_fire_damage();
    float calculate_clever_cold_damage();
    float calculate_clever_electric_damage();

    float calculate_killer_health();
    float calculate_killer_mana();
    float calculate_killer_damage();

};

