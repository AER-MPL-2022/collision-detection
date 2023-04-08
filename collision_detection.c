/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** collision_detection.c
*/

#include "collision_detection.h"

/**
 * Retourne vrai s'il y a une collision entre un point et un cercle, faux sinon.
 *
 * @param px : La position sur l'axe des abscisses du point.
 * @param py : La position sur l'axe des ordonnées du point.
 * @param cx : La position sur l'axe des abscisses du centre du cercle.
 * @param cy : La position sur l'axe des ordonnées du centre du cercle.
 * @param r  : Le rayon du cercle.
 *
 * @return bool true si une collision est détectée, false sinon.
 */
bool point_circle(float px, float py, float cx, float cy, float r)
{
    return false; // TODO!
}

/**
 * Retourne vrai s'il y a une collision entre deux cercles, faux sinon.
 *
 * @param x1 : La position sur l'axe des abscisses du centre du premier cercle.
 * @param y1 : La position sur l'axe des ordonnées du centre du premier cercle.
 * @param r1 : Le rayon du premier cercle.
 * @param x2 : La position sur l'axe des abscisses du centre du deuxième cercle.
 * @param y2 : La position sur l'axe des ordonnées du centre du deuxième cercle.
 * @param r2 : Le rayon du deuxième cercle.
 *
 * @return bool true si une collision est détectée, false sinon.
 */
bool circle_circle(float x1, float y1, float r1, float x2, float y2, float r2)
{
    return false; // TODO!
}

/**
 * Retourne vrai s'il y a une collision entre un point et un rectangle, faux sinon.
 *
 * @param px : La position sur l'axe des abscisses du point.
 * @param py : La position sur l'axe des ordonnées du point.
 * @param rx : La position sur l'axe des abscisses du coin supérieur gauche du rectangle.
 * @param ry : La position sur l'axe des ordonnées du coin supérieur gauche du rectangle.
 * @param w  : La largeur du rectangle.
 * @param h  : La hauteur du rectangle.
 *
 * @return bool true si une collision est détectée, false sinon.
 */
bool point_rectangle(float px, float py, float rx, float ry, float w, float h)
{
    return false; // TODO!
}

/**
 * Retourne vrai s'il y a une collision entre deux rectangles, faux sinon.
 *
 * @param x1 : La position sur l'axe des abscisses du coin supérieur gauche du premier rectangle.
 * @param y1 : La position sur l'axe des ordonnées du coin supérieur gauche du premier rectangle.
 * @param w1 : La largeur du premier rectangle.
 * @param h1 : La hauteur du premier rectangle.
 * @param x2 : La position sur l'axe des abscisses du coin supérieur gauche du deuxième rectangle.
 * @param y2 : La position sur l'axe des ordonnées du coin supérieur gauche du deuxième rectangle.
 * @param w2 : La largeur du deuxième rectangle.
 * @param h2 : La hauteur du deuxième rectangle.
 *
 * @return bool true si une collision est détectée, false sinon.
 */
bool rectangle_rectangle(float x1, float y1, float w1, float h1, float x2, float y2, float w2, float h2)
{
    return false; // TODO!
}

/**
 * Retourne vrai s'il y a une collision entre un cercle et un rectangle, faux sinon.
 *
 * @param cx : La position sur l'axe des abscisses du centre du cercle.
 * @param cy : La position sur l'axe des ordonnées du centre du cercle.
 * @param r  : Le rayon du cercle.
 * @param rx : La position sur l'axe des abscisses du coin supérieur gauche du rectangle.
 * @param ry : La position sur l'axe des ordonnées du coin supérieur gauche du rectangle.
 * @param w  : La largeur du rectangle.
 * @param h  : La hauteur du rectangle.
 *
 * @return bool true si une collision est détectée, false sinon.
 */
bool circle_rectangle(float cx, float cy, float r, float rx, float ry, float w, float h)
{
    return false; // TODO!
}
