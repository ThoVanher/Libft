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
#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int i;
	int sign;
	long long res;

	i = 0;
	sign = 0;
	res = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign++;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (sign % 2 == 1)
		res = -res;
	if (res + 9223372036854775807 < 0)
		return (0);
	return (res);
}

int main()
{
printf("%d\n", ft_atoi("-9223372036854775806"));
printf("%d\n", atoi("-9223372036854775806"));
}
