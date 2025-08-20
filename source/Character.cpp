#include <Character.h>

#include <Passive_Skills.h>



Character::Character()
{
    set_health(100);
    set_mana(50);
    set_physical_damage(13);

    get_gigant().set_increased_health(30);
    get_gigant().set_increased_physical_damage(7);

    get_clever().set_increased_mana(13);
    get_clever().set_increased_fire_damage(2);
    get_clever().set_increased_cold_damage(2);
    get_clever().set_increased_eletcric_damage(2);

    get_killer().set_increased_health(10);
    get_killer().set_increased_mana(10);
    get_killer().set_increased_total_damage(1.15);
}
