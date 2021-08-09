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

char **ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*(s + i) == c)
		i++;
	
}

int main()
{
    char **tab = ft_split("unoo dos tre  42o",'o');
    size_t i = 0;
    while (i < ft_getcount("unoo dos tre  42o",'o'))
    {
        printf("%s\n", tab[i]);
        i++;
    }
}

if 'o' = a[0], delete a[0]
if 'o' = a[i], return '\n'
if 'o' = a[i] = a[i + 1], return a[i]
