/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 09:29:20 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/01/10 09:29:26 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *t;

	if (dst == NULL && src == NULL)
		return (NULL);
	t = (char *)dst;
	while (n > 0)
	{
		if (*(char *)t != *(char *)src)
			*(char *)t = *(char *)src;
		t++;
		src++;
		n--;
	}
	return (dst);
}
