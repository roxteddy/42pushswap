/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 05:04:10 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 22:09:43 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			make_list(t_list **list, int ac, char **av)
{
	t_list	*current;
	t_list	*new;
	int		i;
	int		val;

	i = 0;
	*list = NULL;
	while(++i < ac)
	{
		if (strisint(av[i]))
			val = ft_atoi(av[i]);
		else
			return (0);
		new = ft_lstnew(&val, sizeof(int));
		if (!(*list))
		{
			*list = new;
			current = new;
		}
		else
		{
			current->next = new;
			current = current->next;
		}
	}
	return (1);
}
