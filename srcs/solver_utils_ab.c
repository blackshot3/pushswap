/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:20:12 by edupless          #+#    #+#             */
/*   Updated: 2023/05/16 07:02:10 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/push_swap.h"


int	ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_trouver_i (a, c))
		i = ft_trouver_i (a, c);
	return (i);
}


int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_lstsize2(b) - ft_find_place_b(b, c);
	if ((i < (ft_lstsize2(a) - ft_trouver_i (a, c))) && ft_trouver_i (a, c))
		i = ft_lstsize2(a) - ft_trouver_i (a, c);
	return (i);
}

int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_trouver_i (a, c))
		i = ft_lstsize2(a) - ft_trouver_i (a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_lstsize2(b) - ft_find_place_b(b, c);
	i = ft_trouver_i (a, c) + i;
	return (i);
}
