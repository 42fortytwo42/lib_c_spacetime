#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/25 12:25:27 by tle-mign          #+#    #+#              #
#    Updated: 2014/01/11 17:18:09 by tle-mign         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libspacetime.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

AR = ar rc

RANLIB = ranlib

HEADER = libspacetime.h

SRC =	cpu_clock_compare.c \
		cpu_clock_end.c \
		cpu_clock_init.c \
		get_date.c \
		get_time_microseconds.c \
		get_time_milliseconds.c \
		get_time_nanoseconds.c \
		get_time_seconds.c \
		print_date.c \
		print_time_microseconds.c \
		print_time_milliseconds.c \
		print_time_nanoseconds.c \
		print_time_seconds.c \
		time_init.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		@echo ------------ 42 -------------
		@echo -----------------------------
		@echo --- Projet LIBSPACETIME --GO GO GO -
		@echo -----------------------------
		@echo ------------ 42 -------------
		@echo Conception librairie libspacetime.a
		@echo -----------------------------
		@echo --- Compilation en cours ----
		$(CC) $(CFLAGS) $(SRC)
		@echo --- Compilation terminee ----
		@echo -----------------------------
		@echo --- Creation librairie ------
		$(AR) $(NAME) $(OBJ) $(HEADER)
		@echo --- librairie disponible ----
		@echo -----------------------------
		@echo indexation de la librairie en cours
		@echo -----------------------------
		$(RANLIB) $(NAME)
		@echo -----------------------------
		@echo indexation de la librairie effectue
		@echo -----------------------------
		@echo Conception librairie libspacetime.a OK
		@echo -----------------------------

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re :	fclean all
