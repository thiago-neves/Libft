/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:21:57 by tneves            #+#    #+#             */
/*   Updated: 2020/09/21 12:04:23 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	if (little[i] == '\0')
		return ((char*)big);
	if (big == NULL && len == 0)
		return (NULL);
	while (0 < len && big[i] != '\0')
	{
		j = 0;
		l = len;
		while (big[i + j] == little[j] && l > 0)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
			l--;
		}
		i++;
		len--;
	}
	return (NULL);
}
