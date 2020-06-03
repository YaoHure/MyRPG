/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zone21
*/

#include "rpg.h"

int zone21_bis(background *ba, t_sprite **sp)
{
    if (ba->x + 55 >= 1920.0) {
        ba->x = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 11;
    }
    if ((ba->x >= 1001 && (ba->y + 55) <= 350)
    && (ba->x <= 1041 && (ba->y + 55) >= 259)) {
        ba->x = 848;
        ba->y = 463;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 13;
    }
    return (0);
}

int init_zone21(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[11]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    if (ba->pause_moi == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause_moi = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
    }
    display_inventory(ba, inv);
    if (load_life(ba, sp) == 1)
        return (1);
    zone21_bis(ba, sp);
    return (0);
}
