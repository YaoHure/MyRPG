/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zone13
*/

#include "rpg.h"

int zone13_bis(background *ba, t_sprite **sp)
{
    if ((ba->y + 55) >= 1070.0) {
        ba->y = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 3;
    } if (ba->x >= 1920.0) {
        ba->x = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 2;
    } if (ba->x <= -1) {
        ba->x = 1880;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 6;
    } if ((ba->y + 55) <= -1) {
        ba->y = 1000;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 9;
    }
    return (0);
}

void dialog_13(background *ba, t_sprite **sp, t_inventory **inv,
                t_music **sound)
{
    check_hit(sp[13], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[13], inv[4], sound[2]);
    check_hit(sp[14], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[14], inv[4], sound[2]);
    check_hit(sp[15], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[15], inv[4], sound[2]);
    draw_npc(ba, sp[28]);
    dialog_check(inv[13], ba, sp[28], 4);
    dialog_npc(inv[13], ba);
}

int init_zone13(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[3]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    if (ba->pause_moi == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause_moi = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
    }
    dialog_13(ba, sp, inv, zo[0]->music);
    display_inventory(ba, inv);
    if (load_life(ba, sp) == 1)
        return (1);
    zone13_bis(ba, sp);
    return (0);
}
