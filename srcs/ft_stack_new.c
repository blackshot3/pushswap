/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:25:10 by edupless          #+#    #+#             */
/*   Updated: 2023/05/16 03:45:49 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/ft_printf.h"
#include"../includes/push_swap.h"

t_stack	*ft_stack_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		ft_printf("error");
	new->nbr = content;
	new->next = NULL;
	return (new);
}

t_stack	*ft_stack_new2(void)
{
	t_stack	*new;
	int content = 1 ;

	new = malloc(sizeof (t_stack));
	if (!new)
		ft_printf("error");
	new->nbr = content;
	new->next = NULL;
	return (new);
}