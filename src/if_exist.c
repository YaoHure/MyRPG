/*
** EPITECH PROJECT, 2019
** GRAPH
** File description:
** test
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"

char **ext_3(char **name_tab)
{
    name_tab[44] = "res/zone/collision20.png";
    name_tab[45] = "res/zone/zone10.png";
    name_tab[46] = "res/zone/zone19.png";
    name_tab[47] = "res/zone/winter_house.png";
    name_tab[48] = "res/zone/zone11.png";
    name_tab[49] = "res/zone/second_house.png";
    name_tab[50] = "res/zone/zone12.png";
    name_tab[51] = "res/zone/zone21.png";
    name_tab[52] = "res/zone/zone16.png";
    name_tab[53] = "res/zone/zone13.png";
    name_tab[54] = "res/BebasKai.ttf";
    name_tab[55] = "res/music/death.ogg";
    name_tab[56] = "res/music/peace.ogg";
    name_tab[57] = "res/music/sword.ogg";
    name_tab[58] = "res/music/click.ogg";
    name_tab[59] = "res/how_to.png";
    name_tab[60] = "res/";
    name_tab = ext_4(name_tab);
    return (name_tab);
}

char **ext_2(char **name_tab)
{
    name_tab[33] = "res/zone/collision18.png";
    name_tab[34] = "res/zone/collision25.png";
    name_tab[35] = "res/zone/collision21.png";
    name_tab[36] = "res/zone/collision22.png";
    name_tab[37] = "res/zone/zone20.png";
    name_tab[38] = "res/zone/collision24.png";
    name_tab[39] = "res/zone/collision10.png";
    name_tab[40] = "res/zone/collision14.png";
    name_tab[41] = "res/zone/zone18.png";
    name_tab[42] = "res/zone/zone14.png";
    name_tab[43] = "res/zone/collision13.png";
    name_tab = ext_3(name_tab);
    return (name_tab);
}

char **ext_1(char **name_tab)
{
    name_tab[16] = "res/inv/quest3.png";
    name_tab[17] = "res/inv/inventory.png";
    name_tab[18] = "res/inv/weapon.png";
    name_tab[19] = "res/inv/quest6.png";
    name_tab[20] = "res/inv/diamonds.png";
    name_tab[21] = "res/start.png";
    name_tab[22] = "res/zone/collision17.png";
    name_tab[23] = "res/zone/collision19.png";
    name_tab[24] = "res/zone/collision16.png";
    name_tab[25] = "res/zone/zone17.png";
    name_tab[26] = "res/zone/collision12.png";
    name_tab[27] = "res/zone/collision11.png";
    name_tab[28] = "res/zone/third_house.png";
    name_tab[29] = "res/zone/first_house.png";
    name_tab[30] = "res/zone/collision23.png";
    name_tab[31] = "res/zone/zone15.png";
    name_tab[32] = "res/zone/collision15.png";
    name_tab = ext_2(name_tab);
    return (name_tab);
}

char **name_into_tab(void)
{
    char **name_tab = malloc(sizeof(char *) * 69);

    name_tab[1] = "my_rpg";
    name_tab[2] = "res/p/life.png";
    name_tab[3] = "res/p/sprite2.png";
    name_tab[4] = "res/p/ghost.png";
    name_tab[5] = "res/p/sprite1.png";
    name_tab[6] = "res/p/perso_cp.png";
    name_tab[7] = "res/p/ricky.png";
    name_tab[8] = "res/p/perso.png";
    name_tab[9] = "res/Triforce.ttf";
    name_tab[10] = "res/inv/crone.png";
    name_tab[11] = "res/inv/quest4.png";
    name_tab[12] = "res/inv/quest5.png";
    name_tab[13] = "res/inv/quest2.png";
    name_tab[14] = "res/inv/quest.png";
    name_tab[15] = "res/inv/perso_inv.png";
    name_tab = ext_1(name_tab);
    return (name_tab);
}

int exists(void)
{
    char **tab = name_into_tab();
    FILE *file;

    for (int i = 1; tab[i] != NULL; i++) {
        file = fopen(tab[i], "r");
        if (file == NULL) {
            write (1, "It's missing at least one file\n", 31);
            return (1);
        }
    }
    free(tab);
    return 0;
}
