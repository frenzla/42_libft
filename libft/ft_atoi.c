/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarose <alarose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:12:11 by alarose           #+#    #+#             */
/*   Updated: 2024/05/02 11:43:16 by alarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		nbr;
	int		sign_counter;
	char	*s;

	s = (char *)str;
	nbr = 0;
	sign_counter = 0;
	while (*s && is_space(*s))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign_counter--;
		s++;
		if (*s == '+' || *s == '-')
			return (0);
	}
	while (*s && is_num(*s))
	{
		nbr = nbr * 10 + (*s - '0');
		s++;
	}
	if (sign_counter == -1)
		nbr = -nbr;
	return (nbr);
}
