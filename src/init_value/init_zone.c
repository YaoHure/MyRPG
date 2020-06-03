/*
** EPITECH PROJECT, 2018
** MUL_my_rpg_2018
** File description:
** init_zone.c
*/

#include "rpg.h"

static t_zone *init_zone(char *str, float x, float y)
{
    t_zone *zone = malloc(sizeof(t_zone));
    sfVector2f pos = {x, y};

    if (zone == NULL)
        return (NULL);
    zone->texture = sfTexture_createFromFile(str, NULL);
    zone->sprite = sfSprite_create();
    if (!zone->sprite || !zone->texture)
        return (NULL);
    sfSprite_setTexture(zone->sprite, zone->texture, sfTrue);
    sfSprite_setPosition(zone->sprite, pos);
    return (zone);
}

t_zone **init_val_zone(void)
{
    t_zone **zone = malloc(sizeof(t_zone *) * 14);

    zone[0] = init_zone("res/zone/zone10.png", 0, 0);
    zone[1] = init_zone("res/zone/zone11.png", 0, 0);
    zone[2] = init_zone("res/zone/zone12.png", 0, 0);
    zone[3] = init_zone("res/zone/zone13.png", 0, 0);
    zone[4] = init_zone("res/zone/zone14.png", 0, 0);
    zone[5] = init_zone("res/zone/zone15.png", 0, 0);
    zone[6] = init_zone("res/zone/zone16.png", 0, 0);
    zone[7] = init_zone("res/zone/zone17.png", 0, 0);
    zone[8] = init_zone("res/zone/zone18.png", 0, 0);
    zone[9] = init_zone("res/zone/zone19.png", 0, 0);
    zone[10] = init_zone("res/zone/zone20.png", 0, 0);
    zone[11] = init_zone("res/zone/zone21.png", 0, 0);
    zone[12] = init_zone("res/zone/winter_house.png", 0, 0);
    zone[13] = NULL;
    return (zone);
}