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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*a;
	unsigned int	i;

	i = 0;
	if (s[start] == 0)
		return (0);
	if (!s)
		return (0);
	a = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = 0;
	return (a);
}
/*
int main()
{
    char *a = "qwerty";

    printf("%s\n", ft_substr(a, 0, 0));
}
*/