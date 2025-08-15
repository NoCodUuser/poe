#include <iostream>


#include <Build.h>

#include <Weapon.h>

#include <Upgrade_weapon.h>



void Build::print_health()
{
    std::cout << "Your health: " << m_thief->get_health() << std::endl;
}

void Build::print_mana()
{
    std::cout << "Your mana: " << m_thief->get_mana() << std::endl;
}

void Build::print_damage()
{
    std::cout << "Your damage: " << m_thief->get_damage();
}


void Build::print_damage_per_hit()
{
    std::cout << "Damage per hit: " << calculate_damage_per_hit() << std::endl;
}

void Build::print_attack_speed()
{
    std::cout << "Attack speed: " << calculate_attack_speed() << std::endl;
}

void Build::print_dps()
{
    std::cout << "DPS: " << calculate_dps() << std::endl;
}


float Build::calculate_damage_per_hit()
{
    return m_knife->get_physical_damage() + m_knife->get_knife_upgrade().get_increased_damage();
}

float Build::calculate_attack_speed()
{
    return m_knife->get_attack_speed() + m_knife->get_knife_upgrade().get_increased_attack_speed();
}

float Build::calculate_dps()
{
    return calculate_damage_per_hit() * calculate_attack_speed();
}



void Build::pick_gigant()
{
    m_thief->set_health(calculate_gigant_health());
    m_thief->set_damage(calculate_gigant_damage());
}


float Build::calculate_gigant_health()
{
    return m_thief->get_health() + m_thief->get_gigant().get_increased_health();
}

float Build::calculate_gigant_damage()
{
    return m_thief->get_damage() + m_thief->get_gigant().get_increased_damage();
}

// float Build::calculate_mana()
// {
//     return m_thief->get_mana() + m_thief->get_clever().get_increased_mana() +
//            m_thief->get_killer().get_increased_mana();
// }

// float Build::calculate_bonus_damage()
// {
//     return m_thief->get_damage() + m_thief->get_gigant().get_increased_damage() +
//            m_thief->get_clever().get_increased_damage() + m_thief->get_killer().get_increased_damage();
// }
