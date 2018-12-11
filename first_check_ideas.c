/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_check_ideas.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebosson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 19:46:49 by bebosson          #+#    #+#             */
/*   Updated: 2018/12/11 19:17:18 by bebosson         ###   ########.fr       */
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
//1e erreur : 5 ligne et premiere collone  != '\n'
//2e erreur : size(ligne) != 4 
int	init_tetras(int fd)
{
	char *line = NULL;
	int j;
	int i;
	t_tetra *tetras;
	
	printf("toto\n");
	if (!(tetras = (t_tetra*)malloc(sizeof(tetras))))
		return (0);
	j = 0;
	i = 0;
	if (!(tetras->content = (char**)malloc(sizeof(char *) * 100000)))
		return (0);
	if (!(tetras[j].content[i]  = (char*)malloc(sizeof(char) * 10000)))
		return (0);

	printf("toto");
	while ((get_next_line(fd, &line) > 0))
	{
			if (!(tetras[j].content[i]  = (char*)malloc(sizeof(char) * 10000)))
				return (0);
			tetras[j].content[i] = ft_strdup(line);
			free(line);
			printf("%s\n",tetras[j].content[i]);
	}
	return (1);//return (tetras);
}

int main(int ac, char **av)
{
	(void)ac;
	int fd;
	fd = open(av[1], O_RDONLY);


	printf("toto\n");
	init_tetras(fd);
	/*tetras = init_tetras(fd, tetras);
	while (++j < 4)
		printf("%s\n",tetras[j].content[i]);
*/


}
