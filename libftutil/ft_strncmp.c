/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 09:31:49 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/01/10 09:31:51 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_strncmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n > 0 && *(char *)s1 && *(char *)s2)
	{
		if (*(unsigned char *)s1 == *(unsigned char *)s2)
		{
			s1++;
			s2++;
		}
		else
			break ;
	}
	return ((*(unsigned char *)s1 - *(unsigned char *)s2));
}
