/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:20:40 by edupless          #+#    #+#             */
/*   Updated: 2023/05/16 01:24:56 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/push_swap.h"
#include "../libft/includes/ft_printf.h"


t_stack	*ft_parse(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		ft_printf("error");
	else if (argc == 2)
		stack_a = ft_parse_args_quoted(argv);
	else
	{
		list_args(argv, &stack_a);
	}
	return (stack_a);
}
