/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** draw.c
*/

#include "collision_detection.h"

static void draw_point(point_t *p)
{
    static sfSprite *shape = NULL;
    static sfTexture *texture = NULL;
    sfUint8 pixels[4] = {p->color.r, p->color.g, p->color.b, p->color.a};

    if (shape == NULL) {
        shape = sfSprite_create();
        texture = sfTexture_create(1, 1);
        sfSprite_setTexture(shape, texture, sfTrue);
    }
    sfTexture_updateFromPixels(texture, pixels, 1, 1, 0, 0);
    sfSprite_setPosition(shape, (sfVector2f){p->x, p->y});
    sfRenderWindow_drawSprite(data()->window, shape, NULL);
    if (p->next != NULL)
        draw_point(p->next);
}

static void draw_circle(circle_t *c)
{
    static sfCircleShape *shape = NULL;

    if (shape == NULL)
        shape = sfCircleShape_create();
    sfCircleShape_setPosition(shape, (sfVector2f){c->x, c->y});
    sfCircleShape_setRadius(shape, c->radius);
    sfCircleShape_setFillColor(shape, c->color);
    sfRenderWindow_drawCircleShape(data()->window, shape, NULL);
    if (c->next != NULL)
        draw_circle(c->next);
}

static void draw_rectangle(rectangle_t *r)
{
    static sfRectangleShape *shape = NULL;

    if (shape == NULL)
        shape = sfRectangleShape_create();
    sfRectangleShape_setPosition(shape, (sfVector2f){r->x, r->y});
    sfRectangleShape_setSize(shape, (sfVector2f){r->w, r->h});
    sfRectangleShape_setFillColor(shape, r->color);
    sfRenderWindow_drawRectangleShape(data()->window, shape, NULL);
    if (r->next != NULL)
        draw_rectangle(r->next);
}

void draw(void)
{
    if (data()->point != NULL)
        draw_point(data()->point);
    if (data()->circle != NULL)
        draw_circle(data()->circle);
    if (data()->rectangle != NULL)
        draw_rectangle(data()->rectangle);
}
