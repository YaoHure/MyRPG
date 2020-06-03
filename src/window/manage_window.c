/*
** EPITECH PROJECT, 2018
** MUL_my_rpg_2018
** File description:
** manage_window.c
*/

#include "rpg.h"

void manage_event(background *back)
{
    if (back->event.type == sfEvtClosed)
        sfRenderWindow_close(back->window);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && back->pause_moi == 0) {
        back->pause_moi = 42;
    }
    if (sfKeyboard_isKeyPressed(sfKeyA)) {
        back->pause_moi = 0;
    }
}

int window(t_sprite **sprite, background *ba, t_zone **zone, t_inventory **inv)
{
    if (check_in(sprite, ba, zone, inv) == 1)
        return (1);
    sfRenderWindow_display(ba->window);
    sfRenderWindow_clear(ba->window, sfBlack);
    return (0);
}

void init_window(background *back)
{
    sfVideoMode mode = {1920, 1080, 32};

    back->instance = 0;
    back->verif_access = 0;
    back->window = sfRenderWindow_create(mode, "My RPG", sfResize | sfClose,
                                        NULL);
    back->clock = sfClock_create();
    back->mousePosition = sfMouse_getPositionRenderWindow(back->window);
    back->seconds = 0.0;
    back->pause_moi = 0;
    back->step_r = 0;
    back->ennemies_max = 0;
}
