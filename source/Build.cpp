#include <iostream>


#include <Build.h>

#include <Weapon.h>

#include <Upgrade_weapon.h>



void Build::print_upgrades()
{
    std::cout << "Damage for hit: " << m_knife->get_damage() << std::endl;
    std::cout << "Increased damage: " << m_knife->get_knife_upgrade().get_increased_damage() << std::endl;
    std::cout << std::endl;
    std::cout << "Attack speed: " << m_knife->get_attack_speed() << std::endl;
    std::cout << "Increased attack speed: " << m_knife->get_knife_upgrade().get_increased_attack_speed() << std::endl;
    std::cout << std::endl;
    std::cout << "Final damage: " << calculate_damage_for_hit() << std::endl;
    std::cout << std::endl;
    std::cout << "Final attack speed: " << calculate_attack_speed() << std::endl;
    std::cout << std::endl;
    std::cout << "DPS: " << calculate_DPS() << std::endl;
}


void Build::set_Weapon(Weapon* _knife)
{
    m_knife = _knife;
}


float Build::calculate_damage_for_hit()
{
    return m_knife->get_damage() * m_knife->get_knife_upgrade().get_increased_damage();
}

float Build::calculate_attack_speed()
{
    return m_knife->get_attack_speed() * m_knife->get_knife_upgrade().get_increased_attack_speed();
}

float Build::calculate_DPS()
{
    return calculate_damage_for_hit() * calculate_attack_speed();
}
