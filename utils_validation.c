/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:11:24 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:33:08 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_compare(char *str_1, char *str_2)
{
	int	i;
	int	j;
	int	len;
	int	len2;
	int	aux;

	i = 0;
	j = 0;
	len = ft_strlen(str_1);
	len2 = ft_strlen(str_2);
	if (!str_2)
		return (0);
	if (len > len2)
		aux = len;
	else if (len < len2)
		aux = len2;
	else
		aux = len;
	while (str_1[i++] == str_2[j++])
	{
		if (i == aux)
			return (1);
	}
	return (0);
}
