/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmehay <cmehay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:28:25 by cmehay            #+#    #+#             */
/*   Updated: 2013/11/25 18:04:10 by cmehay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	char	*tmp;
	size_t	cnt;
	size_t	i;

	i = 1;
	tmp = (char*) s;
	cnt = (*tmp != c) ? 1 : 0;
	while (tmp[i] != 0)
	{
		if ((tmp[i] != c && tmp[i - 1] == c))
			cnt++;
		i++;
	}
	return (cnt);
}

static int		add_str(char *to, char const *from, char c)
{
	size_t	i;
	size_t	rtn;

	i = 0;
	while (from[i] == c || from[i] == 0)
		i++;
	if ((to = ft_strnew(i++)) == NULL)
		return (0);
	rtn = i;
	while (i-- > 0)
		to[i] = from[i];
	return (rtn);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**rtn;
	char	*tmp;
	size_t	i;

	if ((rtn = (char**) malloc(word_counter(s, c) * sizeof(char*))) == NULL)
		return (NULL);
	tmp = (char*) s;
	i = 1;
	if (*tmp != c)
		if ((i = add_str(*rtn++, tmp, c)) == 0)
			return (NULL);
	while (tmp[i] != 0)
	{
		if ((tmp[i] != c && tmp[i - 1] == c))
		{
			if ((i += add_str(*rtn++, tmp + i, c)) == 0)
				return (NULL);
		}
		else
			i++;
	}
	return (rtn);
}
