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

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*a;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1 || !s2)
		return (0);
	k = -1;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	a = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!a)
		return (0);
	while (++k < i)
		a[k] = s1[k];
	k = -1;
	while (++k < j)
		a[k + i] = s2[k];
	a[i + j] = 0;
	return (a);
}
/*
int main()
{
    char *a = "big";
	char *b = " ";
	char *c = "clock";
	char *t = ft_strjoin(a, b);

	printf("%s\n", ft_strjoin(a, b));
    printf("%s\n", ft_strjoin(t, c));
}
*/