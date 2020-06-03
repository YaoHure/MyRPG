/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** destroy2
*/

#include "rpg.h"

void destroy_music(t_music **music)
{
    sfMusic_destroy(music[0]->music);
    for (int i = 1; music[i] != NULL; i++) {
        sfSound_destroy(music[i]->sound);
        sfSoundBuffer_destroy(music[i]->buff);
    }
}