/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmehay <cmehay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:25:44 by cmehay            #+#    #+#             */
/*   Updated: 2013/11/25 10:58:01 by cmehay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rtn;
	size_t	i;

	i = 0;
	if ((rtn = ft_strnew(strlen(s))) != NULL)
	{
		while (s[i] != 0)
		{
			rtn[i] = f(i, s[i]);
			i++;
		}
	}
	return (rtn);
}
