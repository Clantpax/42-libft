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

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		while (*(s + i) == c)
			i++;
		if (*(s + i) != c && *(s + i) != '\0')
			count += 1;
		while (*(s + i) != c && *(s + i) != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (0);
	i = 0;
	k = 0;
	str = malloc(sizeof(s) * (ft_count(s, c) + 1));
	if (!str)
		return (0);
	while (*(s + i) != '\0' && k < ft_count(s, c))
	{
		j = 0;
		while (*(s + i) == c)
			i++;
		while (*(s + i + j) != c && *(s + i + j) != '\0')
			j++;
		str[k] = malloc(sizeof(*s) * (j + 1));
		ft_strlcpy(str[k++], s + i, j + 1);
		i = i + j;
	}
	str[k] = 0;
	return (str);
}
/*
int main()
{
    char **res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
    int i = 0;
    while (res[i])
        printf("%s\n", res[i++]);
    return (0);
}
*/