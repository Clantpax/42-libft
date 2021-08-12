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

	i = ft_strlen(s);
	if (*(s + i) == c)
		return ((unsigned char *)s + i);
	i--;
	while (*(s + i) != 0 && i != -1)
	{
		if (*(s + i) == c)
			return ((unsigned char *)s + i);
		i--;
	}
	return (0);
}

int main(void)
{
    const char *str2 = "bonjour";
    //char c = 'w';
    printf("%s\n",ft_strrchr(str2 + 6, 'u'));
    printf("%s\n",strrchr(str2+6, 'u'));
    return 0;
}
