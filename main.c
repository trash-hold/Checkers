#include <stdio.h>
#include "../headers/def.h"
#include "../headers/usr_interface.h"
#include "../headers/game.h"

void main()
{
    printf("Welcome to checkers!");
    settings = set_up();
    while(settings.game != Quit)
    {
        generate(&A);
        if(settings.game == PvP) 
            game_PvP();
        else if(settings.game == AI) game_with_AI();
        else game_AI();
        settings = set_up();
    }
}

