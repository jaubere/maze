/*
** copy_map.c for copy_map in /home/jaubere/Bureau/all/dante/profondeur
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Sat May 21 13:41:35 2016 jauber_e
** Last update Sun May 22 15:35:47 2016 jauber_e
*/

#include	<stdlib.h>
#include	"my.h"

int		copy(char **map, int i, int j, int **cpy)
{
  if (map[i][j] == 'X')
    cpy[i][j] = 88;
  else if (map[i][j] == '*')
    cpy[i][j] = 42;
  if (map[i][j] == '\n')
    cpy[i][j] = 10;
  j++;
  return (j);
}

int		**copy_map(char **map)
{
  int		i;
  int		j;
  int		**cpy;

  if ((cpy = malloc(sizeof(int *) * my_tablen(map) + 1)) == NULL)
    return (NULL);
  i = 0;
  while (map[i] != 0)
    {
      j = 0;
      if ((cpy[i] = malloc(sizeof(int) * (my_strlen(map[i]) + 2))) == NULL)
	return (NULL);
      while (map[i][j] != 0)
	j = copy(map, i, j, cpy);
      i++;
    }
  map[i - 1][j] = 0;
  map[i] = NULL;
  return (cpy);
}
