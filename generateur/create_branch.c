/*
** create_branch.c for create branche in /home/jaubere/Bureau/all/dante/generateur
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Wed May 18 20:15:46 2016 jauber_e
** Last update Sun May 22 21:43:51 2016 jauber_e
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"my.h"

void		right_loop(t_maze *maze, int *x, int *y)
{
  maze->rd = rand() % 2;
  if (maze->rd == 0 && *x != maze->larg - 2 &&
      maze->lab[*y - 1][*x + 1] == 'X' &&
      maze->lab[*y][*x + 2] == 'X' && maze->lab[*y + 1][*x + 1] == 'X')
    *x += 1;
  else if (maze->rd == 1 && *y > 1 &&
	   maze->lab[*y - 1][*x - 1] == 'X' &&
	   maze->lab[*y - 2][*x] == 'X' &&
	   maze->lab[*y - 1][*x + 1] == 'X')
    *y -= 1;
  maze->lab[*y][*x] = '*';
}

int		create_branch_right(t_maze *maze)
{
  int		x;
  int		y;
  int		x_end;
  int		y_end;
  int		count;

  count = 0;
  x = maze->x;
  y = maze->y;
  x_end = 0;
  y_end = maze->longu - 1;
  while (x_end < x)
    x_end = rand() % (maze->larg);
  while (y_end > y || y_end < 0)
    y_end = rand() % (maze->longu);
  while (y != y_end || x != x_end)
    {
      right_loop(maze, &x, &y);
      count++;
      if (count > maze->larg)
	return (0);
    }
  return (0);
}

void		left_loop(t_maze *maze, int *x, int *y)
{
  maze->rd = rand() % 2;
  if (maze->rd == 0 && *x > 1 && maze->lab[*y - 1][*x - 1] == 'X' &&
      maze->lab[*y][*x - 2] == 'X' && maze->lab[*y + 1][*x - 1] == 'X')
    *x -= 1;
  else if (maze->rd == 1 && *y != maze->longu - 2 &&
	   maze->lab[*y + 1][*x - 1] == 'X' &&
	   maze->lab[*y + 2][*x] == 'X' &&
	   maze->lab[*y + 1][*x + 1] == 'X')
    *y += 1;
  maze->lab[*y][*x] = '*';
}

int		create_branch_left(t_maze *maze)
{
  int		x;
  int		y;
  int		x_end;
  int		y_end;
  int		count;

  x = maze->x;
  y = maze->y;
  count = 0;
  x_end = 0;
  y_end = maze->longu - 1;
  while (x_end > x || x_end < 0)
    x_end = rand() % (maze->larg);
  while (y_end < y)
    y_end = rand() % (maze->longu);
  while (y != y_end || x != x_end)
    {
      left_loop(maze, &x, &y);
      count++;
      if (count > maze->longu)
	return (0);
    }
  return (0);
}
