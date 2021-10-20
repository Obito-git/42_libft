#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <bsd/string.h> //FIXME
#include <stdlib.h>
#include <stdio.h> //FIXME
/* FIXME
void ft_assert_str(char *exp, char *cur, char *name);
void ft_assert(int expected, int current, char *name);
void ft_print_stats(void);
*/
/*/////////////////// FIRST PART /////////////////////////// */
void	*ft_memset (void *destination, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *destination, const void *source, size_t size);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memchr(const void *str, int c, size_t n);

/* ctype.h */
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
	int ft_atoi(char *str);
char	*ft_strdup(const char *src);
char	*ft_strnstr(const char	*str, const char	*to_find, size_t len);
void *ft_calloc(size_t nmemb, size_t size);


void	ft_putchar(char c);
void	ft_putnbr(int	n);
void	ft_putstr(char const *s);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char	*dest, const char	*src);
char	*ft_strncpy(char	*dest,	char	*src,	unsigned int	n);

int	ft_strcmp(char	*s1, char	*s2);
int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);
char	*ft_strcat(char	*dest, char	*src);
char	*ft_strncat(char	*dest, char	*src, unsigned int nb);
char	*ft_strstr(const char	*str, const char	*to_find);
size_t	ft_strlcat(char	*dest, char	*src, size_t	size);


#endif
