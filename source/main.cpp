#include <Weapon.h>
#include <Upgrade_weapon.h>
#include <Build.h>

int main()
{
    Weapon* knife = new Weapon;
    Build* thief = new Build;

    knife->set_damage(13);
    knife->set_attack_speed(1.5);

    knife->get_knife_upgrade().set_increased_damage(1.23);
    knife->get_knife_upgrade().set_increased_attack_speed(1.05);

    thief->set_Weapon(knife);

    thief->print_upgrades();


}






