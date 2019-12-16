/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravily <mravily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:43:47 by mravily           #+#    #+#             */
/*   Updated: 2019/12/16 14:55:48 by mravily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

/* ********************** TEST *********************** */
# define PRINTPOS printf("%s line %d\n", __func__, __LINE__)
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <limits.h>
# define PRINT_I printf("i = %zu\n", *i)
# define PRINT_IW printf("i_w = %zu\n", *i)
# define PRINT_CIW printf("ci_w = %c\n", format[*i])
# define PRINT_0 printf("len_zero = %d\n", t_box->len_zero)
# define PRINT_P printf("len_precis = %d\n", t_box->len_zero)
# define PRINT_FIELD printf("len_field = %d\n", t_box->len_field_width)
# define PRINT_PREC	printf("len_prec = %d\n", t_box->len_precis)
# define LEN_ARG printf("len_arg = %d\n", len_arg)
# define LEN_PREC printf("len_prec = %d\n", len_precis)
# define LEN_ATX printf("len_astx = %d\n", len_asterix)
# define LEN_PAD printf("len_padding = %d\n", len_padding)
# define LEN_PRINT printf("len_print = %d\n", len_to_print)

/* ************************************************** */

# define LEFT 0
# define RIGHT 1
# define TRUE 1
# define FALSE 0

typedef struct	s_box
{
	int		cmpt_char;
	int		pad_dir;
	int		f_space;
	int		f_zero;
	int		f_precis;
	int		f_asterix;
	int		f_field_width;
	int		len_space;
	int		len_zero;
	int		len_precis;
	int		len_asterix;
	int		len_field_width;
	int		c_digit;
	int		lenght_modif;

	int		flag;
	int		empty_str;
	int		arg_neg;
	int		sign_convert;
}				t_tool_box;

typedef union			u_box
{
	long long int			ll_int;
	unsigned long long int	u_ll_int;
}						t_data;

enum			e_box
{
	HH = sizeof(char),
	H = sizeof(short int),
	L = sizeof(long int),
	LL = sizeof(long long int)
};

int			ft_printf(const char *format, ...);
int			ft_isdigit(int c);
int			ft_atoi_index(const char *str);
void		ft_int_len(int nb, size_t *i);
void		ft_print_arg(t_tool_box *t_box, char *arg);
char		*ft_printchar(int c);
char		*ft_printstr(char *str, t_tool_box *t_box);
char		*ft_itoa(t_data *data, t_tool_box *t_box);
char		*ft_convert_value_to_base(t_data *data, char *base, t_tool_box *t_box);
void		ft_print_arg_addr(t_tool_box *t_box, char *arg);
char		*ft_print_addr(void *ptr, char *base);
void		ft_resize_arg_1(t_data *data, va_list *ap, t_tool_box *t_box);
size_t		ft_strlen(char *str);
void		ft_reset_flags(t_tool_box *t_box);
void		ft_padding(t_tool_box *t_box, int len_arg);

#endif