/*
** my_str_isnum.c for my_str_isnum in /home/jauber_e/rendu/exos_simples
**
** Made by Elise Jaubert
** Login   <jauber_e@epitech.net>
**
** Started on  Sat Oct 17 20:44:28 2015 Elise Jaubert
** Last update Tue May 17 15:39:23 2016 jauber_e
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if ('0' <= str[i] && str[i] <= '9')
	i++;
      else
	return (0);
    }
  return (1);
}
