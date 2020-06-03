/*
** EPITECH PROJECT, 2019
** GRAPH
** File description:
** main
*/

#include "rpg.h"

char **ext_4(char **name_tab)
{
    name_tab[61] = "res/inv/quest10.png";
    name_tab[62] = "res/inv/quest8.png";
    name_tab[63] = "res/inv/quest11.png";
    name_tab[64] = "res/inv/quest12.png";
    name_tab[65] = "res/inv/quest7.png";
    name_tab[66] = "res/inv/quest9.png";
    name_tab[67] = "res/music/hurt.ogg";
    name_tab[68] = NULL;
    return (name_tab);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int my_strcmp(char const *str1, char const *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return (0);
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return (0);
    }
    return (1);
}

void display_creator(void)
{
    write(1, "My rpg is a game created with CSFML.\n\n", 40);
    write(1, "USAGE\n", 6);
    write(1, "\t./my_rpg\n", 10);
    write(1, "\n", 1);
    write(1, "Creators of the game:\n", 22);
    write(1, "\tMohamed-Amin CHARA\n", 20);
    write(1, "\tBaton\n", 7);
    write(1, "\tYaowanart HURE\n", 16);
    write(1, "\tMathias TOP\n", 13);
}

int main(int ac, char **av)
{
    if (ac == 1 && av[1] == NULL && exists() == 0)
        game();
    else if (ac == 2 && (my_strcmp(av[1], "-h")))
        display_creator();
    return (0);
}
