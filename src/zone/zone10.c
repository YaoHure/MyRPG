/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zone10
*/

#include "rpg.h"

int zone10_bis(background *ba, t_sprite **sp)
{
    if ((ba->y) <= -1) {
        ba->y = 1000;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f) {ba->x, ba->y});
        ba->instance = 2;
    }
    if (ba->x <= -1) {
        ba->x = 1880;
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f) {ba->x, ba->y});
        ba->instance = 3;
    }
    return (0);
}

void dialog_10(background *ba, t_sprite **sp, t_inventory **inv,
                t_music **sound)
{
    dialog_check(inv[6], ba, sp[8], 1);
    dialog_npc(inv[6], ba);
    display_enemy(ba, sp[31], inv[4], sound[2]);
    display_enemy(ba, sp[32], inv[4], sound[2]);
}

int init_zone10(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[0]->sprite, NULL);
    sfRenderWindow_drawSprite(ba->window, sp[1]->sprite, NULL);
    draw_npc(ba, sp[8]);
    if (ba->pause_moi == 42) {
        if (init_button_resume(ba) == 1)
                ba->pause_moi = 0;
        if (init_button_quit_game(ba) == 1) {
            return (1);
        }
    }
    display_enemy(ba, sp[3], inv[4], zo[0]->music[2]);
    check_hit(sp[3], sp[1], sp[7], zo[0]->music[4]);
    dialog_10(ba, sp, inv, zo[0]->music);
    display_inventory(ba, inv);
    if (load_life(ba, sp) == 1)
        return (1);
    zone10_bis(ba, sp);
    return (0);
}

void draw_npc(background *ba, t_sprite *sp)
{
    sfSprite_setTextureRect(sp->sprite, *sp->rect);
    sfRenderWindow_drawSprite(ba->window, sp->sprite, NULL);
}

int quest_and_check_win(t_inventory *quest, background *ba, t_inventory *item)
{
    if (quest->detector == 1) {
        if (item->detector >= 1) {
            write(1, "YOU WIN\n", 8);
            write(1, "You've made: ", 13);
            my_put_nbr(ba->step_max);
            write(1, " steps.\n", 8);
            write(1, "You've killed: ", 15);
            my_put_nbr(ba->ennemies_max);
            write(1, " enemies.\n", 11);
            item->detector = 2;
            return (1);
        }
        else
            sfRenderWindow_drawSprite(ba->window, quest->sprite, NULL);
    }
    return (0);
}
