/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albriffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:09:47 by albriffa          #+#    #+#             */
/*   Updated: 2023/10/24 14:10:52 by albriffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long		nb;
	int			i;
	int			j;
	char		*str;

	nb = n;
	i = ft_count(n);
	j = 0;
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
		j++;
	}
	str[i] = '\0';
	while (i > j)
	{
		i--;
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
/*
int	main()
{
	char	*str = ft_itoa(-2147483648);
	printf("%s", str);
	free(str);
}*/
