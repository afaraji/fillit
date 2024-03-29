/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_in_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaraji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 15:42:38 by afaraji           #+#    #+#             */
/*   Updated: 2018/10/20 15:57:37 by afaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_len(const char *str, char c)
{
	unsigned int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
