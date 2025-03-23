#nom de l'executable
NAME = ex01

#compilateur
CC = c++

#flags
FLAGS = -Wall -Wextra -Werror -std=c++98

#fichiers sources
SRCS = Animal.cpp \
	Brain.cpp \
	Cat.cpp \
	Dog.cpp \
	main.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \

#creation d'objets a partir des fichiers sources
OBJS = $(SRCS:.cpp=.o)


#compilations
all: $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all