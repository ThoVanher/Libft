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

static int	is_in_charset(const char *s1, char c)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;
	int		start;

	j = ft_strlen((char *)s1);
	i = 0;
	while (is_in_charset(set, s1[i]))
		i++;
	start = i;
	if (i != j)
	{
		while (is_in_charset(set, s1[j - 1]))
		{
			i++;
			j--;
		}
	}
	j = 0;
	if (!(new = malloc((ft_strlen((char *)s1) - i + 1) * sizeof(char))))
		return (0);
	while (ft_strlen((char *)s1) - i++ > 0)
		new[j++] = s1[start++];
	new[j] = '\0';
	return (new);
}
