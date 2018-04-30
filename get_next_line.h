/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl2.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:07:28 by yuxu              #+#    #+#             */
/*   Updated: 2018/04/27 16:50:33 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GET_NEXT_LINE_H
# define __GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include "libft/libft.h"

# define BUFF_SIZE 100

char	*joinfree(char *s1, char *s2, int rd);
int		ft_read_line(int fd, char **line);
int		get_next_line(int const fd, char **line);

#endif
