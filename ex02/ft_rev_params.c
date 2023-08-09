/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:54:00 by pteh              #+#    #+#             */
/*   Updated: 2023/08/09 10:56:25 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_params(char *params)
{
	while (*params)
	{
		ft_putchar(*params);
		params++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 0)
	{
		while (i > 0)
		{
			ft_print_params(argv[i]);
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
