#include <random>


#include <Weapon.h>

#include <Build.h>

#include <Passive_Skills.h>

#include <Character.h>

#include <Orbs.h>

#include <Forge.h>



int main()
{
    std::random_device random;
    std::mt19937 generator(random());

    Weapon* weapon = new Weapon;
    Character* thief = new Character;
    Build* thief_ice_blades = new Build;

    Orbs* orbs = new Orbs(generator);
    Orbs* fire_orb = new Orbs(generator);
    Orbs* cold_orb = new Orbs(generator);
    Orbs* electric_orb = new Orbs(generator);
    Orbs* physical_orb = new Orbs(generator);
    Orbs* light_orb = new Orbs(generator);

    Forge* forge = new Forge;

    thief_ice_blades->set_thief(thief);
    thief_ice_blades->set_weapon(weapon);

    forge->set_weapon(weapon);
    forge->set_orbs(orbs);
    forge->set_fire_orb(fire_orb);
    forge->set_cold_orb(cold_orb);
    forge->set_electic_orb(electric_orb);
    forge->set_physical_orb(physical_orb);
    forge->set_light_orb(light_orb);

    // forge->use_cold_orb();
    // forge->use_electric_orb();
    // forge->use_physical_orb();

    // thief_ice_blades->pick_gigant();
    // thief_ice_blades->pick_clever();

    // thief_ice_blades->update_total_stats();

    // thief_ice_blades->pick_killer();

    // thief_ice_blades->print_health();
    // thief_ice_blades->print_mana();

    weapon->generate_stats(generator, Axe);

    weapon->print_stats();
    // orbs->print_random_increased_damage_orb();

    thief_ice_blades->update_total_stats();
    thief_ice_blades->print_total_damage();

    delete weapon;
    delete thief;
    delete thief_ice_blades;

    delete orbs;
    delete fire_orb;
    delete cold_orb;
    delete electric_orb;
    delete physical_orb;
    delete light_orb;

    delete forge;
}






