/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravily <mravily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 00:21:33 by mravily           #+#    #+#             */
/*   Updated: 2019/10/10 00:21:33 by mravily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		
	}
}