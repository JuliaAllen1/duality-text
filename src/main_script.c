#include <dialog.h>
#include <unistd.h>
#include "player.h"



int main(int argc, char *argv[]){
    player_t *Player;
    Player = malloc(sizeof(player_t));
    //Player_const(Player, "name");
    printf("%c",Player->name);
}