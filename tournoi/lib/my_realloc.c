/*
** my_realloc.c for my_realloc in /home/jaubere
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Sat Apr  2 16:03:56 2016 jauber_e
** Last update Thu May 19 17:09:14 2016 jauber_e
*/

#include	<stdlib.h>
#include	"my_printf.h"

char		*my_realloc(char *str, int x)
{
  char		*tmp;
  int		i;

  tmp = my_malloc(my_strlen(str) + x + 1);
  tmp[0] = 0;
  i = 0;
  while (i < my_strlen(str))
    {
      tmp[i] = str[i];
      i++;
    }
  tmp[i] = '\0';
  free(str);
  return (tmp);
}
