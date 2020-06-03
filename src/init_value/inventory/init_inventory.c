/*
** EPITECH PROJECT, 2018
** MUL_my_rpg_2018
** File description:
** init_inventory.c
*/

#include "rpg.h"

static t_inventory *init_inv(char *str, float x, float y, int *rect)
{
    t_inventory *inv = malloc(sizeof(t_inventory));
    sfVector2f pos = {x, y};

    if (inv == NULL)
        return (NULL);
    inv->rect = malloc(sizeof(sfIntRect));
    if (inv->rect == NULL)
        return (NULL);
    inv->texture = sfTexture_createFromFile(str, NULL);
    inv->sprite = sfSprite_create();
    if (!inv->sprite || !inv->texture)
        return (NULL);
    inv->detector = 0;
    inv->rect->top = rect[0];
    inv->rect->left = rect[1];
    inv->rect->width = rect[2];
    inv->rect->height = rect[3];
    sfSprite_setTexture(inv->sprite, inv->texture, sfTrue);
    sfSprite_setPosition(inv->sprite, pos);
    return (inv);
}

t_inventory **init_val_inv2(t_inventory **inv)
{

    inv[11] = init_inv("res/inv/weapon.png", 1300, 525,
                        (int[4]) {0, 0, 25, 40});
    inv[12] = init_inv("res/inv/quest7.png", 1200, 100, (int[4]) {0, 0, 0, 0});
    inv[13] = init_inv("res/inv/quest8.png", 1200, 300, (int[4]) {0, 0, 0, 0});
    inv[14] = init_inv("res/inv/quest9.png", 1200, 100, (int[4]) {0, 0, 0, 0});
    inv[15] = init_inv("res/inv/quest10.png", 1200, 100, (int[4]) {0, 0, 0, 0});
    inv[16] = init_inv("res/inv/quest11.png", 1200, 100, (int[4]) {0, 0, 0, 0});
    inv[17] = init_inv("res/inv/quest12.png", 690, 100, (int[4]) {0, 0, 0, 0});
    inv[18] = NULL;
    return (inv);
}

t_inventory **init_val_inv(void)
{
    t_inventory **inv = malloc(sizeof(t_inventory *) * 19);

    if (!inv)
        return (NULL);
    inv[0] = init_inv("res/inv/crone.png", 850, 370, (int[4]) {0, 0, 0, 0});
    inv[1] = init_inv("res/inv/diamonds.png", 0, 0, (int[4]) {0, 0, 0, 0});
    inv[2] = init_inv("res/inv/inventory.png", 850, 500, (int[4]) {0, 0, 0, 0});
    inv[3] = init_inv("res/inv/perso_inv.png", 0, 0, (int[4]) {0, 0, 0, 0});
    inv[4] = init_inv("res/inv/weapon.png", 0, 0, (int[4]) {40, 0, 25, 40});
    inv[5] = init_inv("res/inv/quest.png", 1200, 100, (int[4]) {0, 0, 0, 0});
    inv[6] = init_inv("res/inv/quest2.png", 1200, 100, (int[4]) {0, 0, 0, 0});
    inv[7] = init_inv("res/inv/quest3.png", 1200, 100, (int[4]) {0, 0, 0, 0});
    inv[8] = init_inv("res/inv/quest4.png", 1200, 100, (int[4]) {0, 0, 0, 0});
    inv[9] = init_inv("res/inv/quest5.png", 500, 300, (int[4]) {0, 0, 0, 0});
    inv[10] = init_inv("res/inv/quest6.png", 1200, 100, (int[4]) {0, 0, 0, 0});
    init_val_inv2(inv);
    inventory_size(inv);
    return (inv);
}
