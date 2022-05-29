/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:05:07 by gneri             #+#    #+#             */
/*   Updated: 2021/05/20 08:40:51 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_lastcheck(t_stack *stacks)
{
	int		num;
	t_num	*head_a;
	t_num	*head_b;

	head_a = stacks->stack_a;
	head_b = stacks->stack_b;
	stacks->head = 0;
	if (head_b)
	{
		write(1, "KO\n", 3);
		return ;
	}
	while (head_a->next)
	{
		num = head_a->number;
		if (num > head_a->next->number)
		{
			write(1, "KO\n", 3);
			return ;
		}
		head_a = head_a->next;
	}
	write(1, "OK\n", 3);
}
