
NAME = libft.a

SRC = *.c

OBJECTS = *.o

HEADERS = libft.h

all:$(NAME)

$(NAME):
	@gcc -c $(SRC) -I $(HEADERS) -Wall -Werror -Wextra
	@ar rc $(NAME) $(OBJECTS)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
