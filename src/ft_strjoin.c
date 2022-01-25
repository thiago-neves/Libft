/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:18:56 by tneves            #+#    #+#             */
/*   Updated: 2020/09/21 15:00:16 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*new_str;
	size_t	i;

	size = ft_strlen(s1) + ft_strlen(s2);
	new_str = ft_calloc(size + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	i = ft_strlen(new_str);
	ft_strlcat(new_str, s2, size + 1);
	return (new_str);
}
