/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_and_push.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:38:48 by edupless          #+#    #+#             */
/*   Updated: 2023/05/19 15:41:32 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"../includes/push_swap.h"

int ft_apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c || ft_find_place_b(*b, c) > 0)
		{
			if ((*a)->nbr != c)
				ft_rr(a, b, 0);
			else
				ft_ra(a, 0);
		}
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c || ft_trouver_a(*a, c) > 0)
		{
			if ((*b)->nbr != c)
				ft_rr(a, b, 0);
			else
				ft_rb(b, 0);
		}
		while (ft_trouver_a(*a, c) > 0)
			ft_ra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c || ft_find_place_b(*b, c) > 0)
		{
			if ((*a)->nbr != c)
				ft_rrr(a, b, 0);
			else
				ft_rra(a, 0);
		}
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c || ft_trouver_a(*a, c) > 0)
		{
			if ((*b)->nbr != c)
				ft_rrr(a, b, 0);
			else
				ft_rrb(b, 0);
		}
		while (ft_trouver_a(*a, c) > 0)
			ft_rra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			ft_rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while (ft_trouver_a(*a, c) > 0)
			ft_rra(a, 0);
		while ((*b)->nbr != c)
			ft_rb(b, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			ft_ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while (ft_trouver_a(*a, c) > 0)
			ft_ra(a, 0);
		while ((*b)->nbr != c)
			ft_rrb(b, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}
