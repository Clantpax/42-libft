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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	if (!*little || len == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != 0 && i < len)
	{
		j = 0;
		while (little[j] == big[i + j])
			j++;
		if (i + j > len)
			break ;
		if (little[j] == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*
int    main()
{
	char *s1 = "oh no not the empty string !";
    char *s2 = "";
    size_t max = 0;

    //char *i1 = strnstr(s1, s2, max);
    char *i2 = ft_strnstr(s1, s2, max);
	//printf("%s\n", i1);
    printf("%s\n", i2);
    return (0);
}
*/