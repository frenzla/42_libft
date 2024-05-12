/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarose <alarose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:02:28 by alarose           #+#    #+#             */
/*   Updated: 2024/05/02 11:09:01 by alarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if ((size_t)(ft_strlen(s + start) + 1) < len)
		len = ft_strlen(s + start) + 1;
	cpy = malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		cpy[j++] = s[i++];
	cpy[j] = '\0';
	return (cpy);
}
