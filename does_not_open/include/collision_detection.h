/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** collision_detection.h
*/

#ifndef COLLISION_DETECTION_H
    #define COLLISION_DETECTION_H

    #include <stdbool.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <math.h>
    #include "obj.h"

typedef enum {
    None,
    Circle,
    Rectangle
} move_mouse_obj_e;

typedef struct {
    sfRenderWindow *window;
    sfEvent event;
    sfClock *clock;
    double dt;
    sfVector2i mouse_pos;
    point_t *point;
    circle_t *circle;
    rectangle_t *rectangle;
    move_mouse_obj_e type;
    circle_t *cm;
    rectangle_t *rm;
    bool is_collision;
} singleton_t;

singleton_t *data(void);
void init(void);
void event_handler(void);
void draw(void);
void attach_obj_to_mouse(void);
void check_collision(void);
void move(void);

#endif // !COLLISION_DETECTION_H
