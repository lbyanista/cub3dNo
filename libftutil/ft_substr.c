/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 09:32:39 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/01/10 09:32:43 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (i < start)
		return (ft_strdup(""));
	i -= start;
	len = (i < len) ? i : len;
	if ((ns = malloc(len * sizeof(char) + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
		ns[i++] = s[start++];
	ns[i] = '\0';
	return (ns);
}
