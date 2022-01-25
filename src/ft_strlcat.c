/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:20:05 by tneves            #+#    #+#             */
/*   Updated: 2020/03/12 11:21:32 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;
	char		*dest;
	const char	*source;

	source = src;
	dest = dst;
	i = 0;
	while (i++ != size && *dest)
		dest++;
	len = dest - dst;
	i = size - len;
	if (i == 0)
		return (len + ft_strlen(source));
	while (*source)
	{
		if (i != 1)
		{
			*dest++ = *source;
			i--;
		}
		source++;
	}
	*dest = '\0';
	return (len + (source - src));
}
