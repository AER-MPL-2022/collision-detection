/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** check_collision.c
*/

#include "collision_detection.h"

void check_collision(void)
{
    bool result = false;

    if (data()->type == None)
        return;

    for (point_t *p = data()->point; p != NULL && !result; p = p->next) {
        if (data()->type == Circle) {
            result = point_circle(p->x, p->y, data()->cm->x + data()->cm->radius, data()->cm->y + data()->cm->radius, data()->cm->radius);
        } else {
            result = point_rectangle(p->x, p->y, data()->rm->x, data()->rm->y, data()->rm->w, data()->rm->h);
        }
    }

    for (circle_t *c = data()->circle; c != NULL && !result; c = c->next) {
        if (data()->type == Circle) {
            if (c->x == data()->cm->x && c->y == data()->cm->y && c->radius == data()->cm->radius)
                continue;
            result = circle_circle(c->x + c->radius, c->y + c->radius, c->radius, data()->cm->x + data()->cm->radius, data()->cm->y + data()->cm->radius, data()->cm->radius);
        } else {
            result = circle_rectangle(c->x + c->radius, c->y + c->radius, c->radius, data()->rm->x, data()->rm->y, data()->rm->w, data()->rm->h);
        }
    }

    for (rectangle_t *r = data()->rectangle; r != NULL && !result; r = r->next) {
        if (data()->type == Circle) {
            result = circle_rectangle(data()->cm->x + data()->cm->radius, data()->cm->y + data()->cm->radius, data()->cm->radius, r->x, r->y, r->w, r->h);
        } else {
            if (data()->rm->x == r->x && data()->rm->y == r->y && data()->rm->w == r->w && data()->rm->h == r->h)
                continue;
            result = rectangle_rectangle(r->x, r->y, r->w, r->h, data()->rm->x, data()->rm->y, data()->rm->w, data()->rm->h);
        }
    }

    data()->is_collision = result;
}
