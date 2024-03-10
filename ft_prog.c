#include "push_swap.h"

void	ft_prog(t_sw *sw)
{
	if (ft_check(sw) == 0)
	{
		ft_algo(sw);	
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
