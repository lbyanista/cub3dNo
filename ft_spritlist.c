/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spritlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 08:45:37 by mlabrayj          #+#    #+#             */
/*   Updated: 2021/01/10 08:50:48 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	swap(float *a, float *b)
{
	float c;

	c = *a;
	*a = *b;
	*b = c;
}

t_obj		*ft_lstnewobj(float x, float y, float dest, char *tex)
{
	t_obj		*newobj;
	t_texdata	*sp_tx;

	newobj = malloc(sizeof(*newobj));
	if (newobj == NULL)
		return (NULL);
	sp_tx = malloc(sizeof(t_texdata));
	sp_tx->path = tex;
	newobj->p.x = x;
	newobj->p.y = y;
	newobj->sp_img = sp_tx;
	newobj->dest = dest;
	newobj->next = NULL;
	return (newobj);
}

void		ft_lstaddobj(t_obj **objlst, t_obj *newobj)
{
	t_obj *e;

	if (*objlst == NULL)
		*objlst = newobj;
	else
	{
		e = *objlst;
		while (e->next)
			e = e->next;
		e->next = newobj;
		newobj->next = NULL;
	}
}

void		sortlst(t_obj **objlst)
{
	t_obj		*a;
	t_obj		*b;
	t_texdata	*tmp;

	a = *objlst;
	while (a)
	{
		b = a;
		while (b)
		{
			if (a->dest < b->dest)
			{
				tmp = a->sp_img;
				a->sp_img = b->sp_img;
				b->sp_img = tmp;
				swap(&a->p.x, &b->p.x);
				swap(&a->p.y, &b->p.y);
				swap(&a->dest, &b->dest);
			}
			b = b->next;
		}
		a = a->next;
	}
}

void		setdests(void)
{
	t_obj *obj;

	obj = t_sprt.lstobj;
	while (obj)
	{
		obj->dest = sqrt(pow((t_player.pos.x - obj->p.x), 2)
					+ pow((t_player.pos.y - obj->p.y), 2));
		obj = obj->next;
	}
}
