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

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	if (c == 0)
		return ("\0");
	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
			return ((char *)s + i);
		i--;
	}
	return ('\0');
}
/*
int main(void)
{
    const char a[9] = "swegway";
    char c = 'w';
    printf("%s\n",ft_strrchr(a,c));
    printf("%s\n",strrchr(a,c));
    return 0;
}
*/