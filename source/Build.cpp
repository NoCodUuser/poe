#include <iostream>


#include <Build.h>

#include <Weapon.h>



void Build::print_health()
{
    std::cout << "Your health: " << m_thief->get_health() << std::endl;
}

void Build::print_mana()
{
    std::cout << "Your mana: " << m_thief->get_mana() << std::endl;
}



void Build::print_total_damage()
{
    std::cout << "Total damage: " << m_total_damage << std::endl;
}

void Build::print_total_elemental_damage()
{
    std::cout << "Fire damage: " << m_total_fire_damage;
    std::cout << "Cold damage: " << m_total_cold_damage;
    std::cout << "Electrc damage: " << m_total_electric_damage;
}

void Build::print_total_physical_damage()
{
    std::cout << "Physical damage: " << m_total_physical_damage;
}

void Build::print_attack_speed()
{
    std::cout << "Attack speed: " << m_total_attack_speed << std::endl;
}

void Build::print_dps()
{
    std::cout << "DPS: " << m_total_damage * m_total_attack_speed << std::endl;
}



void Build::pick_gigant()
{
    m_thief->set_health(calculate_gigant_health());
    m_thief->set_physical_damage(calculate_gigant_damage());
}

void Build::pick_clever()
{
    m_thief->set_fire_damage(calculate_clever_fire_damage());
    m_thief->set_cold_damage(calculate_clever_cold_damage());
    m_thief->set_electric_damage(calculate_clever_electric_damage());

    m_thief->set_mana(calculate_clever_mana());
}

void Build::pick_killer()
{
    m_thief->set_health(calculate_killer_health());
    m_thief->set_mana(calculate_killer_mana());
    set_total_damage(calculate_killer_damage());
}



float Build::calculate_gigant_health()
{
    return m_thief->get_health() + m_thief->get_gigant().get_increased_health();
}

float Build::calculate_gigant_damage()
{
    return m_thief->get_physical_damage() + m_thief->get_gigant().get_increased_physical_damage();
}



float Build::calculate_clever_mana()
{
    return m_thief->get_mana() + m_thief->get_clever().get_increased_mana();
}

float Build::calculate_clever_fire_damage()
{
    return m_thief->get_fire_damage() + m_thief->get_clever().get_increased_fire_damage();
}

float Build::calculate_clever_cold_damage()
{
    return m_thief->get_cold_damage() + m_thief->get_clever().get_increased_cold_damage();
}

float Build::calculate_clever_electric_damage()
{
    return m_thief->get_electric_damage() + m_thief->get_clever().get_increased_electric_damage();
}



float Build::calculate_killer_health()
{
    return m_thief->get_health() + m_thief->get_killer().get_increased_health();
}

float Build::calculate_killer_mana()
{
    return m_thief->get_mana() + m_thief->get_killer().get_increased_mana();
}

float Build::calculate_killer_damage()
{
    return m_total_damage * m_thief->get_killer().get_increased_total_damage();
}
