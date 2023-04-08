/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** init.c
*/

#include "collision_detection.h"

void init(void)
{
    add_point(100, 100, sfRed);
    add_point(200, 100, sfGreen);
    add_point(100, 200, sfBlue);
    add_point(200, 200, sfYellow);

    add_circle(50, 50, 50, sfYellow);
    add_circle(1000, 450, 25, sfRed);

    add_rectangle(500, 500, 250, 100, sfGreen);
    add_rectangle(250, 250, 50, 50, sfCyan);
    add_rectangle(50, 650, 900, 1, sfBlue);
}
