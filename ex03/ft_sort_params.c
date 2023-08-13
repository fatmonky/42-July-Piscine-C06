/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:58:05 by pteh              #+#    #+#             */
/*   Updated: 2023/08/13 13:57:40 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_params(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_print_args(int argc, char **argv)
{
	int	cursor;

	cursor = 1;
	while (cursor < argc)
	{
		ft_print_params(argv[cursor]);
		write(1, "\n", 1);
		cursor++;
	}
}

int	main(int argc, char **argv)
{
	int	cursor;
	int	comparator;

	if (argc > 2)
	{
		cursor = 1;
		comparator = 1;
		while (cursor < argc)
		{
			while (comparator < argc)
			{
				if (ft_strcmp(argv[cursor], argv[comparator]) > 0)
					ft_swap(&argv[cursor], &argv[comparator]);
				comparator++;
			}
			if (comparator == argc)
				comparator = 1;
			cursor++;
		}
	}
	ft_print_args(argc, argv);
	return (0);
}
