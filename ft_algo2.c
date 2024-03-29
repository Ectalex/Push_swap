#include "push_swap.h"

void	ft_rr(t_sw *sw)
{
	int	i;
	char	*t;

	i = 0;
	if (!ft_strcmp(sw->in, "rr") || !ft_strcmp(sw->in, "ra"))
	{
		t = sw->av[1];
		while (sw->j > ++i)
			sw->av[i] = sw->av[i + 1];
		sw->av[sw->j - 1] = t;
	}
	i = -1;
	if (!ft_strcmp(sw->in, "rr") || !ft_strcmp(sw->in, "rb"))
	{
		t = sw->b[0];
		while (sw->k > ++i)
			sw->b[i] = sw->b[i + 1];
		sw->b[sw->k - 1] = t;
	}
	if (!ft_strcmp(sw->in, "ra"))
		write(1, "ra\n", 3);
	else if (!ft_strcmp(sw->in, "rb"))
		write(1, "rb\n", 3);
	else
		write(1, "rr\n", 3); 
}

void	ft_rrr(t_sw *sw)
{
	int	i;
	char	*t;

	i = sw->j + 1;
	if (!ft_strcmp(sw->in, "rrr") || !ft_strcmp(sw->in, "rra"))
	{
		t = sw->av[sw->j - 1];
		while (--i > 1)
			sw->av[i] = sw->av[i - 1];
		sw->av[1] = t;
	}
	i = sw->k;
	if (!ft_strcmp(sw->in, "rrr") || !ft_strcmp(sw->in, "rrb"))
	{
		t = sw->b[sw->k - 1];
		while (--i > 0)
			sw->b[i] = sw->b[i - 1];
		sw->b[i] = t;
	}
	if (!ft_strcmp(sw->in, "rra"))
		write(1, "rrb\n", 4);
	else if (!ft_strcmp(sw->in, "rrb"))
		write(1, "rrb\n", 4);
	else
		write(1, "rrr\n", 4);
}
