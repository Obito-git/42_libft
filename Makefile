NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_bzero.c    ft_isprint.c  ft_memmove.c  ft_strlcat.c  ft_toupper.c \
ft_calloc.c   ft_memccpy.c  ft_memset.c   ft_strchr.c  ft_strlcpy.c  ft_strnstr.c  \
ft_isalnum.c  ft_memchr.c   ft_strlen.c   ft_strrchr.c  \
ft_isascii.c  ft_memcmp.c   \
ft_isdigit.c  ft_memcpy.c   ft_strdup.c  ft_strncmp.c  ft_tolower.c	\
ft_isalpha.c  ft_atoi.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strtriteri.c

SRCS_BNS = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c ft_lstlast.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS = $(SRCS:.c=.o)

OBJS_BNS = $(SRCS_BNS:.c=.o)

all: $(NAME)
	
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(OBJS) $(OBJS_BNS)
	ar rc $(NAME) $(OBJS) $(OBJS_BNS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BNS)
	rm -f .*.swp
	rm -f *.so
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_BNS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BNS)

.PHONY: all clean fclean re so bonus

