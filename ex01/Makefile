COMPIL = clang++

FLAGS = -Wall -Werror -Wextra

NAME = myphonebook

SRC = megaphone.cpp

OBJ = $(SRC:.c=.o)

%.o : %.c
	@${COMPIL} ${FLAGS} -c $@ $<

all : $(NAME)

NAME : $(OBJ)
	@${COMPIL} ${FLAGS} -c $@ $<

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME)

re	: fclean all

.PHONY : all clean fclean re
