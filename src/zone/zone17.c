/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zone17
*/

#include "rpg.h"

int zone17_bis(background *ba, t_sprite **sp)
{
    if ((ba->y + 55) >= 1070.0) {
        ba->y = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 7;
    }
    if (ba->x + 55 >= 1920.0) {
        ba->x = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 6;
    }
    return (0);
}

void draw_17(background *ba, t_sprite **sp, t_inventory **inv,
                t_music **sound)
{
    check_hit(sp[50], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[50], inv[4], sound[2]);
    check_hit(sp[49], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[49], inv[4], sound[2]);
    display_enemy(ba, sp[46], inv[4], sound[2]);
    display_enemy(ba, sp[47], inv[4], sound[2]);
    display_enemy(ba, sp[48], inv[4], sound[2]);
}

int init_zone17(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[7]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    if (ba->pause_moi == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause_moi = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
    }
    draw_17(ba, sp, inv, zo[0]->music);
    display_inventory(ba, inv);
    if (load_life(ba, sp) == 1)
        return (1);
    zone17_bis(ba, sp);
    return (0);
}
