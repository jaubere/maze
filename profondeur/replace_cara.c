/*
** replace_cara.c for replace cara in /home/jaubere/Bureau/all/dante/profondeur
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Sat May 28 17:55:30 2016 jauber_e
** Last update Sat May 28 18:03:08 2016 jauber_e
*/

#include	<stdlib.h>
#include	"my.h"

void		replace_cara_next_else(t_maze *maze, int i, int *check)
{
  if (maze->right == 0 &&
      (maze->map[maze->y][maze->x + 1] == 'o' ||
       maze->map[maze->y][maze->x + 1] == '/' ||
       maze->map[maze->y][maze->x + 1] == maze->inter[i][0]))
    {
      maze->last_mv = 'r';
      maze->x++;
    }
  else if (maze->left == 0 &&
	   (maze->map[maze->y][maze->x - 1] == 'o' ||
	    maze->map[maze->y][maze->x - 1] == '/' ||
	    maze->map[maze->y][maze->x - 1] == maze->inter[i][0]))
    {
      maze->last_mv = 'l';
      maze->x--;
    }
  else
    *check = 0;
}

void		replace_cara_next(t_maze *maze, int i, int *check)
{
  if (maze->up == 0 &&
      (maze->map[maze->y - 1][maze->x] == 'o' ||
       maze->map[maze->y - 1][maze->x] == '/' ||
       maze->map[maze->y - 1][maze->x] == maze->inter[i][0]))
    {
      maze->last_mv = 'u';
      maze->y--;
    }
  else if (maze->down == 0 &&
	   (maze->map[maze->y + 1][maze->x] == 'o' ||
	    maze->map[maze->y + 1][maze->x] == '/' ||
	    maze->map[maze->y + 1][maze->x] == maze->inter[i][0]))
    {
      maze->last_mv = 'd';
      maze->y++;
    }
  else
    replace_cara_next_else(maze, i, check);
}

void		modif_mv(t_maze *maze)
{
  if (maze->last_mv == 'u' &&
      maze->map[maze->y + 1][maze->x] == 'o')
    maze->y++;
  else if (maze->last_mv == 'd' &&
	   maze->map[maze->y - 1][maze->x] == 'o')
    maze->y--;
  else if (maze->last_mv == 'r' &&
	   maze->map[maze->y][maze->x - 1] == 'o')
    maze->x--;
  else if (maze->last_mv == 'l' &&
	     maze->map[maze->y][maze->x + 1] == 'o')
    maze->x++;
  maze->last_mv = 0;
}

void		replace_cara(t_maze *maze, int i)
{
  int		check;

  while (!(maze->y == maze->inter[i][1] && maze->x == maze->inter[i][2]))
    {
      check = 0;
      init_dir(maze);
      maze->map[maze->y][maze->x] = '.';
      while (check == 0)
	{
	  check = 1;
	  if (maze->last_mv != 0)
	    modif_mv(maze);
	  else
	    replace_cara_next(maze, i, &check);
	}
      maze->map[maze->y][maze->x] = '/';
    }
}
