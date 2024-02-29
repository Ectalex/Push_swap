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
}
