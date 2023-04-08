/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** main.c
*/

#include "collision_detection.h"

int main(void)
{
    init();
    while (sfRenderWindow_isOpen(data()->window)) {
        data()->dt = sfTime_asSeconds(sfClock_restart(data()->clock));
        data()->mouse_pos = sfMouse_getPositionRenderWindow(data()->window);
        while (sfRenderWindow_pollEvent(data()->window, &data()->event))
            event_handler();
        move();
        check_collision();
        sfRenderWindow_clear(data()->window, data()->is_collision ? (sfColor){50, 10, 0, 0} : sfBlack);
        draw();
        sfRenderWindow_display(data()->window);
    }
    return 0;
}
