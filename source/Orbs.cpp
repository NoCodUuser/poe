#include <random>

#include <iostream>

#include <Orbs.h>



Orbs::Orbs(std::mt19937& generator)
{
    std::uniform_int_distribution<> orbs_damage(1, 5);
    std::uniform_real_distribution<> orbs_attack_speed(0.2, 0.6);

    set_increased_fire_damage(orbs_damage(generator));
    set_increased_cold_damage(orbs_damage(generator));
    set_increased_electric_damage(orbs_damage(generator));
    set_increased_physical_damage(orbs_damage(generator));

    set_increased_attack_speed(orbs_attack_speed(generator));
}



void Orbs::print_random_increased_damage_orb()
{
    std::cout << "Incresed orb fire damage: " << m_increased_fire_damage << std::endl;
    std::cout << "Increased orb cold damage: " << m_increased_cold_damage << std::endl;
    std::cout << "Increased orb electric damage: " << m_increased_electric_damage << std::endl;
    std::cout << "Increased orb physical damage: " << m_increased_physical_damage << std::endl;
    std::cout << "increased orb attack speed: " << m_increased_attack_speed << std::endl;
}
