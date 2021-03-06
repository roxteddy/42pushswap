/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 05:00:13 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 22:01:09 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		main(int ac, char **av)
{
	t_list	*list;
	t_list	*moves;

	moves = NULL;
	if (ac < 2)
	{
		ft_putendl_fd("Error", 2);
		exit(-1);
	}
	if (!make_list(&list, ac, av) || checkdoubles(list))
	{
		ft_lstdel(&list, ft_freecontent);
		ft_putendl_fd("Error", 2);
		exit(-1);
	}
	solve(&list, &moves);
	put_moves(moves);
	ft_lstdel(&moves, ft_freecontent);
	ft_lstdel(&list, ft_freecontent);
	return (0);
}
