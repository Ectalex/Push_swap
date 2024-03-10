/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:43:52 by albriffa          #+#    #+#             */
/*   Updated: 2024/02/01 15:47:02 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_sw
{
	int	error;
	int	j;
	int	k;
	int	p;
	int	ac;
	char	*in;
	char	**av;
	char	**b;
}	t_sw;

void	ft_error(t_sw *sw);
void	ft_prog(t_sw *sw);
void	ft_algo(t_sw *sw);
void	ft_pa(t_sw *sw);
void	ft_pb(t_sw *sw);
void	ft_ss(t_sw *sw);
void	ft_rr(t_sw *sw);
void	ft_rrr(t_sw *sw);
int	ft_check(t_sw *sw);
int	ft_atoi(const char *str);
int	ft_strcmp(const char *s1, const char *s2);

#endif
