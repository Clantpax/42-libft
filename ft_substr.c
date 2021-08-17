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

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	if (ft_strlen(s) < len)
		a = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		a = (char *)malloc(sizeof(char) * (len + 1));
	if (a == 0)
		return (0);
	while (s[start + i] != 0 && i < len)
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
    char *a = "qwert";

    printf("%s\n", ft_substr(a, 1, 1));
}
*/