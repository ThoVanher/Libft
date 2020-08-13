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

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	char			*csrc;
	char			*cdst;
	unsigned long	i;

	csrc = src;
	cdst = dst;
	i = 0;
	while (i < n)
	{
		if (csrc[i] == (unsigned char)c)
		{
			cdst[i] = csrc[i];
			return (cdst + i + 1);
		}
		else
			cdst[i] = csrc[i];
		i++;
	}
	return (0);
}
