/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:25:30 by edupless          #+#    #+#             */
/*   Updated: 2023/05/19 15:26:47 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_rb(t_stack **b, int j)
{
    if (!*b || !(*b)->next)
        return;

    t_stack *first = *b; 
    *b = first->next; 
    first->next = NULL; 

    t_stack *last = ft_lstlast2(*b); 
    last->next = first; 

    if (j == 0)
        write(1, "rb\n", 3);
}


void	ft_sb(t_stack **b, int j)
{
	t_stack	*tmp;

	if (!*b || !((*b)->next))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "sb\n", 3);
}