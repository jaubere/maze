/*
** get_one_line.c for g1l in /home/jaubere
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Sat Apr  2 15:57:36 2016 jauber_e
** Last update Fri May  6 17:44:49 2016 jauber_e
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"my_printf.h"

char		*gnl(char *buffer, char *save, int fd, int *tmp)
{
  int		i;
  int		rd;

  i = 0;
  while (buffer[0] != '\n')
    {
      if ((rd = read(fd, buffer, 1)) == -1)
	return (NULL);
      else if (rd == 0)
	{
	  save[i] = 0;
	  *tmp = 1;
	  free(buffer);
	  return (save);
	}
      save[i] = buffer[0];
      i++;
      save[i] = 0;
      save = my_realloc(save, i + 1);
    }
  save[i - 1] = 0;
  free(buffer);
  return (save);
}

char		*get_next_line(int fd)
{
  char		*buffer;
  char		*save;
  static int	tmp = 0;

  if (tmp == 1)
    return (NULL);
  buffer = my_malloc(2);
  save = my_malloc(3);
  save[0] = 0;
  buffer[0] = 0;
  return (gnl(buffer, save, fd, &tmp));
}
