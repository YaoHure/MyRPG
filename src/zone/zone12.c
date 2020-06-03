/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zone12
*/

#include "rpg.h"

int zone12_bis(background *ba, t_sprite **sp)
{
    if ((ba->y) <= -1) {
        ba->y = 1000;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 4;
    }
    if (ba->x >= 1920.0) {
        ba->x = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 1;
    }
    if (ba->x <= -1) {
        ba->x = 1880;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){ba->x, ba->y});
        ba->instance = 5;
    }
    return (0);
}

void draw_12(background *ba, t_sprite **sp, t_inventory **inv, t_music **sound)
{
    dialog_check(inv[8], ba, sp[12], 3);
    dialog_npc(inv[8], ba);
    display_enemy(ba, sp[33], inv[4], sound[2]);
    display_enemy(ba, sp[34], inv[4], sound[2]);
    check_hit(sp[35], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[35], inv[4], sound[2]);
    check_hit(sp[36], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[36], inv[4], sound[2]);
    check_hit(sp[37], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[37], inv[4], sound[2]);
}

int init_zone12(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[2]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    draw_npc(ba, sp[12]);
    if (ba->pause_moi == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause_moi = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
    }
    display_inventory(ba, inv);
    draw_12(ba, sp, inv, zo[0]->music);
    if (load_life(ba, sp) == 1)
        return (1);
    zone12_bis(ba, sp);
    return (0);
}
