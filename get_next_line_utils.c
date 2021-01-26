/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 09:02:28 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/01/10 09:41:35 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		chr_bn(char *was_read)
{
	int i;

	i = 0;
	if (was_read == NULL)
		return (-1);
	while (was_read[i] != '\0')
	{
		if (was_read[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int		read_fd(char **was_read, int *len_read, int fd)
{
	*was_read = malloc(BUFFER_SIZE + 1);
	if (*was_read == NULL)
		return (-1);
	*len_read = read(fd, *was_read, BUFFER_SIZE);
	if (*len_read == -1)
	{
		free(*was_read);
		*was_read = NULL;
		return (-1);
	}
	was_read[0][*len_read] = '\0';
	return (*len_read);
}
