/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:27:09 by edupless          #+#    #+#             */
/*   Updated: 2023/05/16 01:27:20 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"



void ft_free(t_stack **lst)
{
	if (!lst || !*lst)
		return;

	t_stack *current = *lst;
	t_stack *next = NULL;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*lst = NULL;
}