/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvanher <thvanher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:50:01 by thvanher          #+#    #+#             */
/*   Updated: 2020/08/11 10:50:22 by thvanher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *ne, size_t n)
{
	unsigned int i;
	unsigned int j;

	if (*ne == 0)
		return ((char *)hs);
	i = 0;
	while (hs[i] && i < n)
	{
		j = 0;
		if (hs[i] == ne[j])
		{
			while (i + j < n && hs[i + j] == ne[j])
			{
				j++;
				if (!ne[j])
					return ((char *)&hs[i]);
			}
		}
		i++;
	}
	return (0);
}
