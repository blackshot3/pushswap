/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:20:05 by edupless          #+#    #+#             */
/*   Updated: 2023/05/16 07:07:39 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/push_swap.h"

int ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
    int i ;
	i = ft_trouver_a(a, c);
    int trouver_i = ft_trouver_i(b, c);

    if (i < trouver_i)
        i = trouver_i;
    
    return i;
}

int ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
    int i ;
	
	i = 0;
    int trouver_a = ft_trouver_a(a, c);
    int trouver_i = ft_trouver_i(b, c);
    int size_a = ft_lstsize2(a);
    int size_b = ft_lstsize2(b);

    if (trouver_a)
        i = size_a - trouver_a;
    
    if (i < (size_b - trouver_i) && trouver_i)
        i = size_b - trouver_i;
    
    return i;
}

int ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
    int i ;

	i = 0;
    int trouver_i = ft_trouver_i(b, c);
    int size_b = ft_lstsize2(b);

    if (trouver_i)
        i = size_b - trouver_i;
    
    i += ft_trouver_a(a, c);
    return i;
}

int ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
    int i = 0;
    int trouver_a = ft_trouver_a(a, c);
    int trouver_i = ft_trouver_i(b, c);
    int size_a = ft_lstsize2(a);

    if (trouver_a)
        i = size_a - trouver_a;
    
    i += trouver_i;
    return i;
}
