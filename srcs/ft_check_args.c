/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:20:01 by edupless          #+#    #+#             */
/*   Updated: 2023/05/16 03:55:30 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft/includes/ft_printf.h"
#include"../libft/includes/libft.h"
#include"../includes/push_swap.h"

void	alpha_check(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while ((argv[i][j]) != '\0')
		{
			if (ft_isalpha(argv[i][j]))
				ft_printf("error");
			j++;
		}
		i++;
	}
}

int	check_args(char **argv)
{
	alpha_check(argv);
	if (!check_error(argv, 1, 0))
		return (false);
	return (true);
}
