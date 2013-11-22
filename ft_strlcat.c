/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmehay <cmehay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:41:45 by cmehay            #+#    #+#             */
/*   Updated: 2013/11/22 17:42:18 by cmehay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	long long int	catsize;

	dst_len = ft_strlen(dst);
	catsize = (long long int) size - dst_len - 1;
	ft_strncat(dst, src, catsize * (catsize > 0));
	return (catsize);
}
