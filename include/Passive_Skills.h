#pragma once


class Passive_Skills
{
private:
    float m_increased_health = 0;
    float m_increased_mana = 0;
    float m_increased_total_damage = 0;
    float m_increased_fire_damage = 0;
    float m_increased_cold_damage = 0;
    float m_increased_electric_damage = 0;
    float m_increased_physical_damage = 0;
    float m_increased_attack_speed = 0;

public:
    // Passive_Skills();
    // ~Passive_Skills();

public:
    inline float get_increased_health() const { return m_increased_health; };
    inline float get_increased_mana() const { return m_increased_mana; };
    inline float get_increased_total_damage() const { return m_increased_total_damage; };
    inline float get_increased_fire_damage() const { return m_increased_fire_damage; };
    inline float get_increased_cold_damage() const { return m_increased_cold_damage; };
    inline float get_increased_electric_damage() const { return m_increased_electric_damage; };
    inline float get_increased_physical_damage() const { return m_increased_physical_damage; };
    inline float get_increased_attack_speed() const { return m_increased_attack_speed; };

    inline void set_increased_health(float _increased_health) { m_increased_health = _increased_health; };
    inline void set_increased_mana(float _increased_mana) { m_increased_mana = _increased_mana; };
    inline void set_increased_total_damage(float _total_damahe) { m_increased_total_damage = _total_damahe; };
    inline void set_increased_fire_damage(float _increased_fire_damage) { m_increased_fire_damage = _increased_fire_damage; };
    inline void set_increased_cold_damage(float _increased_cold_damage) { m_increased_cold_damage = _increased_cold_damage; };
    inline void set_increased_eletcric_damage(float _increased_electric_damage) { m_increased_electric_damage = _increased_electric_damage; };
    inline void set_increased_physical_damage(float _increased_physical_damage) { m_increased_physical_damage = _increased_physical_damage; };
    inline void set_increased_attack_speed(float _increased_attack_speed) { m_increased_attack_speed = _increased_attack_speed; };
};
