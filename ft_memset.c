/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmehay <cmehay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:31:44 by cmehay            #+#    #+#             */
/*   Updated: 2013/11/19 19:34:14 by cmehay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = b;
	while (i < len)
	{
		tmp[i++] = (unsigned char) c;
	}
	return (b);
}
