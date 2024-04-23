/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prog.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 04:52:52 by albriffa          #+#    #+#             */
/*   Updated: 2024/04/23 12:04:22 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_prog(t_sw *sw)
{
	int	i;
	int	k;
	int	j;
	int	test;
	
	test = 0;
	while (/*ft_check(sw) == 0*/test++ == 0)
	{
		ft_algo(sw, "pb");
		ft_algo(sw, "pb");
		if (ft_atoi(sw->b[0]) < ft_atoi(sw->b[1]))
			ft_algo(sw, "sb");
		while (sw->j > 3)
		{
			int	x = 0;
			int	y = 0;
			i = 0;
			k = 0;
			j = 1;
			while (i < sw->k - 1)
			{
				if ((ft_atoi(sw->av[1]) - ft_atoi(sw->b[k])) > 0)
					x = ft_atoi(sw->av[1]) - ft_atoi(sw->b[k]);
				else
					x = ft_atoi(sw->b[k]) - ft_atoi(sw->av[1]);
				if ((ft_atoi(sw->av[1]) - ft_atoi(sw->b[j])) > 0)
					y = ft_atoi(sw->av[1]) - ft_atoi(sw->b[j]);
				else
					y = ft_atoi(sw->b[j]) - ft_atoi(sw->av[1]);
				if (x <= y)
				{	
					j++;
					if  (k == j)
						j++;
				}
				else
				{
					k = j + 1;
					if (k == j)
						k++;
				}
				i++;
			}
			if (k < j)
				i = k;
			else
				i = j;
			j = 0;
			k = 0;
			if (i * 2 <= sw->k && i != 0)
			{
				i += sw->k - i;
				if (i % 2 != 0)
					i--;
				i /= 2;
				while (i-- != 0)
				{
					ft_algo(sw, "rb");
					j++;
				}
			}
			else if (i * 2 > sw->k && i != 0)
			{
				i += sw->k - (i * 2);
				if (i % 2 != 0)
					i ++;
				i /= 2;
				while (i-- != 0)
				{
					ft_algo(sw, "rrb");
					k++;
				}
				k++;
			}
			ft_algo(sw, "pb");
			if (ft_atoi(sw->b[0]) < ft_atoi(sw->b[1]))
			{
				ft_algo(sw, "sb");
//				if (j != 0)
//					j -= 1;
				if (k != 0)
					k -= 1;
			}
			if (j != 0)
			{
				while (j-- != 0)
				{
					write(1, "x", 1);
					ft_algo(sw, "rrb");
				}
			}
			else
			{
				while (k-- != 0)
				{
					write(1, "o", 1);
					ft_algo(sw, "rb");
				}
			}
		}

		if (ft_atoi(sw->av[1]) > ft_atoi(sw->av[2]))
			ft_algo(sw, "sa");
		i = 2;/*
		while (sw->k > 0)
		{
			while (ft_atoi(sw->av[sw->j - 1]) > ft_atoi(sw->b[0]) && i-- > 0)
				ft_algo(sw, "rra");
			ft_algo(sw, "pa");
			if (sw->k > 1 && ft_atoi(sw->b[0]) < ft_atoi(sw->b[1]))
				ft_algo(sw, "sb");
		}
		if (ft_atoi(sw->av[1]) > ft_atoi(sw->av[sw->j - 1]))
			ft_algo(sw, "rra");*/
	}
}

int	ft_check(t_sw *sw)
{
	int	j;
	int	i;

	j = sw->j;
	i = 1;
	while(i + 1 < j)
	{
		if (ft_atoi(sw->av[i]) > ft_atoi(sw->av[i + 1]))
			return (0);
		i++;
	}
	return (1);
}
