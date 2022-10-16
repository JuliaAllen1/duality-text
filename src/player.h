#include <stdlib.h>

#ifndef PLAYER_H
#define PLAYER_H


struct player_s {
    char name;
    int maxHealth;
    int health;

};

typedef struct player_s player_t;

void Player_const(player_t* player_ref, char name) { 
    player_ref->name = name;
}










#endif