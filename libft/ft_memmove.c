/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarose <alarose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:42:36 by alarose           #+#    #+#             */
/*   Updated: 2024/04/29 19:44:49 by alarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	size_t			i;

	i = 0;
	p_dst = (unsigned char *) dst;
	p_src = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
		while (len-- > 0)
			p_dst[len] = p_src[len];
	else
		while (i++ < len)
			p_dst[i - 1] = p_src[i - 1];
	return (dst);
}
