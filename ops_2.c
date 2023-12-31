/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:00:57 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/06 16:14:10 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_list **a_list, t_list **b_list)
{
	ra_rb(a_list, 3);
	ra_rb(b_list, 3);
	write(1, "rr\n", 3);
}

void	rra_rrb(t_list **list, int i)
{
	t_list	*adr;
	t_list	*t1;
	t_list	*t2;

	if (*list)
	{
		adr = *list;
		t1 = *list;
		while (adr->next != NULL)
		{
			t2 = adr;
			adr = adr->next;
		}
		t2->next = NULL;
		adr->next = t1;
		*list = adr;
		if (i == 1)
			write(1, "rra\n", 4);
		else if (i == 2)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_list **a_list, t_list **b_list)
{
	rra_rrb(a_list, 3);
	rra_rrb(b_list, 3);
	write(1, "rrr\n", 4);
}
