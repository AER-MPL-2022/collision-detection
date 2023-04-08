/*
** EPITECH PROJECT, 2022
** Collision Detection
** File description:
** event.c
*/

#include "collision_detection.h"

void event_handler(void)
{
    static bool mouse_pressed = false;

    switch (data()->event.type) {
        case sfEvtClosed:
            sfRenderWindow_close(data()->window);
            break;
        case sfEvtResized:
            break;
        case sfEvtLostFocus:
            break;
        case sfEvtGainedFocus:
            break;
        case sfEvtTextEntered:
            break;
        case sfEvtKeyPressed:
            break;
        case sfEvtKeyReleased:
            break;
        case sfEvtMouseWheelMoved:
            break;
        case sfEvtMouseWheelScrolled:
            break;
        case sfEvtMouseButtonPressed:
            if (data()->event.mouseButton.button != sfMouseLeft || mouse_pressed)
                break;
            mouse_pressed = true;
            attach_obj_to_mouse();
            break;
        case sfEvtMouseButtonReleased:
            if (data()->event.mouseButton.button != sfMouseLeft)
                break;
            mouse_pressed = false;
            data()->type = None;
            data()->cm = NULL;
            data()->rm = NULL;
            break;
        case sfEvtMouseMoved:
            break;
        case sfEvtMouseEntered:
            break;
        case sfEvtMouseLeft:
            break;
        case sfEvtJoystickButtonPressed:
            break;
        case sfEvtJoystickButtonReleased:
            break;
        case sfEvtJoystickMoved:
            break;
        case sfEvtJoystickConnected:
            break;
        case sfEvtJoystickDisconnected:
            break;
        case sfEvtTouchBegan:
            break;
        case sfEvtTouchMoved:
            break;
        case sfEvtTouchEnded:
            break;
        case sfEvtSensorChanged:
            break;
        case sfEvtCount:
            break;
    }
}
