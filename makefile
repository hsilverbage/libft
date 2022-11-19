NAME = libft.a

CC = gcc

SOURCES = ft_bzero.c	ft_isalpha.c	ft_isdigit.c	ft_memchr.c	ft_memcpy.c	ft_memset.c	ft_strdup.c	ft_strlcpy.c	ft_strncmp.c	ft_strrchr.c	ft_toupper.c \
		ft_atoi.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	ft_memcmp.c	ft_memmove.c	ft_strchr.c	ft_strlcat.c	ft_strlen.c	ft_strnstr.c	ft_tolower.c \
		ft_calloc.c	ft_strnjoin.c	ft_strtrim.c	main.c

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

.PHONY : all clean fclean re makefile make
