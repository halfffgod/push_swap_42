/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:26:35 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/02 17:18:17 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sorting(int *igh, int l)
{
	int	i;

	i = 0;
	while (i < l - 1)
	{
		if (igh[i] > igh[i + 1])
			break ;
		i++;
	}
	if (i == l - 1)
		exit(0);
}

void	check_doubles(int *igh, int l)
{
	int	i;
	int	j;

	i = 0;
	while (i < l - 1)
	{
		j = i + 1;
		while (j < l)
		{
			if (igh[i] == igh[j])
				errors();
			j++;
		}
		i++;
	}
}