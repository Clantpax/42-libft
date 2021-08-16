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

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = -1;
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a == 0)
		return (0);
	while (++i < len)
		a[i] = s[start + i];
	a[i] = 0;
	return (a);
}

int main()
{
    char *a = "qwert";

    printf("%s\n", ft_substr(a, 10, 0));
}
