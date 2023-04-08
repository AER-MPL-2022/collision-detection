/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** move.c
*/

#include "collision_detection.h"

void move(void)
{
    switch (data()->type) {
        case None:
            break;
        case Circle:
            data()->cm->x = data()->mouse_pos.x - data()->cm->radius;
            data()->cm->y = data()->mouse_pos.y - data()->cm->radius;
            break;
        case Rectangle:
            data()->rm->x = data()->mouse_pos.x - data()->rm->w / 2;
            data()->rm->y = data()->mouse_pos.y - data()->rm->h / 2;
            break;
    }
}
