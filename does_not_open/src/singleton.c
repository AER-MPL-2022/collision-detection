/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** singleton.c
*/

#include "collision_detection.h"

static singleton_t *init_singleton(void)
{
    singleton_t *data = malloc(sizeof(singleton_t));

    data->window = sfRenderWindow_create((sfVideoMode){1536, 864, 32}, "Collision Detection", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(data->window, 120);
    data->mouse_pos = (sfVector2i){0, 0};
    data->type = None;
    data->cm = NULL;
    data->rm = NULL;
    data->is_collision = false;
    data->point = NULL;
    data->circle = NULL;
    data->rectangle = NULL;
    data->clock = sfClock_create();
    return data;
}

singleton_t *data(void)
{
    static singleton_t *data = NULL;

    if (data == NULL)
        data = init_singleton();
    return data;
}
