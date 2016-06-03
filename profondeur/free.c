/*
** free.c for free in /home/jaubere/Bureau/all/dante/profondeur
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Thu May 19 17:06:30 2016 jauber_e
** Last update Sat May 21 15:09:39 2016 jauber_e
*/

#include	<stdlib.h>
#include	"my.h"

void		free_all(t_maze *maze)
{
  int		i;

  i = 0;
  while (maze->map[i])
    {
      free(maze->map[i]);
      i++;
    }
  free(maze->map);
  i = 0;
  while (i != maze->y_end)
    {
      free(maze->map_copy[i]);
      i++;
    }
  free(maze->map_copy);
  i = 0;
  while (maze->inter[i] != NULL)
    {
      free(maze->inter[i]);
      i++;
    }
  free(maze->inter);
}
