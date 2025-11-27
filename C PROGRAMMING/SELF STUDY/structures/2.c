#include <stdio.h>
int main ()
{
    struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
    } pikachu,charizard;
    
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A'; 

    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    
    return 0;
}
