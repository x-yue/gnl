/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 14:21:28 by yuxu              #+#    #+#             */
/*   Updated: 2018/04/30 14:25:04 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	char *line;
	int rd;
	int fd;

	line = NULL;
	fd = open(av[1], O_RDONLY);
	while ((rd = get_next_line(fd, &line)) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return (0);
}
