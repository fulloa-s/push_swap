/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_moves2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:06:17 by gneri             #+#    #+#             */
/*   Updated: 2021/05/20 08:41:28 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_pbmove(t_stack *stacks)
{
	ft_pb(stacks);
	ft_putstr("pb\n");
}

void	ft_pamove(t_stack *stacks)
{
	ft_pa(stacks);
	ft_putstr("pa\n");
}

void	ft_ramove(t_stack *stacks)
{
	ft_ra(stacks);
	ft_putstr("ra\n");
}

void	ft_rbmove(t_stack *stacks)
{
	ft_rb(stacks);
	ft_putstr("rb\n");
}

void	ft_rrmove(t_stack *stacks)
{
	ft_ra(stacks);
	ft_rb(stacks);
	ft_putstr("rr\n");
}
