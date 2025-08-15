#pragma once

#include <Passive_Skills.h>


class Character
{
private:
    float m_health = 0;
    float m_mana = 0;
    float m_damage = 0;

    Passive_Skills m_gigant;
    Passive_Skills m_clever;
    Passive_Skills m_killer;

public:
    // Character();
    // ~Character()
public:
    inline float get_health() const { return m_health; };
    inline float get_mana() const { return m_mana; };
    inline float get_damage() const { return m_damage; };

    inline void set_health(float _health) { m_health = _health; };
    inline void set_mana(float _mana) { m_mana = _mana; };
    inline void set_damage(float _damage) { m_damage = _damage; };

    inline Passive_Skills& get_gigant() { return m_gigant; };
    inline Passive_Skills& get_clever() { return m_clever; };
    inline Passive_Skills& get_killer() { return m_killer; };
};

