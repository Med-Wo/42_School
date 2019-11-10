/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 08:53:49 by marvin            #+#    #+#             */
/*   Updated: 2019/11/05 08:53:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_slen(const char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;
	int		len_s;

	i = 0;
	j = 0;
	len_s = (ft_slen(s1) + ft_slen(s2));
	join = NULL;
	if (!(join = (char *)malloc(sizeof(char) * len_s + 1)))
		return (NULL);
	while (i < len_s)
	{
		join[i] = s1[i];

		if (s1[i] == '\0')
		{
			while (s2[j])
			{
				join[i] = s2[j];
				i++;
				j++;
			}
		}
		i++;
	}
	join[i] = '\0';
	return (join);
}