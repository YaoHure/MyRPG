/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zone14
*/

#include "rpg.h"

int zone14_bis(background *ba, t_sprite **sp)
{
    if ((ba->y + 55) <= -1) {
        ba->y = 1000;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f) {ba->x, ba->y});
        ba->instance = 6;
    }
    if (ba->x + 55 >= 1920.0) {
        ba->x = 0;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f) {ba->x, ba->y});
        ba->instance = 3;
    }
    if (ba->x <= -1) {
        ba->x = 1820;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f) {ba->x, ba->y});
        ba->instance = 7;
    }
    return (0);
}

void dialog_14(background *ba, t_sprite **sp, t_inventory **inv,
                t_music **sound)
{
    draw_npc(ba, sp[11]);
    dialog_check(inv[10], ba, sp[11], 5);
    dialog_npc(inv[10], ba);
    check_hit(sp[19], sp[1], sp[7], sound[4]);
    display_enemy(ba, sp[19], inv[4], sound[2]);
    draw_npc(ba, sp[25]);
    dialog_check(inv[9], ba, sp[25], 5);
    dialog_npc(inv[9], ba);
    draw_npc(ba, sp[29]);
    dialog_check(inv[14], ba, sp[29], 5);
    dialog_npc(inv[14], ba);
    display_enemy(ba, sp[38], inv[4], sound[2]);
    display_enemy(ba, sp[39], inv[4], sound[2]);
}

int init_zone14(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[4]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    draw_npc(ba, sp[4]);
    if (ba->pause_moi == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause_moi = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
    }
    dialog_14(ba, sp, inv, zo[0]->music);
    display_inventory(ba, inv);
    if (quest_and_check_win(inv[5], ba, inv[0]) == 1)
        return (1);
    if (load_life(ba, sp) == 1)
        return (1);
    zone14_bis(ba, sp);
    return (0);
}
