/*
** check_map.c for check_map in /home/jaubere/Bureau/all/dante/profondeur
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Sun May 22 15:05:46 2016 jauber_e
** Last update Sun May 22 15:34:05 2016 jauber_e
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"my.h"

int		check_map(t_maze *maze)
{
  int		i;
  int		j;

  if (maze->map[0][0] != '*' || maze->map[maze->y_end][maze->x_end] != '*')
    {
      printf("No solution found.\n");
      return (1);
    }
  i = 0;
  while (maze->map[i] != NULL)
    {
      j = 0;
      while (maze->map[i][j] != 0)
	{
	  if (maze->map[i][j] != '*' && maze->map[i][j] != 'X' &&
	      maze->map[i][j] != '\n')
	    {
	      printf("Invalid maze.\n");
	      return (1);
	    }
	  j++;
	}
      i++;
    }
  return (0);
}
