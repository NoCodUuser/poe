#include <Forge.h>



float Forge::calculation_fire_damage()
{
    return m_knife->get_fire_damage() + m_fire_orb->get_increased_fire_damage();
}


void Forge::use_fire_orb()
{
    m_knife->set_fire_damage(calculation_fire_damage());
}
