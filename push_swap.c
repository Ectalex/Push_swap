/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:43:31 by albriffa          #+#    #+#             */
/*   Updated: 2024/03/21 06:54:22 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_sw *sw)
{
	int	j;
	int	i;
	int	k;

	i = 0;
	j = 1;
	k = 1;
	while (j < sw->ac)
	{
		while (sw->av[j][i])
		{
			if ((sw->av[j][i] < '0' || sw->av[j][i] > '9') && sw->av[j][i] != ' ')
				sw->error = 1;
			i++;
		}
		i = 0;
		while (k < sw->ac)
		{
			while (sw->av[j][i] == sw->av[k][i] && sw->av[j][i] && j != k)
			{
				if (sw->av[j][i] == sw->av[k][i] && !sw->av[j][i + 1] && !sw->av[k][i + 1])
					sw->error = 1;
				i++;
			}
			i = 0;
			k++;
		}
		k = 0;
		j++;
	}
	sw->j = j;
}

int	main(int argc, char **argv)
{
	t_sw	sw;

	int	i = 1;
	sw.k = 0;
	sw.p = 0;
	sw.b = malloc(sizeof(sw.av) * 500);
	sw.diff = malloc(sizeof(int) * 500);
	sw.ac = argc;
	sw.av = argv;
	ft_error(&sw);
	if (sw.error == 1)
	{
		write(1, "ERROR\n", 6);
		return(0);
	}
	sw.in = "hg";
	ft_prog(&sw);
	while (i < sw.j || i - 1 < sw.k)
	{
		printf("%d : sw.av = %s  et  sw.b = %s\n", i, sw.av[i], sw.b[i - 1]);
		i++;
	}
}
