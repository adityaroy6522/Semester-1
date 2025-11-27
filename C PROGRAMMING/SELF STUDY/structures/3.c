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
    printf ("pikachu.attack = ");
    scanf ("%d",&pikachu.attack);
    printf ("pikachu.hp = ");
    scanf ("%d",&pikachu.hp);
    printf ("pikachu.speed = ");
    scanf ("%d",&pikachu.speed);
    printf ("pikachu.tier = ");
    scanf (" %c",&pikachu.tier);

    printf ("charizard.attack = ");
    scanf ("%d",&charizard.attack);
    printf ("charizard.hp = ");
    scanf ("%d",&charizard.hp);
    printf ("charizard.speed = ");
    scanf ("%d",&charizard.speed);
    printf ("charizard.tier = ");
    scanf (" %c",&charizard.tier);

    return 0;
}
