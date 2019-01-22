/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaraji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:40:40 by afaraji           #+#    #+#             */
/*   Updated: 2019/01/22 14:56:57 by afaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_table(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
	return ;
}

void	ft_print_doubletable(char ***doubletable)
{
	int i;

	i = 0;
	while (doubletable[i])
	{
		ft_print_table(doubletable[i]);
		i++;
	}
}
