/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:44:20 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/13 13:51:06 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef MYLIB_H
#define MYLIB_H
# include "unistd.h"
/*Ne pas oublier d'update les fichiers sources dans le CMakeList.txt */
void    ft_putchar(char c);
void    ft_putnbr(int nb);
int     ft_strlen(char *str);
void    ft_putstr(char *str);
void    ft_swap(int *a, int *b);

#endif //PROJECTS_MYLIB_H
