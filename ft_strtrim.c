/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: payong <payong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:13:57 by payong            #+#    #+#             */
/*   Updated: 2021/08/07 17:13:57 by payong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
static int	check(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	size(char const *s1, char const *set)
{
	int	cut;
	int	i;
	int	j;

	cut = 0;
	i = 0;
	while (s1[i])
	{
		if (check(s1[i], set))
			cut++;
		else
			break ;
		i++;
	}
	j = ft_strlen(s1) - 1;
	while (j > i)
	{
		if (check(s1[j], set))
			cut++;
		else
			break ;
		j--;
	}
	return (cut);
}

static void	trim(char *trimmed, char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = ft_strlen(s1) - size(s1, set);
	while (s1[i])
	{
		if (check(s1[i], set))
			i++;
		else
			break ;
	}
	while (k-- > 0)
	{
		trimmed[j] = s1[i];
		j++;
		i++;
	}
	trimmed[j] = 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;

	trimmed = (char *)malloc(ft_strlen(s1) - size(s1, set) + 1);
	printf("%s\n", trimmed);
	if (trimmed == 0)
		return (0);
	trim(trimmed, s1, set);
	return (trimmed);
}

static int    char_is_in_set(char s1, char const *set)
{
    size_t    i;

    i = 0;
    while (set[i])
    {
        if (set[i] == s1)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t    start;
    size_t    end;
    char    *str;

    start = 0; 
    end = ft_strlen(s1); 
    while (s1[start] && char_is_in_set(s1[start], set))
        start++; 
    while (end > start && char_is_in_set(s1[end - 1], set))
        end--;
    str = ft_substr(s1, start, end - start);
    if (!str)
        return (NULL);
    return (str);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(set);
	j = 0;
	k = ft_strlen(s1) - 1;
	while (i--)
	{
		if (s1[j] == set[i])
		{
			j++;
			i = ft_strlen(set);
		}
		else if (s1[k] == set[i])
		{
			k--;
			i = ft_strlen(set);
		}
	}
	if (j == ft_strlen(s1))
		return (ft_strdup(""));
	return (ft_substr(s1, j, k - j + 1));
}

int main()
{
    char s1[500] = ".......";
    char set[500] = ".";

    printf("%s\n", ft_strtrim(s1, set));
}