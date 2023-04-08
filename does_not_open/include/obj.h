/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** obj.h
*/

#ifndef OBJ_H
    #define OBJ_H

    #include "SFML/Graphics.h"

typedef struct {
    float x;
    float y;
    sfColor color;
    void *next;
} point_t;

void add_point(float x, float y, sfColor color);

typedef struct {
    float x;
    float y;
    float radius;
    sfColor color;
    void *next;
} circle_t;

void add_circle(float x, float y, float radius, sfColor color);

typedef struct {
    float x;
    float y;
    float w;
    float h;
    sfColor color;
    void *next;
} rectangle_t;

void add_rectangle(float x, float y, float w, float h, sfColor color);

bool point_circle(float px, float py, float cx, float cy, float r);
bool circle_circle(float x1, float y1, float r1, float x2, float y2, float r2);
bool point_rectangle(float px, float py, float rx, float ry, float w, float h);
bool rectangle_rectangle(float x1, float y1, float w1, float h1, float x2, float y2, float w2, float h2);
bool circle_rectangle(float cx, float cy, float r, float rx, float ry, float w, float h);

#endif // !OBJ_H
