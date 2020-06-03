/*
** EPITECH PROJECT, 2018
** MUL_my_rpg_2018
** File description:
** check_instance
*/

#include "rpg.h"

int check_in(t_sprite **sp, background *back, t_zone **zone, t_inventory **inv)
{
    int (*fun_ptr_arr[])(t_zone **, background *, t_sprite **, t_inventory **) =
    {init_zone10, init_zone10, init_zone11, init_zone12, init_zone13,
    init_zone14, init_zone15, init_zone16, init_zone17, init_zone18,
    init_zone19, init_zone20, init_zone21, init_w_house};

    if (back->instance == 0) {
        if (init_back_menu(sp, back, zone[0]->music[1]) == 1)
            return (1);
    } else if (back->instance == 64) {
        if (init_how_to(sp, back, zone[0]->music[1]) == 1)
            return (1);
    } else {
        if ((*fun_ptr_arr[back->instance])(zone, back, sp, inv) == 1)
            return (1);
    }
    return (0);
}