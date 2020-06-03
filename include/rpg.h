/*
** EPITECH PROJECT, 2019
** GRAPH
** File description:
** rpg
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"

//      #collision_keys.c#        //
int get_pixel(background *obj, t_sprite **sprite, t_collision **im, int ins);
//                                //


//      #destroy.c#         //
void destroy(t_sprite **, t_inventory **, t_zone **, background *);
void destroy_image(t_collision **);
void destroy_music(t_music **);
//                          //



//      #init_buttons.c#       //
int init_button_play(background *, int, int, t_music *);
int init_button_quit(background *, t_music *);
int init_button_how_to(background *, int, int, t_music *);
//                              //

//      #check_buttons.c#       //
int check_button_play(background *back, t_music *music);
int check_button_quit(background *back, t_music *music);
int check_button_how_to(background *back, t_music *music);
//                              //

//      #game.c#        //
int check_in(t_sprite **, background *, t_zone **, t_inventory **);
int game(void);
//                      //

//      #move.c         //
void move_player(background *, t_sprite **);
//                      //



//      #init_all_menu.c#       //
int init_back_menu(t_sprite **, background *, t_music *);
int init_how_to(t_sprite **, background *, t_music *);
//                              //keys



//      #zone_10_to_14.c#       //
int init_zone10(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone11(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone12(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone13(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone14(t_zone **, background *, t_sprite **, t_inventory **);
//                              //



//      #zone_14_to_19.c#       //
int init_zone15(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone16(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone17(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone18(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone19(t_zone **, background *, t_sprite **, t_inventory **);
//                              //



//      #zone_20_to_21.c#       //
int init_zone20(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone21(t_zone **, background *, t_sprite **, t_inventory **);
int init_w_house(t_zone **, background *, t_sprite **, t_inventory **);
//                              //



//      #init_all_sprite.c#         //
int init_all_sprite(t_sprite **, background *, t_zone **, t_inventory **);
//                                  //


//      #anim.c#        //
void anim_sprite(t_sprite *sprite, int offset, int max_value, int reset);
int get_pos(t_sprite *sprite, background *back);
void animation_managing(background *back, t_sprite **sprite, t_inventory **);
void animation_manager3(t_sprite **sprite);
void is_key_pressed_clock(t_inventory **, t_sprite **, background *);

//                      //

//      #resize_all_sprite.c#       //
void inventory_size(t_inventory **);
void sprite_size(t_sprite **);
//                                  //


//      #manage_window.c#       //
void manage_event(background *);
int window(t_sprite **, background *, t_zone **, t_inventory **);
void init_window(background *);
//                              //



//      #pause.c#       //
int init_button_resume(background *);
int init_button_quit_game(background *);
//                      //



//      #display_inventory.c#       //
void display_inventory(background *, t_inventory **);
//                                  //


//      #collisions.c#      //
int get_pixel(background *, t_sprite **, t_collision **, int);
//                          //



//      #ui.c#      //
int load_life(background *, t_sprite **);
//                  //


//      #zonexx.c       //
void draw_npc(background *, t_sprite *);
int quest_and_check_win(t_inventory *quest, background *, t_inventory *item);
void display_enemy(background *, t_sprite *enemy, t_inventory *sword,
                    t_music *sound);
void check_hit(t_sprite *enemy, t_sprite *player, t_sprite *life,
                t_music *sound);
int init_zone10(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone11(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone12(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone13(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone14(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone15(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone16(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone17(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone18(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone19(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone20(t_zone **, background *, t_sprite **, t_inventory **);
int init_zone21(t_zone **, background *, t_sprite **, t_inventory **);
int init_w_house(t_zone **, background *, t_sprite **, t_inventory **);
//                      //


//      win_or_lose.c       //
int init_game_over(background *, t_zone **);
int init_win(background *, t_zone **);
//                          //


//      music.c             //
void play_music(t_music *);
void play_sound(t_music *);
//                          //


//      my_putnbr.c          //
void my_put_nbr(int nb);
//                          //


//      keys.c              //
void keys(background *, t_sprite **, t_inventory **, t_collision **);
//                          //


//      sword.c              //
void sword(t_inventory *, t_sprite **, t_music *);
//                          //


//      dialog.c                //
void dialog_check(t_inventory *, background *, t_sprite *, int );
int dialog_npc(t_inventory *, background *);
//                              //


//      itoa.c                  //
char *my_itoa(int);
//                              //


//      if_exist.c      //
char **ext_4(char **);
int exists(void);
//                      //
