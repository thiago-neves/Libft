/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:11:47 by tneves            #+#    #+#             */
/*   Updated: 2020/03/12 11:12:09 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_memchr(void *s, char c, int n)
{
	int		i;
	char	*ptr;

	ptr = (char*)s;
	i = 0;
	while (n > i)
	{
		if (ptr[i] == c)
			return (void *)(ptr + i);
		++i;
	}
	return (NULL);
}
