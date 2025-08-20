#include <iostream>

#include <random>


#include <Weapon.h>



void Weapon::generate_stats(std::mt19937& generator, enum Weapon_Type _type)
{
    if(_type == Knife)
    {
        std::uniform_int_distribution<> knife_physical_damage(1, 5);
        std::uniform_int_distribution<> knife_elemental_damage(0, 2);
        std::uniform_real_distribution<> knife_attack_speed(0.3, 1.2);

        set_fire_damage(knife_elemental_damage(generator));
        set_cold_damage(knife_elemental_damage(generator));
        set_electric_damage(knife_elemental_damage(generator));
        set_physical_damage(knife_physical_damage(generator));
        set_attack_speed(knife_attack_speed(generator));
    }
    else if(_type == Axe)
    {
        std::uniform_int_distribution<> axe_physical_damage(2, 8);
        std::uniform_int_distribution<> axe_elemental_damage(0, 3);
        std::uniform_real_distribution<> axe_attack_speed(0.1, 0.6);

        set_fire_damage(axe_elemental_damage(generator));
        set_cold_damage(axe_elemental_damage(generator));
        set_electric_damage(axe_elemental_damage(generator));
        set_physical_damage(axe_physical_damage(generator));
        set_attack_speed(axe_attack_speed(generator));
    }
    else if(_type == Sword)
    {
        std::uniform_int_distribution<> sword_physical_damage(2, 7);
        std::uniform_int_distribution<> sword_elemental_damage(0, 4);
        std::uniform_real_distribution<> sword_attack_speed(0.2, 0.8);

        set_fire_damage(sword_elemental_damage(generator));
        set_cold_damage(sword_elemental_damage(generator));
        set_electric_damage(sword_elemental_damage(generator));
        set_physical_damage(sword_physical_damage(generator));
        set_attack_speed(sword_attack_speed(generator));
    }
    else if(_type == Rapier)
    {
        std::uniform_int_distribution<> rapier_physical_damage(1, 5);
        std::uniform_int_distribution<> rapier_elemental_damage (1, 3);
        std::uniform_real_distribution<> rapier_attack_speed(0.4, 1);

        set_fire_damage(rapier_elemental_damage(generator));
        set_cold_damage(rapier_elemental_damage(generator));
        set_electric_damage(rapier_elemental_damage(generator));
        set_physical_damage(rapier_physical_damage(generator));
        set_attack_speed(rapier_attack_speed(generator));
    }
}



void Weapon::print_stats()
{
    std::cout << "Fire damage: " << m_fire_damage << std::endl;
    std::cout << "Cold damage: " << m_cold_damage << std::endl;
    std::cout << "Electric damage: " << m_electric_damage << std::endl;
    std::cout << "Physical damage: " << m_physical_damage << std::endl;
    std::cout << "Attack speed: " << m_attack_speed << std::endl;
}
