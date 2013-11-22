/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmehay <cmehay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 07:17:18 by cmehay            #+#    #+#             */
/*   Updated: 2013/11/22 07:09:38 by cmehay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*trim;
	int		i;
	int		mul;
	int		rtn;

	trim = ft_strtrim(str);
	i = 0;
	mul = 1;
	rtn = 0;
	while (ft_isdigit(trim[i]))
		i++;
	while (i > 0)
	{
		rtn += (trim[i-- - 1] - 0x30) * mul;
		mul *= 10;
	}
	return (rtn);
}
