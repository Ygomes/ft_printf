/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygomes-d <ygomes-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:36:47 by ygomes-d          #+#    #+#             */
/*   Updated: 2021/10/26 10:15:41 by ygomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

# define HEXALOW "0123456789abcdef"
# define HEXAUP "0123456789ABCDEF"

typedef struct s_flags
{
	va_list args;
	int wdt;
	int zero;
	int dot;
	int dash;
	int sign;
	int space;
	int hash;
}	t_flags;

int	ft_printf(const char *str, ...);
t_flags *init_flags(t_flags  *flags);
int check_flags(const char *str, int i);
static unsigned int	get_nbrlen(unsigned int n);
void print_c(int chr, t_flags *flags);
void print_s(char *str, int i, t_flags *flag, int newfl);
void print_di(int nbr,int i, t_flags *flag, int newfl);
void	ft_putunbr_fd(unsigned int n, int fd);
void print_u(unsigned int i, t_flags *flags);
void print_hexa (unsigned int i);
void print_hexap(unsigned int i);
void print_p(unsigned long i, t_flags *flags);
void print_x(unsigned int i, t_flags *flags);
void print_hexaup(unsigned int i);
void print_xup(unsigned int i, t_flags *flags);
int print_char(t_flags *flag , const char *str, int i, int fl, int newfl);
void treat_dash(t_flags *flag ,int count, int len);

#endif
