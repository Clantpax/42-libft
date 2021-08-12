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
	return (ft_substr(s1, j, k - j + 1));
}

int main()
{
    char s1[500] = "bring";
    char set[500] = "bong";

    printf("%s\n", ft_strtrim(s1, set));
}
