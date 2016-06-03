/*
** print_map.c for print_map in /home/jaubere/Bureau/all/dante/generateur
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Wed May 18 19:09:20 2016 jauber_e
** Last update Wed May 18 19:15:08 2016 jauber_e
*/

#include	<stdio.h>
#include	<stdlib.h>

void		print_map(char **lab)
{
  int		i;

  i = 0;
  while (lab[i] != NULL)
    {
      printf("%s", lab[i]);
      i++;
    }
}
