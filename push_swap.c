/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:43:31 by albriffa          #+#    #+#             */
/*   Updated: 2024/02/01 15:50:53 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char **str, t_sw *sw)
{
	int	j;
	int	i;
	int	k;

	i = 0;
	j = 1;
	k = 1;
	while (j < sw->argc)
	{
		while (str[j][i])
		{
			if ((str[j][i] < '0' || str[j][i] > '9') && str[j][i] != ' ')
				sw->error = 1;
			i++;
		}
		i = 0;
		while (k < sw->argc)
		{
			while (str[j][i] == str[k][i] && str[j][i] && j != k)
			{
				if (str[j][i] == str[k][i] && !str[j][i + 1] && !str[k][i + 1])
					sw->error = 1;
				i++;
			}
			i = 0;
			k++;
		}
		k = 0;
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	t_sw	sw;

	i = 0;
	j = 1;
	sw.argc = argc;
	ft_error(argv, &sw);
	if (sw.error == 1)
	{
		write(1, "ERROR\n", 6);
		return(0);
	}
}
