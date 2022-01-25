/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:22:04 by tneves            #+#    #+#             */
/*   Updated: 2020/03/12 11:22:40 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last_occurence;

	i = 0;
	last_occurence = NULL;
	while (str[i])
	{
		if (str[i] == c)
			last_occurence = (char*)(str + i);
		i++;
	}
	if (str[i] == c)
		last_occurence = (char *)(str + i);
	return (last_occurence);
}
