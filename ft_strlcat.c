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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(dest);
	k = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (k);
	if (size < j)
		return (size + k);
	while (j + i < size - 1 && *src != 0)
		dest[j + i++] = *src++;
	dest[j + i] = 0;
	return (j + k);
}
/* 
int main(void)
{
    printf("%ld\n", ft_strlcat("r", "l", 5));
}
 */