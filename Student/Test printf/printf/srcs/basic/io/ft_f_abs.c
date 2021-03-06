/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f_abs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravily <mravily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 15:51:51 by mravily           #+#    #+#             */
/*   Updated: 2020/01/03 15:51:54 by mravily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

float	ft_f_abs(float p_value)
{
	if (p_value == 0)
		return (0);
	if (p_value < 0)
		p_value *= -1;
	return (p_value);
}
