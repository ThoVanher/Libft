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

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*new;
	int		srclen;
	int		i;

	srclen = ft_strlen((char *)src);
	i = 0;
	if (srclen - start >= len)
	{
		if (!(new = (char *)malloc((len + 1) * sizeof(char))))
			return (0);
		len = len + 1;
		while (--len)
			new[i++] = src[start++];
		new[i] = '\0';
	}
	if (srclen - start < len)
	{
		if (!(new = (char *)malloc((srclen - start + 1) * sizeof(char))))
			return (0);
		while (src[start])
			new[i++] = src[start++];
		new[i] = '\0';
	}
	return (new);
}
