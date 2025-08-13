#pragma once


class Upgrade_Weapon
{
private:
    float m_increased_damage = 0;
    float m_increased_attack_speed = 0;

public:
    // Upgrade_Weapon();
    // ~Upgrade_Weapon();

public:
    inline float get_increased_damage() const { return m_increased_damage; };
    inline float get_increased_attack_speed() const { return m_increased_attack_speed; };

    inline void set_increased_damage(float _increased_damage) { m_increased_damage = _increased_damage; };
    inline void set_increased_attack_speed(float _increased_attack_speed) { m_increased_attack_speed = _increased_attack_speed; };
};
