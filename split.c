/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaraji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 14:08:17 by afaraji           #+#    #+#             */
/*   Updated: 2019/01/22 14:57:59 by afaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**split(char *file, int nb)
{
	char	**tetriminos;
	int		index;
	int		i;

	tetriminos = (char **)malloc(sizeof(*tetriminos) * (nb + 1));
	if (!tetriminos)
		return (NULL);
	i = 0;
	index = 0;
	tetriminos[index] = ft_strsub(file, 0, 20);
	while (file[i] && tetriminos[index])
	{
		if (file[i] == '\n' && file[i + 1] == '\n')
		{
			index++;
			tetriminos[index] = ft_strsub(file, i + 2, 20);
			i = i + 15;
		}
		i++;
	}
	tetriminos[index + 1] = NULL;
	return (tetriminos);
}

void	get_cordinant(int *x, int *y, int n)
{
	*y = n / 5;
	*x = n % 5;
}

int		is_neiber(char *tet)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (tet[i])
	{
		if (tet[i] == '#')
		{
			if (tet[i + 1] == '#')
				count++;
			if (tet[i + 5] == '#')
				count++;
		}
		i++;
	}
	return (count);
}
