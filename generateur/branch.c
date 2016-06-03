/*
** branch.c for branch in /home/jaubere/Bureau/all/dante/generateur
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Wed May 18 20:00:13 2016 jauber_e
** Last update Sun May 22 21:46:46 2016 jauber_e
*/

#include	<stdlib.h>
#include	"my.h"

void		check_wall(t_maze *maze)
{
  if (maze->y != 0)
    if (maze->lab[maze->y][maze->x] == '*' &&
	maze->lab[maze->y][maze->x + 1] == 'X' &&
	maze->lab[maze->y - 1][maze->x] == 'X')
      {
	maze->lab[maze->y][maze->x] = '*';
	create_branch_right(maze);
	maze->y++;
      }
  if (maze->y != maze->longu - 1 && maze->x != 0)
    if (maze->lab[maze->y][maze->x] == '*' &&
	maze->lab[maze->y][maze->x - 1] == 'X' &&
	maze->lab[maze->y + 1][maze->x] == 'X')
      {
	maze->lab[maze->y][maze->x] = '*';
	create_branch_left(maze);
	maze->x++;
      }
}

int		make_branch(t_maze *maze)
{
  int		i;
  int		count = 0;

  maze->x = 0;
  maze->y = 0;
  while (maze->y != maze->longu - 1 || maze->x != maze->larg - 1)
    {
      i = rand() % 2;
      if (i == 0 && maze->x != maze->larg - 1 &&
	  maze->lab[maze->y][maze->x + 1] == '*')
	maze->x++;
      else if (i == 1 && maze->y != maze->longu - 1 &&
	       maze->lab[maze->y + 1][maze->x] == '*')
	maze->y++;
      check_wall(maze);
      count++;
      if (count > 5000)
	return (0);
    }
  return (0);
}

