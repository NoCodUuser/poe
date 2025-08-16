#pragma once


#include <iostream>


#include <Weapon.h>

#include <Character.h>


class Build
{
private:
    Weapon* m_knife = nullptr;
    Character* m_thief = nullptr;

    // float m_total_fire_damage = m_thief->get_fire_damage() + m_knife->get_fire_damage();
    // float m_total_cold_damage = m_thief->get_cold_damage() + m_knife->get_cold_damage();
    // float m_total_electric_damage = m_thief->get_electric_damage() + m_knife->get_electric_damage();
    // float m_total_physical_damage = m_thief->get_physical_damage() + m_knife->get_physical_damage();
    // float m_total_attack_speed = m_thief->get_attack_speed() + m_knife->get_attack_speed();
    // float m_total_elemental_damage = m_total_fire_damage + m_total_cold_damage + m_total_electric_damage;
    // float m_total_damage = m_total_elemental_damage + m_total_physical_damage;

    // инициалзировать нулем, вместо расчетов в переменной добавить функции
    float m_total_fire_damage = 0;
    float m_total_cold_damage = 0;
    float m_total_electric_damage = 0;
    float m_total_physical_damage = m_thief->get_physical_damage() + m_knife->get_physical_damage();
    float m_total_attack_speed = m_thief->get_attack_speed() + m_knife->get_attack_speed();
    float m_total_elemental_damage = m_total_fire_damage + m_total_cold_damage + m_total_electric_damage;
    float m_total_damage = m_total_elemental_damage + m_total_physical_damage;

public:
    inline void set_knife(Weapon* _knife){ m_knife = _knife; };
    inline void set_thief(Character* _thief) { m_thief = _thief; };

    inline float get_total_damage() const { return m_total_damage; };
    inline void set_total_damage(float _total_damage) { m_total_damage = _total_damage; };

    void print_health();
    void print_mana();

    void print_total_damage();
    void print_total_elemental_damage();
    void print_total_physical_damage();
    void print_attack_speed();
    void print_dps();

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

