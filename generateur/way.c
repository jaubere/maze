/*
** way.c for way in /home/jaubere/Bureau/all/dante/generateur
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Wed May 18 19:28:09 2016 jauber_e
** Last update Sun May 22 21:44:15 2016 jauber_e
*/

#include	<stdlib.h>
#include	"my.h"

void		init_way(t_maze *maze, int *way)
{
  *way = 0;
  maze->x = 0;
  maze->y = 0;
  maze->lab[0][0] = '*';
  maze->lab[maze->longu - 1][maze->larg - 1] = '*';
}

void		make_way(t_maze *maze, int parfait)
{
  int		way;

  init_way(maze, &way);
  while (maze->y != maze->longu - 1 || maze->x != maze->larg - 1)
    {
      if (way % 3 == 2)
	maze->rd = rand() % 4;
      else
	maze->rd = rand() % 2;
      if (maze->rd == 0 && maze->x != maze->larg - 1)
	maze->x++;
      else if (maze->rd == 1 && maze->y != maze->longu - 1)
	maze->y++;
      else if (maze->rd == 2 && maze->x != 0)
	maze->x--;
      else if (maze->rd == 3 && maze->y != 0)
	maze->y--;
      maze->lab[maze->y][maze->x] = '*';
      if (parfait == 0)
	way++;
    }
  make_branch(maze);
  print_map(maze->lab);
}
