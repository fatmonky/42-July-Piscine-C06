/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:58:05 by pteh              #+#    #+#             */
/*   Updated: 2023/08/12 17:10:03 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
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

void	ft_swap(char *s1, char *s2)
{
	char *temp;

	temp = s1;
	s1 = s2;
	s2 = temp;
}

int	main(int argc, char **argv)
{// talking to Nat, what I need is:
 // - inner if, to compare two strings x & y, and to swap if they are smaller.
 // - outer while loop to iterate y
 // - outer outer while loop to iterate x.
 // - comparison string should also be comparing char**. 
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i - 1], argv[i]) > 0)
		{
			ft_swap(argv[i - 1], argv[i]);
			ft_print_params(argv[i]);
		}
		ft_putchar('\n');
		i++;
	}
}