/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_abs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravily <mravily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 09:00:01 by mravily           #+#    #+#             */
/*   Updated: 2020/01/03 15:56:08 by mravily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_i_abs(int p_value)
{
	if (p_value == 0)
		return (0);
	if (p_value < 0)
		p_value *= -1;
	return (p_value);
}
