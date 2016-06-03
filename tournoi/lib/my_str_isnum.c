/*
** my_str_isnum.c for my_str_isnum in /home/jauber_e/rendu/exos_simples
**
** Made by Elise Jaubert
** Login   <jauber_e@epitech.net>
**
** Started on  Sat Oct 17 20:44:28 2015 Elise Jaubert
** Last update Wed Apr 13 14:24:14 2016 jauber_e
*/

int	my_str_isnum(char *str)
{
  int	i;
  int	neg;
  int	nb;

  i = 0;
  neg = 0;
  nb = 0;
  while (str[i] != 0)
    {
      if ('0' <= str[i] && str[i] <= '9')
	{
	  i++;
	  nb++;
	}
      else if (str[i] == '-' && neg == 0)
	{
	  i++;
	  neg++;
	}
      else
	return (0);
    }
  if (nb == 0)
    return (0);
  return (1);
}
