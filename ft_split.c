#include "libft.h"

int		ft_get_lines_count(const char *str, char c)
{
	int	i;
	int	lc;

	if (!str)
		return (0);
	i = 0;
	lc = 0;
	while (str[i])
	{
		while(str[i] && str[i] == c)
			i++;
		if (str[i] != '\0')
			lc++;
		while(str[i] && str[i] != c)
			i++;
	}
	return (lc);
}

int	line_strt(const char *str, int *index, char c)
{
	int	i = 0;
	while (str[*index] && str[*index] == c)
		*index += 1;
	while (str[*index + i] && str[*index + i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*temp;
	int i;
	int y;
	int	index;

	i = 0;
	index = 0;
	res = (char **) malloc((ft_get_lines_count(s, c) + 1) * sizeof(char*));
	if (!res || !s)
		return (NULL);
	while (i < ft_get_lines_count(s,c))
	{
		temp = (char *) malloc((line_strt(s, &index, c)  + 1) * sizeof(char));
		y = 0;
		while (c != s[index])
			temp[y++] = s[index++];
		temp[y] = 0;
		res[i] = temp;
		i++;
	}
	res[i] = NULL;
	return (res);
}
/*
int main()
{
	char *test = NULL;
	char **res;
	res = ft_split(test, 0);
	int i = 0;
	while(res[i])
		printf("%s\n", res[i]);
}*/
