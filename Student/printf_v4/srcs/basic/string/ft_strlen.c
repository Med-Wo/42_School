/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravily <mravily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:01:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2019/12/19 19:58:48 by mravily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

size_t		ft_strlen(char *p_src)
{
	size_t		len;

	len = 0;
	if (p_src == NULL)
		return (0);
	while (p_src[len] != '\0')
		len++;
	return (len);
}
