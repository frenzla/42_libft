/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarose <alarose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:41:42 by alarose           #+#    #+#             */
/*   Updated: 2024/05/04 15:00:54 by alarose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char a, char c)
{
	if (a == c)
		return (1);
	else
		return (0);
}

static int	count_elem(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (!(is_sep(s[i], c)) && ((is_sep(s[i + 1], c)) || s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

static int	get_len(char const *s, char c)
{
	size_t	word_len;

	if (!ft_strchr(s, c))
		word_len = ft_strlen(s);
	else
		word_len = ft_strchr(s, c) - s;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	if (!s)
		return (NULL);
	lst = malloc((count_elem(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = get_len(s, c);
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
