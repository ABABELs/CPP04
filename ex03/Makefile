# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: babels <babels@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:28:50 by babels            #+#    #+#              #
#    Updated: 2024/01/05 12:11:49 by babels           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
SOURCES = main.cpp AMateria.Class.cpp Character.Class.cpp Cure.Class.cpp Ice.Class.cpp MateriaSource.Class.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.c++
	$(CC) -c $(CFLAGS) -g3 $< -o $@ -I

${NAME}: ${OBJECTS}
	$(CC) $(CFLAGS) -g3 -o ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all