#pragma once

#include <Weapon.h>

#include <Orbs.h>


class Forge
{
private:
    Weapon* m_knife;

    Orbs* m_fire_orb;
    Orbs* m_cold_orb;
    Orbs* m_electric_orb;
    Orbs* m_physical_orb;
    Orbs* m_light_orb;


public:
    // Forge();
    // ~Forge();

public:
    inline void set_knife(Weapon* _knife) { m_knife = _knife; };
    inline void set_fire_orb(Orbs* _fire_orb) { m_fire_orb = _fire_orb; };
    inline void set_cold_orb(Orbs* _cold_orb) { m_cold_orb = _cold_orb; };
    inline void set_electic_orb(Orbs* _electric_orb) { m_electric_orb = _electric_orb; };
    inline void set_physical_orb(Orbs* _physical_orb) { m_physical_orb = _physical_orb; };
    inline void set_light_orb(Orbs* _light_orb) { m_light_orb = _light_orb; };

    inline float calculation_fire_damage() { return m_knife->get_fire_damage() + m_fire_orb->get_increased_fire_damage(); };
    inline float calculation_cold_damage() { return m_knife->get_cold_damage() + m_cold_orb->get_increased_cold_damage(); };
    inline float calculation_electric_damage() { return m_knife->get_electric_damage() + m_electric_orb->get_increased_electric_damage(); };
    inline float calculation_physical_damage() { return m_knife->get_physical_damage() + m_physical_orb->get_increased_physical_damage(); };
    inline float calculation_attack_speed() { return m_knife->get_attack_speed() + m_light_orb->get_increased_attack_speed(); };

    inline void use_fire_orb() { m_knife->set_fire_damage(calculation_fire_damage()); };
    inline void use_cold_orb() { m_knife->set_cold_damage(calculation_cold_damage()); };
    inline void use_electric_orb() { m_knife->set_electric_damage(calculation_electric_damage()); };
    inline void use_physical_orb() { m_knife->set_physical_damage(calculation_physical_damage()); };
    inline void use_light_orb() { m_knife->set_attack_speed(calculation_attack_speed()); };
};
