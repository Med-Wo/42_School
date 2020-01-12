/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravily <mravily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 11:36:52 by mravily           #+#    #+#             */
/*   Updated: 2019/12/16 15:50:58 by mravily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main(void)
{
	puts("============================================");
	puts("================= MIX TEST =================");
	puts("============================================");
	puts("================== TEST 1 ==================");
	printf("-- %d --|\n", printf("|%0X%17.*d LVcGOj2a0d86O|", -2147483647, 2, -1998094786));
	//                            0123456789 ----- 14 -----
	ft_printf("-- %d --|\n", ft_printf("|%0X%17.*d LVcGOj2a0d86O|", -2147483647, 2, -1998094786));
	puts("================== TEST 2 ==================");
	printf("-- %d --|\n", printf("|%-*c|", -10, 'o'));
	//                            012345
	ft_printf("-- %d --|\n", ft_printf("|%-*c|", -10, 'o'));
	puts("================== TEST 3 ==================");
	printf("-- %d --|\n", printf("|%-*.0d%-*c|", -1, 2147483647, -10, 'o'));
	ft_printf("-- %d --|\n", ft_printf("|%-*.0d%-*c|", -1, 2147483647, -10, 'o'));
	//                                 	012345678911
	puts("================== TEST 4 ==================");
	printf("-- %d --|\n", printf("|%19.1XfA7k3%-.4Xf1CEDYDl|", 2064202123, 0));
	ft_printf("-- %d --|\n", ft_printf("|%19.1XfA7k3%-.4Xf1CEDYDl|", 2064202123, 0));
	//                                  0123456789
	puts("================== TEST 5 ==================");
	printf("-- %d --|\n", printf("|3F%-cH%%h3axY0|", 'S'));
	ft_printf("-- %d --|\n", ft_printf("|3F%-cH%%h3axY0|", 'S'));
	//                                  0123456789
	puts("================== TEST 6 ==================");
	printf("-- %d --|\n", printf("|%-19x|", 0));
	ft_printf("-- %d --|\n", ft_printf("|%-19x|", 0));
	//                                0123456
	puts("================== TEST 7 ==================");
	printf("-- %d --|\n", printf("|%-9.3dVV1r|", 2147483647, -1686420950, 44908464));
	ft_printf("-- %d --|\n", ft_printf("|%-9.3dVV1r|", 2147483647, -1686420950, 44908464));
	//                                0123456
	return (0);
}