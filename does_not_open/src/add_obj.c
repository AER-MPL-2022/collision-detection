/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** add_obj.c
*/

#include "collision_detection.h"

void add_point(float x, float y, sfColor color)
{
    point_t *obj = data()->point;
    point_t *point = malloc(sizeof(point_t));

    *point = (point_t){x, y, color, NULL};
    if (obj == NULL) {
        data()->point = point;
        return;
    }
    while (obj->next != NULL)
        obj = obj->next;
    obj->next = point;
}

void add_circle(float x, float y, float radius, sfColor color)
{
    circle_t *obj = data()->circle;
    circle_t *circle = malloc(sizeof(circle_t));

    *circle = (circle_t){x - radius, y - radius, radius, color, NULL};
    if (obj == NULL) {
        data()->circle = circle;
        return;
    }
    while (obj->next != NULL)
        obj = obj->next;
    obj->next = circle;
}

void add_rectangle(float x, float y, float w, float h, sfColor color)
{
    rectangle_t *obj = data()->rectangle;
    rectangle_t *rectangle = malloc(sizeof(rectangle_t));

    *rectangle = (rectangle_t){x, y, w, h, color, NULL};
    if (obj == NULL) {
        data()->rectangle = rectangle;
        return;
    }
    while (obj->next != NULL)
        obj = obj->next;
    obj->next = rectangle;
}
