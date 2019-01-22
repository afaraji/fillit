/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaraji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 22:47:24 by afaraji           #+#    #+#             */
/*   Updated: 2019/01/22 14:56:03 by afaraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 500

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		valid(char *file, char **tetriminos, int nb);
void	error(void);
int		tet_nb(char *file);
int		is_neiber(char *tet);
char	**split(char *file, int nb);
char	***ft_split(char **tetriminos, int nb);
void	ft_print_doubletable(char ***doubletable);
void	ft_print_table(char **tab);
void	get_cordinant(int *x, int *y, int n);
char	**ft_spliiiit(char *tetriminos, char c);
void	ft_free(char **map);
int		ft_solve(char ***tetris, int nb);
int		backtrack(char ***tet, char **map, int x, int y);
int		is_valid_put(char **tet, char **map, int x, int y);
void	put_tet(char **tet, char **map, int x, int y);

#endif
