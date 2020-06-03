/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zone20
*/

#include "rpg.h"

int zone20_bis(background *ba, t_sprite **sp)
{
    if (ba->x <= -1) {
        ba->x = 1840;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 12;
    }
    if ((ba->y + 55) >= 1070.0) {
        ba->y = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 6;
    }
    return (0);
}

void draw_20(background *ba, t_sprite **sprite, t_inventory **inv)
{
    draw_npc(ba, sprite[30]);
    dialog_check(inv[15], ba, sprite[30], 11);
    dialog_npc(inv[15], ba);
}

int init_zone20(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[10]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    if (ba->pause_moi == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause_moi = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
    }
    draw_20(ba, sp, inv);
    display_inventory(ba, inv);
    if (load_life(ba, sp) == 1)
        return (1);
    zone20_bis(ba, sp);
    return (0);
}
