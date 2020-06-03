/*
** EPITECH PROJECT, 2019
** EpitechProject (Workspace)
** File description:
** collision
*/

#include "rpg.h"

static t_collision *init_images(char *str)
{
    t_collision *image = malloc(sizeof(t_collision));

    if (image == NULL)
        return (NULL);
    image->image = sfImage_createFromFile(str);
    if (!image->image)
        return (NULL);
    return (image);
}

t_collision **init_image(void)
{
    t_collision **image = malloc(sizeof(background *) * 15);

    if (!image)
        return (NULL);
    image[0] = init_images("res/zone/collision10.png");
    image[1] = init_images("res/zone/collision10.png");
    image[2] = init_images("res/zone/collision11.png");
    image[3] = init_images("res/zone/collision12.png");
    image[4] = init_images("res/zone/collision13.png");
    image[5] = init_images("res/zone/collision14.png");
    image[6] = init_images("res/zone/collision15.png");
    image[7] = init_images("res/zone/collision16.png");
    image[8] = init_images("res/zone/collision17.png");
    image[9] = init_images("res/zone/collision18.png");
    image[10] = init_images("res/zone/collision19.png");
    image[11] = init_images("res/zone/collision20.png");
    image[12] = init_images("res/zone/collision21.png");
    image[13] = init_images("res/zone/collision22.png");
    image[14] = NULL;
    return (image);
}