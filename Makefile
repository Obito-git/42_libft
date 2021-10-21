NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_bzero.c    ft_isprint.c  ft_memmove.c  ft_strlcat.c  ft_toupper.c \
ft_calloc.c   ft_memccpy.c  ft_memset.c   ft_strchr.c  ft_strlcpy.c  ft_strnstr.c  \
ft_isalnum.c  ft_memchr.c   ft_strlen.c   ft_strrchr.c  \
ft_isascii.c  ft_memcmp.c   \
ft_isdigit.c  ft_memcpy.c   ft_strdup.c  ft_strncmp.c  ft_tolower.c	\
ft_isalpha.c  \
ft_substr.c ft_strjoin.c ft_strtrim.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)
	
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)
	rm -f .*.swp
	rm -f *.so
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re so

