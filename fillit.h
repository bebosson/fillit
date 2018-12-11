/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 14:19:08 by bebosson          #+#    #+#             */
/*   Updated: 2018/12/11 15:43:23 by bebosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 20
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

typedef struct	s_tetra
{
	char			correct;
	char			**content;
	size_t			num;
	size_t			c_content;
	size_t			l_content;
}				t_tetra;

#endif
