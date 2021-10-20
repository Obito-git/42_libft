#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <bsd/string.h> //FIXME
#include <stdlib.h>
#include <stdio.h> //FIXME

/*/////////////////// FIRST PART //////////////////////////////////////////// */

/*<string.h>*/
void	*ft_memset (void *destination, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *destination, const void *source, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
int		ft_strncmp(char	*s1, char	*s2, unsigned int	n);
/*<bsd/string.h>*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char	*dest, char	*src, size_t	size);
char	*ft_strnstr(const char	*str, const char	*to_find, size_t len);
/* <ctype.h> */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/*<stdlib.h>*/
int		ft_atoi(char *str);
void	*ft_calloc(size_t nmemb, size_t size);










/*//////////////////////////// BONUS ////////////////////////////////// */
/*<string.h>*/
char	*ft_strcpy(char	*dest, const char	*src);
char	*ft_strncpy(char	*dest,	char	*src,	unsigned int	n);
char	*ft_strcat(char	*dest, char	*src);
char	*ft_strncat(char	*dest, char	*src, unsigned int nb);
char	*ft_strstr(const char	*str, const char	*to_find);
int		ft_strcmp(char	*s1, char	*s2);
/*<stdio.h>*/
void	ft_putchar(char c);
/*<42 ecole>*/
void	ft_putstr(char const *s);
void	ft_putnbr(int	n);


#endif
