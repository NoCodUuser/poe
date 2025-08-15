#pragma once


class Passive_Skills
{
private:
    float m_increased_health = 0;
    float m_increased_mana = 0;
    float m_increased_damage = 0;

public:
    // Passive_Skills();
    // ~Passive_Skills();

public:
    inline float get_increased_health() const { return m_increased_health; };
    inline float get_increased_mana() const { return m_increased_mana; };
    inline float get_increased_damage() const { return m_increased_damage; };

    inline void set_increased_health(float _increased_health) { m_increased_health = _increased_health; };
    inline void set_increased_mana(float _increased_mana) { m_increased_mana = _increased_mana; };
    inline void set_increased_damage(float _increased_damage) { m_increased_damage = _increased_damage; };
};
