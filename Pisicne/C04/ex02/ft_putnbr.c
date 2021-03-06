/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravily <mravily@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:57:56 by mravily            #+#    #+#             */
/*   Updated: 2019/10/09 22:57:56 by mravily           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void		ft_putnbr(int nb)
{
	int i;

	i = nb;
	if (i == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}

	if (i < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}

	if (i > 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}

	else
		ft_putchar(i + 48);
}
