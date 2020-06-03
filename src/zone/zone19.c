/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zone19
*/

#include "rpg.h"

int zone19_bis(background *ba, t_sprite **sp)
{
    if (ba->x >= 1920.0) {
        ba->x = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 9;
    }
    if (ba->x <= -1) {
        ba->x = 1451.5;
        ba->y = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 4;
    }
    return (0);
}

void dialog_19(background *ba, t_sprite **sp, t_inventory **inv,
                t_music **sound)
{
    display_enemy(ba, sp[22], inv[4], sound[2]);
    check_hit(sp[22], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[23], inv[4], sound[2]);
    check_hit(sp[23], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[24], inv[4], sound[2]);
    check_hit(sp[24], sp[1], sp[7], sound[4]);
}

int init_zone19(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[9]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    if (ba->pause_moi == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause_moi = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
    }
    dialog_19(ba, sp, inv, zo[0]->music);
    display_inventory(ba, inv);
    if (load_life(ba, sp) == 1)
        return (1);
    zone19_bis(ba, sp);
    return (0);
}
