/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_check_ideas.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 19:46:49 by bebosson          #+#    #+#             */
/*   Updated: 2018/12/11 18:34:42 by bebosson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "fillit.h"
#include "libft/libft.h"

int get_next_line(int fd, char **line);

/*t_tetra		set_tetra(int nbr)
{


}

int checksquare(t_tetra **tetras)
{

}
*/
void	print_tetras(t_tetra tetras)
{
	

}

int	read_square(int fd)
{
	t_tetra *tetras;
	char *line = NULL;
	int j;
	int i;
	if (!(tetras = (t_tetra*)malloc(sizeof(tetras))))
		return (0);
	
	j = 0;
	i = 0;
	tetras[j].l_content = 0;
	tetras[j].num = 0;
	if (!(tetras->content = (char**)malloc(sizeof(char *) * 100000)))
		return (0);
	if (!(tetras[j].content[i]  = (char*)malloc(sizeof(char) * 10000)))
		return (0);
	while ((get_next_line(fd, &line) > 0))
	{
		if (!(tetras[j].content[i]  = (char*)malloc(sizeof(char) * 10000)))
			return (0);
		tetras[j].content[i] = ft_strdup(line);
		printf("%s\n",tetras[j].content[i]);
		i++;
	}

	return (1);
}

int main(int ac, char **av)
{
	(void)ac;
	int fd;

	fd = open(av[1], O_RDONLY);
	read_square(fd);



}
