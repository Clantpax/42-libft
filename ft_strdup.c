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

char	*ft_strdup(const char *s)
{
	char	*a;
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	a = (char *)malloc(sizeof(char) * i + 1);
	a[i + 1] = 0;
	while (i--)
		a[i] = *(s + i);
	return (a);
}
/*
int main(void)
{
	printf("%s\n", ft_strdup("qweq"));
}
*/