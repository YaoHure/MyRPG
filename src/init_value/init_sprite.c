/*
** EPITECH PROJECT, 2018
** MUL_my_rpg_2018
** File description:
** in_s.c
*/

#include "rpg.h"

static t_sprite *in_s(char *str, float x, float y, int *rect)
{
    t_sprite *sprite = malloc(sizeof(t_sprite));
    sfVector2f pos = {x, y};

    if (sprite == NULL)
        return (NULL);
    sprite->rect = malloc(sizeof(sfIntRect));
    if (sprite->rect == NULL)
        return (NULL);
    sprite->detector = 0;
    sprite->rect->top = rect[0];
    sprite->rect->left = rect[1];
    sprite->rect->width = rect[2];
    sprite->rect->height = rect[3];
    sprite->texture = sfTexture_createFromFile(str, NULL);
    sprite->sprite = sfSprite_create();
    if (!sprite->sprite || !sprite->texture)
        return (NULL);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, pos);
    return (sprite);
}

t_sprite **init_val4(t_sprite **sp)
{
    sp[49] = in_s("res/p/sprite1.png", 1196, 710, (int[4]) {259, 52, 15, 16});
    sp[50] = in_s("res/p/sprite1.png", 1352, 345, (int[4]) {28, 243, 17, 17});
    sp[51] = NULL;
    return (sp);
}

t_sprite **init_val3(t_sprite **sp)
{
    sp[31] = in_s("res/p/sprite1.png", 1827, 486, (int[4]) {302, 297, 17, 17});
    sp[32] = in_s("res/p/sprite1.png", 1266, 954, (int[4]) {319, 297, 17, 17});
    sp[33] = in_s("res/p/sprite1.png", 1193, 948, (int[4]) {302, 297, 17, 17});
    sp[34] = in_s("res/p/sprite1.png", 375, 986, (int[4]) {319, 297, 17, 17});
    sp[35] = in_s("res/p/sprite1.png", 1248, 489, (int[4]) {0, 103, 17, 18});
    sp[36] = in_s("res/p/sprite1.png", 536, 312, (int[4]) {92, 51, 17, 17});
    sp[37] = in_s("res/p/sprite1.png", 800, 110, (int[4]) {446, 112, 17, 17});
    sp[38] = in_s("res/p/sprite1.png", 269, 920, (int[4]) {302, 297, 17, 17});
    sp[39] = in_s("res/p/sprite1.png", 1076, 945, (int[4]) {319, 297, 17, 17});
    sp[40] = in_s("res/p/sprite1.png", 533, 560, (int[4]) {319, 297, 17, 17});
    sp[41] = in_s("res/p/sprite1.png", 674, 98, (int[4]) {319, 297, 17, 17});
    sp[42] = in_s("res/p/sprite1.png", 413, 425, (int[4]) {302, 297, 17, 17});
    sp[43] = in_s("res/p/sprite1.png", 131, 954, (int[4]) {302, 297, 17, 17});
    sp[44] = in_s("res/p/sprite1.png", 1604, 296, (int[4]) {259, 52, 15, 16});
    sp[45] = in_s("res/p/sprite1.png", 1049, 545, (int[4]) {28, 243, 17, 17});
    sp[46] = in_s("res/p/sprite1.png", 690, 800, (int[4]) {302, 297, 17, 17});
    sp[47] = in_s("res/p/sprite1.png", 89, 563, (int[4]) {319, 297, 17, 17});
    sp[48] = in_s("res/p/sprite1.png", 485, 267, (int[4]) {302, 297, 17, 17});
    init_val4(sp);
    return (sp);
}

t_sprite **init_val2(t_sprite **sp)
{
    sp[13] = in_s("res/p/sprite1.png", 621, 867, (int[4]) {99, 246, 17, 17});
    sp[14] = in_s("res/p/sprite1.png", 816, 485, (int[4]) {302, 297, 17, 17});
    sp[15] = in_s("res/p/sprite1.png", 1370, 614, (int[4]) {259, 52, 15, 16});
    sp[16] = in_s("res/p/sprite1.png", 1357, 544, (int[4]) {126, 1, 18, 18});
    sp[17] = in_s("res/p/sprite1.png", 959, 568, (int[4]) {164, 95, 17, 17});
    sp[18] = in_s("res/p/sprite1.png", 815, 854, (int[4]) {51, 0, 18, 18});
    sp[19] = in_s("res/p/sprite1.png", 170, 544, (int[4]) {423, 78, 17, 17});
    sp[20] = in_s("res/p/sprite1.png", 196, 573, (int[4]) {126, 51, 17, 17});
    sp[21] = in_s("res/p/sprite1.png", 80, 349, (int[4]) {0, 103, 17, 18});
    sp[22] = in_s("res/p/sprite1.png", 698, 591, (int[4]) {51, 0, 18, 18});
    sp[23] = in_s("res/p/sprite1.png", 1065, 476, (int[4]) {51, 0, 18, 18});
    sp[24] = in_s("res/p/sprite1.png", 1432, 483, (int[4]) {51, 0, 18, 18});
    sp[25] = in_s("res/p/sprite2.png", 480, 222, (int[4]) {175, 32, 18, 26});
    sp[26] = in_s("res/p/sprite2.png", 1047, 318, (int[4]) {144, 118, 18, 29});
    sp[27] = in_s("res/p/sprite2.png", 958, 729, (int[4]) {77, 91, 22, 19});
    sp[28] = in_s("res/p/sprite2.png", 1272, 135, (int[4]) {144, 0, 16, 29});
    sp[29] = in_s("res/p/sprite2.png", 1683, 644, (int[4]) {6, 69, 15, 18});
    sp[30] = in_s("res/p/sprite2.png", 600, 560, (int[4]) {43, 78, 18, 29});
    init_val3(sp);
    return (sp);
}

t_sprite **init_val(void)
{
    t_sprite **sp = malloc(sizeof(t_sprite *) * 52);

    if (!sp)
        return (NULL);
    sp[0] = in_s("res/p/ghost.png", 0, 0, (int[4]) {0, 0, 0, 0});
    sp[1] = in_s("res/p/perso_cp.png", 1500, 700, (int[4]) {0, 0, 16, 16});
    sp[2] = in_s("res/p/ricky.png", 351, 193, (int[4]) {0, 0, 23, 32});
    sp[3] = in_s("res/p/sprite1.png", 500, 500, (int[4]) {446, 112, 17, 17});
    sp[4] = in_s("res/p/sprite2.png", 960, 350, (int[4]) {75, 0, 24, 20});
    sp[5] = in_s("res/start.png", 0, 0, (int[4]) {0, 0, 0, 0});
    sp[6] = in_s("res/how_to.png", 0, 0, (int[4]) {0, 0, 0, 0});
    sp[7] = in_s("res/p/life.png", 0, 0, (int[4]) {0, 0, 500, 197});
    sp[8] = in_s("res/p/sprite2.png", 1139, 474, (int[4]) {75, 48, 22, 22});
    sp[9] = in_s("res/p/sprite2.png", 1233, 706, (int[4]) {26, 0, 17, 17});
    sp[10] = in_s("res/p/sprite2.png", 1597, 52, (int[4]) {75, 48, 22, 22});
    sp[11] = in_s("res/p/sprite2.png", 1396, 249, (int[4]) {54, 0, 22, 18});
    sp[12] = in_s("res/p/sprite2.png", 1665, 57, (int[4]) {54, 113, 18, 18});
    init_val2(sp);
    sprite_size(sp);
    return (sp);
}
