/*
** move.c for move in /home/jaubere/Bureau/all/dante/profondeur
**
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
**
** Started on  Thu May 19 13:28:46 2016 jauber_e
** Last update Sat May 28 17:37:42 2016 jauber_e
*/

#include	<stdlib.h>
#include	"my.h"

void		normal_move(t_maze *maze, int *check)
{
  if (maze->right == 0 && maze->map[maze->y][maze->x + 1] == '*')
    {
      maze->last_mv = 'r';
      maze->x++;
    }
  else if (maze->down == 0 &&
	   maze->map[maze->y + 1][maze->x] == '*')
    {
      maze->last_mv = 'd';
      maze->y++;
    }
  else if (maze->left == 0 &&
	   maze->map[maze->y][maze->x - 1] == '*')
    {
      maze->last_mv = 'l';
      maze->x--;
    }
  else if (maze->up == 0 &&
	   maze->map[maze->y - 1][maze->x] == '*')
    {
      maze->last_mv = 'u';
      maze->y--;
    }
  else
    *check = 0;
}

void		move(t_maze *maze)
{
  int		check;

  check = 0;
  init_dir(maze);
  maze->map[maze->y][maze->x] = 'o';
  while (check == 0)
    {
      check = 1;
      check_if_impasse(maze);
      if (check_if_inter(maze) == 0)
	normal_move(maze, &check);
    }
}
