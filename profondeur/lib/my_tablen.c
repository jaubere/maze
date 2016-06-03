/*
** my_tablen.c for my_tablen in /home/jaubere/Bureau/all/dante/profondeur
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Sat May 21 13:44:15 2016 jauber_e
** Last update Sat May 21 13:45:04 2016 jauber_e
*/

#include	<stdlib.h>

int		my_tablen(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    i++;
  return (i);
}
