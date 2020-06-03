/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zone15
*/

#include "rpg.h"

int zone15_bis(background *ba, t_sprite **sp)
{
    if ((ba->y + 55) >= 1070.0) {
        ba->y = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 5;
    } if ((ba->y + 55) <= -1) {
        ba->y = 1000;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 11;
    } if (ba->x >= 1920.0) {
        ba->x = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 4;
    } if (ba->x <= -1) {
        ba->x = 1820;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 8;
    }
    return (0);
}

void dialog_15(background *ba, t_sprite **sp, t_inventory **inv,
                t_music **sound)
{
    display_enemy(ba, sp[16], inv[4], sound[2]);
    check_hit(sp[16], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[17], inv[4], sound[2]);
    check_hit(sp[17], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[18], inv[4], sound[2]);
    check_hit(sp[18], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[40], inv[4], sound[2]);
}

int init_zone15(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[5]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    if (ba->pause_moi == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause_moi = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
    }
    if (load_life(ba, sp) == 1)
        return (1);
    zone15_bis(ba, sp);
    dialog_15(ba, sp, inv, zo[0]->music);
    display_inventory(ba, inv);
    return (0);
}
