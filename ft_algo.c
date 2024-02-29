/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:06:22 by albriffa          #+#    #+#             */
/*   Updated: 2024/02/01 16:24:10 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo(t_sw *sw)
{
//	sw->b = malloc(sizeof(sw->av) * (1));
	if (!ft_strcmp(sw->in, "pb"))
		ft_pb(sw);
	else if (!ft_strcmp(sw->in, "pa"))
		ft_pa(sw);
	else if (!ft_strcmp(sw->in, "sa") || !ft_strcmp(sw->in, "sb") || !ft_strcmp(sw->in, "ss"))
		ft_ss(sw);
	else if (!ft_strcmp(sw->in, "ra") || !ft_strcmp(sw->in, "rb") || !ft_strcmp(sw->in, "rr"))
		ft_rr(sw);
	sw->p++;
	if (sw->p == 1)
		sw->in = "pb";
	else if (sw->p == 2)
		sw->in = "sa";
	else if (sw->p == 3)
		sw->in = "pb";
	else if (sw->p == 4)
		sw->in = "sa";
	else if (sw->p == 5)
		sw->in = "rr";
	if (sw->p <= 5)
		ft_algo(sw);
}

void	ft_pb(t_sw *sw)
{
	int	i;
	int	k;

	i = 0;
	sw->k++;
	k = sw->k;
//	sw->b = malloc(sizeof(sw->av) * (sw->k + 1));
	while (--k > 0)
		sw->b[k] = sw->b[k - 1];
	sw->b[0] = sw->av[1];
	while (sw->j > ++i)
		sw->av[i] = sw->av[i + 1];
	sw->av[sw->j - 1] = NULL;
	sw->j--;
}

void	ft_pa(t_sw *sw)
{
	int	i;
	
	i = -1;
	sw->av[1] = sw->b[0];
	while (sw->k > ++i)
		sw->b[i] = sw->b[i + 1];
	sw->b[sw->k - 1] = NULL;
	sw->k--;
	sw->j++;
}

void	ft_ss(t_sw *sw)
{
	char	*t;

	if ((!ft_strcmp(sw->in, "ss") || !ft_strcmp(sw->in, "sa")) && sw->j > 2)
	{
		t = sw->av[2];
		sw->av[2] = sw->av[1];
		sw->av[1] = t;
	}
	else if ((!ft_strcmp(sw->in, "ss") || !ft_strcmp(sw->in, "sb")) && sw->k > 1)
	{
		t = sw->b[0];
		sw->b[1] = sw->b[0];
		sw->b[0] = t;
	}
}
