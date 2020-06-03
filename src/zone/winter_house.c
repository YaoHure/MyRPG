/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** winter_house
*/

#include "rpg.h"

void draw_corn(background *ba, t_inventory *item, sfVector2f new_pos)
{
    sfVector2f pos_item = sfSprite_getPosition(item->sprite);

    if (item->detector == 0)
        sfRenderWindow_drawSprite(ba->window, item->sprite, NULL);
    if (sfKeyboard_isKeyPressed(sfKeyE) == sfTrue
        && ba->x >= (pos_item.x - 50) &&
        ba->y >= (pos_item.y - 50) &&
        ba->x <= (pos_item.x + 50) &&
        ba->y <= (pos_item.y + 50)) {
        if (item->detector == 0) {
            sfSprite_setPosition(item->sprite, new_pos);
            sfSprite_scale(item->sprite, (sfVector2f) {2.0, 2.0});
            item->detector = 1;
        }
    }
}

int winter_house_bis(background *ba, t_sprite **sp, t_inventory **inv)
{
    if ((ba->x >= 840 && (ba->y + 55) >= 520)
    && (ba->x <= 875 && (ba->y + 55) <= 550)) {
        sfSprite_setPosition(sp[1]->sprite, (sfVector2f){1020, 350});
        ba->instance = 12;
    }
    draw_npc(ba, sp[26]);
    dialog_check(inv[12], ba, sp[26], 13);
    dialog_npc(inv[12], ba);
    return (0);
}

int init_w_house(t_zone **zo, background *ba, t_sprite **sp, t_inventory **inv)
{
    sfRenderWindow_drawSprite(ba->window, zo[12]->sprite, NULL);
    draw_corn(ba, inv[0], (sfVector2f) {1300.0, 710.0});
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
    winter_house_bis(ba, sp, inv);
    return (0);
}