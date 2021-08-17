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
	if (!big || !little || len == 0)
		return (ft_strdup(""));
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
    char big[] = "daphmepham";
    char small[] = "phm";
    printf("%s\n", ft_strnstr(big, small, 5));
    return (0);
}
*/