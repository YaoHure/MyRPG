/*
** EPITECH PROJECT, 2019
** EpitechProject (Workspace)
** File description:
** dialog
*/

#include "rpg.h"

void dialog_check(t_inventory *inv, background *ba, t_sprite *sp, int ins)
{
    if (ba->instance == ins && get_pos(sp, ba) == 0)
        inv->detector = 1;
    else
        inv->detector = 0;
}

int dialog_npc(t_inventory *quest, background *ba)
{
    if (quest->detector == 1)
        sfRenderWindow_drawSprite(ba->window, quest->sprite, NULL);
    return (0);
}