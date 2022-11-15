NAME = libft.a

SOURCES = ft_isalpha.c ft_isdigit.c main.c

OBJECTS	= $(SOURCES:.c=.o)

CFLAGS += -Wall -Werror -Wextra

$(NAME) : $(OBJECTS)
	cc -o $(NAME) $(OBJECTS)

all : $(NAME)

clean : 
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all
