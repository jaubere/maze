/*
** my_realloc_double.c for my_realloc in /home/jaubere/Bureau/all/dante/parcours_en_profondeur/lib
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Thu May 12 13:57:31 2016 jauber_e
** Last update Sun May 22 21:46:29 2016 jauber_e
*/

#include	<stdlib.h>

char		**my_realloc_double(char **str, int j)
{
  char		**newstr;
  int		i;

  i = 0;
  if ((newstr = malloc(sizeof(char *) * (j + 2))) == NULL)
    return (NULL);
  i = 0;
  while (str[i] != NULL)
    {
      newstr[i] = str[i];
      i++;
    }
  newstr[i] = NULL;
  free(str);
  return (newstr);
}
