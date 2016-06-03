/*
** impasse.c for impasse in /home/jaubere/Bureau/all/dante/profondeur
**
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
**
** Started on  Sat May 21 15:39:16 2016 jauber_e
** Last update Sat May 28 17:42:05 2016 jauber_e
*/

#include        <stdlib.h>
#include        "my.h"

int		impasse(t_maze *maze)
{
  int		i;

  i = 0;
  while (maze->inter[i] != NULL)
    {
      if (maze->inter[i][0] == g_nb - 1)
	{
	  replace_cara(maze, i);
	  g_nb--;
	  maze->y = maze->inter[i][1];
	  maze->x = maze->inter[i][2];
	  return (0);
	}
      i++;
    }
  return (0);
}

void		check_if_impasse_next(t_maze *maze, int wall, int stop)
{
  if (maze->up == 0)
    {
      wall++;
      if (maze->map[maze->y - 1][maze->x] != '*')
	stop++;
    }
  if (maze->down == 0)
    {
      wall++;
      if (maze->map[maze->y + 1][maze->x] != '*')
	stop++;
    }
  if (stop == wall)
    impasse(maze);
}

void		check_if_impasse(t_maze *maze)
{
  int		stop;
  int		wall;

  stop = 0;
  wall = 0;
  if (maze->left == 0)
    {
      wall++;
      if (maze->map[maze->y][maze->x - 1] != '*')
	stop++;
    }
  if (maze->right == 0)
    {
      wall++;
      if (maze->map[maze->y][maze->x + 1] != '*')
	stop++;
    }
  check_if_impasse_next(maze, wall, stop);
}
