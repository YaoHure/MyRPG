/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** anim
*/

#include "rpg.h"

void anim_sprite(t_sprite *sprite, int offset, int max_value, int reset)
{
    if (sprite->rect->left < (reset + max_value)) {
        sprite->rect->left = sprite->rect->left + offset;
    } else {
        sprite->rect->left = reset;
    }
    sfSprite_setTextureRect(sprite->sprite, *sprite->rect);
}

int get_pos(t_sprite *sprite, background *back)
{
    sfVector2f pos_png = sfSprite_getPosition(sprite->sprite);

    if (back->x >= (pos_png.x - 70) &&
        back->y >= (pos_png.y - 70) &&
        back->x <= (pos_png.x + 70) &&
        back->y <= (pos_png.y + 70)) {
        return (0);
    }
    else
        return (1);
}

void animation_manager2(t_sprite **sprite)
{
    anim_sprite(sprite[29], 15, 15, 69);
    anim_sprite(sprite[2], 23, 46, 0);
    anim_sprite(sprite[30], 18, 18, 78);
    anim_sprite(sprite[31], 17, 17, 297);
    anim_sprite(sprite[32], 17, 17, 297);
    anim_sprite(sprite[33], 17, 17, 297);
    anim_sprite(sprite[34], 17, 17, 297);
    anim_sprite(sprite[35], 17, 17, 103);
    anim_sprite(sprite[36], 17, 17, 51);
    anim_sprite(sprite[37], 17, 17, 112);
    anim_sprite(sprite[38], 17, 17, 297);
    anim_sprite(sprite[39], 17, 17, 297);
    anim_sprite(sprite[40], 17, 17, 297);
    anim_sprite(sprite[41], 17, 17, 297);
    anim_sprite(sprite[42], 17, 17, 297);
    anim_sprite(sprite[43], 17, 17, 297);
    anim_sprite(sprite[44], 16, 112, 52);
    anim_sprite(sprite[45], 17, 17, 243);
    anim_sprite(sprite[46], 17, 17, 297);
    animation_manager3(sprite);
}

void animation_manager(t_sprite **sprite)
{
    anim_sprite(sprite[10], 22, 22, 48);
    anim_sprite(sprite[11], 22, 22, 0);
    anim_sprite(sprite[12], 18, 18, 113);
    anim_sprite(sprite[14], 17, 17, 297);
    anim_sprite(sprite[15], 16, 112, 52);
    anim_sprite(sprite[16], 18, 18, 1);
    anim_sprite(sprite[17], 17, 17, 95);
    anim_sprite(sprite[18], 18, 18, 0);
    anim_sprite(sprite[19], 17, 17, 78);
    anim_sprite(sprite[20], 17, 17, 51);
    anim_sprite(sprite[21], 17, 17, 103);
    anim_sprite(sprite[22], 18, 18, 0);
    anim_sprite(sprite[23], 18, 18, 0);
    anim_sprite(sprite[24], 18, 18, 0);
    anim_sprite(sprite[3], 17, 17, 112);
    anim_sprite(sprite[25], 18, 18, 32);
    anim_sprite(sprite[26], 18, 18, 118);
    anim_sprite(sprite[27], 22, 22, 91);
    anim_sprite(sprite[28], 16, 16, 0);
    animation_manager2(sprite);
}

void animation_managing(background *back, t_sprite **sprite, t_inventory **inv)
{
    back->time = sfClock_getElapsedTime(back->clock);
    back->seconds = back->time.microseconds / 150000.0;
    if (back->seconds > 1.0) {
        anim_sprite(sprite[4], 24, 24, 0);
        anim_sprite(sprite[8], 22, 22, 48);
        anim_sprite(sprite[9], 18, 18, 0);
        anim_sprite(sprite[13], 17, 17, 246);
        animation_manager(sprite);
        if (sprite[1]->detector <= 11)
            anim_sprite(sprite[1], 16, 16, 0);
        else if (sprite[1]->detector >= 11)
            anim_sprite(sprite[1], 16, 16, 36);
        is_key_pressed_clock(inv, sprite, back);
        sfClock_restart(back->clock);
    }
}