/*
** malloc_check.c for malloc check in /home/jaubere/Bureau/all/dante/génération
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Tue May 17 09:53:51 2016 jauber_e
** Last update Wed May 18 19:39:42 2016 jauber_e
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"my.h"

char		*my_malloc_check(int nb)
{
  int		i;
  char		*dest;

  i = 0;
  dest = my_malloc(nb + 1);
  while (i <= nb)
    {
      dest[i] = '1';
      i++;
    }
  dest[i] = 0;
  return (dest);
}

