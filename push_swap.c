/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:43:31 by albriffa          #+#    #+#             */
/*   Updated: 2024/01/31 18:56:18 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char **str, int j, t_sw *sw)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (k < 4)
	{
		while (str[j][i] == str[k][i] && str[j][i] && j != k)
		{
			i++;
			if (str[j][i] == str[k][i] && !str[j][i + 1] && !str[k][i + 1])
				sw->error = 1;
		}
		i = 0;
		k++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	t_sw	sw;

	i = 0;
	j = 1;
	while (j < argc)
	{
		ft_error(argv, j, &sw);
		while (argv[j][i])
		{
			if ((argv[j][i] < '0' || argv[j][i] > '9') && argv[j][i] != ' ')
				sw.error = 1;
			i++;
		}
		i = 0;
		j++;
		if (sw.error == 1)
		{
			write(1, "ERROR\n", 6);
			return(0);
		}
	}
//	write (1, "r", 1);
}
