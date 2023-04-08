##
## EPITECH PROJECT, 2022
## Collision Detection
## File description:
## Makefile
##

CFLAGS = -W -Wall -Wextra -Werror -Wno-unused-parameter
CPPFLAGS = -I./does_not_open/include/

CSFML = -lcsfml-system -lcsfml-graphics -lcsfml-window -lcsfml-audio

SRC = 	./does_not_open/src/add_obj.c \
		./does_not_open/src/attach_obj_to_mouse.c \
		./does_not_open/src/check_collision.c \
		./does_not_open/src/draw.c \
		./does_not_open/src/event.c \
		./does_not_open/src/main.c \
		./does_not_open/src/move.c \
		./does_not_open/src/singleton.c \
		./init.c \
		./collision_detection.c

OBJ = $(SRC:.c=.o)

NAME = collision

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CSFML) -lm

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
