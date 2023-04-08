/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** attach_obj_to_mouse.c
*/

#include "collision_detection.h"

void attach_obj_to_mouse(void)
{
    float mx = data()->mouse_pos.x, my = data()->mouse_pos.y;
    float rect_err = 2;

    for (circle_t *c = data()->circle; c != NULL; c = c->next) {
        if (mx < c->x || c->x + 2*c->radius < mx) continue;
        if (my < c->y || c->y + 2*c->radius < my) continue;
        data()->cm = c;
        data()->type = Circle;
        data()->rm = NULL;
        return;
    }
    for (rectangle_t *r = data()->rectangle; r != NULL; r = r->next) {
        if (mx < r->x - rect_err || r->x + r->w + rect_err < mx) continue;
        if (my < r->y - rect_err || r->y + r->h + rect_err < my) continue;
        data()->rm = r;
        data()->type = Rectangle;
        data()->cm = NULL;
        return;
    }
}
