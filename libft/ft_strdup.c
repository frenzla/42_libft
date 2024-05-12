/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarose <alarose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:13:28 by alarose           #+#    #+#             */
/*   Updated: 2024/05/02 12:04:08 by alarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*cpy;

	cpy = NULL;
	len = ft_strlen(s1);
	cpy = malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1, len + 1);
	cpy[len + 1] = 0;
	return (cpy);
}
