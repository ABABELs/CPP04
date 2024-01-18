# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabel <aabel@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:28:50 by babels            #+#    #+#              #
#    Updated: 2024/01/18 10:58:10 by aabel            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = burn
SOURCES = main.cpp Animal.Class.cpp Cat.Class.cpp Dog.Class.cpp WrongAnimals.Class.cpp WrongCat.Class.cpp Brain.Class.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CCC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.c++
	$(CXX) -c $(CXXFLAGS) -g3 $< -o $@ -I

${NAME}: ${OBJECTS}
	$(CXX) $(CXXFLAGS) -g3 -o ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all