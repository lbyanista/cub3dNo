/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoiforresul.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 09:27:52 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/01/24 09:44:30 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

static int	getsign(const char *str, int *i)
{
	if (str[*i] == '-')
	{
		*i += 1;
		return (-1);
	}
	else if (str[*i] == '+')
	{
		*i += 1;
		return (1);
	}
	return (1);
}

int			ft_atoiforresul(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = getsign(str, &i);
	while (str[i] != '\0')
	{
		if (result > 100000)
			return (result * sign);
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			return (result * sign);
		i++;
	}
	return (result * sign);
}
