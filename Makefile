#CC := cc
NAME := libft.a
HEADERFILE := libft.h
SRCFILES := ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c

OBJFILES := $(SRCFILES:.c=.o)
CFLAGS ?= -Wall -Wextra -Werror -c

all : $(NAME)

$(NAME) : $(OBJFILES)
	$(AR) -rcs $(NAME) $(OBLFILES)

%.o: %.c
	$(CC) $(CFLAGS) $^

clean:
	$(RM) $(OBJFILES)
fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	echo "$(CC) $(RM) $(AR) $(ARFLAGS)"

.PHONY: all clean fclean re
