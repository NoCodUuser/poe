#include <Weapon.h>

#include <Upgrade_weapon.h>

#include <Build.h>

#include <Passive_Skills.h>

#include <Character.h>

#include <Orbs.h>



int main()
{
    Weapon* knife = new Weapon;
    Build* thief_ice_blades = new Build;
    Character* thief = new Character;

    Orbs* fire_orb = new Orbs;

    thief_ice_blades->set_thief(thief);
    thief_ice_blades->set_knife(knife);

    knife->set_physical_damage(10);
    knife->set_fire_damage(0.5);
    knife->set_attack_speed(1.5);

    fire_orb->set_increased_fire_damage(5);

    // knife->get_knife_upgrade().set_increased_damage(3);
    // knife->get_knife_upgrade().set_increased_damage(2);
    // knife->get_knife_upgrade().set_increased_attack_speed(0.2);

    thief->set_health(100);
    thief->set_mana(50);
    thief->set_damage(13);

    thief->get_gigant().set_increased_health(30);
    thief->get_gigant().set_increased_damage(7);

    thief->get_clever().set_increased_mana(13);
    thief->get_clever().set_increased_damage(5);

    thief->get_killer().set_increased_health(10);
    thief->get_killer().set_increased_mana(10);
    thief->get_killer().set_increased_damage(15);

    thief_ice_blades->pick_gigant();
    // доделать клевер и киллер

    thief_ice_blades->print_health();

    thief_ice_blades->print_damage_per_hit();
    thief_ice_blades->print_attack_speed();
    thief_ice_blades->print_dps();

}






