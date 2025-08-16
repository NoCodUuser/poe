#include <Weapon.h>

#include <Build.h>

#include <Passive_Skills.h>

#include <Character.h>

#include <Orbs.h>

#include <Forge.h>



int main()
{
    Weapon* knife = new Weapon;
    Character* thief = new Character;
    Build* thief_ice_blades = new Build;

    Orbs* fire_orb = new Orbs;
    Orbs* cold_orb = new Orbs;
    Orbs* electric_orb = new Orbs;
    Orbs* physical_orb = new Orbs;
    Orbs* light_orb = new Orbs;

    Forge* forge = new Forge;

    thief_ice_blades->set_thief(thief);
    thief_ice_blades->set_knife(knife);

    forge->set_knife(knife);
    forge->set_fire_orb(fire_orb);
    forge->set_cold_orb(cold_orb);
    forge->set_electic_orb(electric_orb);
    forge->set_physical_orb(physical_orb);
    forge->set_light_orb(light_orb);

    knife->set_physical_damage(10);
    knife->set_fire_damage(0.5);
    knife->set_attack_speed(1.5);

    fire_orb->set_increased_fire_damage(3);
    cold_orb->set_increased_cold_damage(3);
    electric_orb->set_increased_electric_damage(3);
    physical_orb->set_increased_physical_damage(5);
    light_orb->set_increased_attack_speed(0.5);

    // knife->get_knife_upgrade().set_increased_damage(3);
    // knife->get_knife_upgrade().set_increased_damage(2);
    // knife->get_knife_upgrade().set_increased_attack_speed(0.2);

    thief->set_health(100);
    thief->set_mana(50);
    thief->set_physical_damage(13);

    thief->get_gigant().set_increased_health(30);
    thief->get_gigant().set_increased_physical_damage(7);

    thief->get_clever().set_increased_mana(13);
    thief->get_clever().set_increased_fire_damage(2);
    thief->get_clever().set_increased_cold_damage(2);
    thief->get_clever().set_increased_eletcric_damage(2);

    thief->get_killer().set_increased_health(10);
    thief->get_killer().set_increased_mana(10);
    thief->get_killer().set_increased_physical_damage(1.15);

    thief_ice_blades->pick_gigant();
    thief_ice_blades->pick_gigant();
    // thief_ice_blades->pick_gigant();
    // thief_ice_blades->pick_clever();
    // thief_ice_blades->pick_killer();


    thief_ice_blades->print_health();
    thief_ice_blades->print_dps();

    // delete все объекты, потом чистить сразу!!
}






