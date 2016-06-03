/*
** print_map.c for print_map in /home/jaubere/Bureau/all/dante/profondeur
**
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
**
** Started on  Thu May 19 17:21:39 2016 jauber_e
** Last update Sat May 28 17:31:25 2016 jauber_e
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"my.h"

void		print_map(t_maze *maze)
{
  int		i;

  i = 0;
  while (maze->map[i] != 0)
    {
      printf("%s", maze->map[i]);
      i++;
    }
  if (maze->map[maze->y_end][maze->x_end + 1] != '\n')
    printf("\n");
}

void		finish_map(t_maze *maze)
{
  int		i;
  int		j;

  i = 0;
  while (maze->map[i] != NULL)
    {
      j = 0;
      while (maze->map[i][j] != 0)
	{
	  if (maze->map[i][j] == '.')
	    maze->map[i][j] = '*';
	  else if (maze->map[i][j] == '/')
	    maze->map[i][j] = 'o';
	  j++;
	}
      i++;
    }
  print_map(maze);
}
