/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvanher <thvanher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:50:01 by thvanher          #+#    #+#             */
/*   Updated: 2020/08/24 17:53:08 by thvanher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_new(char *new, char const *s1, char const *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = 0;
	if (!s1 && !s2)
		return (new);
	if (!s1 || !s2)
		return (!s1 ? ft_strdup((char *)s2) : ft_strdup((char *)s1));
	if (!(new = (char *)malloc((ft_strlen((char *)s1) +
						ft_strlen((char *)s2) + 1) * sizeof(char))))
		return (0);
	return (fill_new(new, s1, s2));
}
