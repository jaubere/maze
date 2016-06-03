/*
** generation.c for generation in /home/jaubere/Bureau/all/dante/génération
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Fri May 13 11:02:50 2016 jauber_e
** Last update Sun May 22 23:19:30 2016 jauber_e
*/

#include	<time.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	"my.h"

int		gen(int larg, int longu, int parfait)
{
  t_maze	maze;
  int		i;
  int		j;

  maze.longu = longu;
  maze.larg = larg;
  if ((maze.lab = malloc(sizeof(char *) * (maze.longu + 1))) == NULL)
    return (1);
  i = 0;
  while (i != maze.longu)
    {
      j = 0;
      maze.lab[i] = my_malloc(maze.larg + 2);
      while (j != maze.larg)
	{
	  maze.lab[i][j] = 'X';
	  j++;
	}
      if (i != maze.longu - 1)
	maze.lab[i][j] = '\n';
      i++;
    }
  maze.lab[i] = NULL;
  make_way(&maze, parfait);
  return (0);
}

int		main(int ac, char **av)
{
  srand(time(NULL));
  if (ac == 3 || ac == 4)
    {
      if (my_str_isnum(av[1]) == 1 || my_str_isnum(av[2]) == 1)
	{
	  if (atoi(av[1]) == 0 || atoi(av[2]) == 0)
	    printf("error argument\n");
	  else
	    {
	      if (av[3] == NULL)
		gen(atoi(av[1]), atoi(av[2]), 0);
	      else if (my_strcmp(av[3], "parfait") == 0)
		gen(atoi(av[1]), atoi(av[2]), 1);
	      else
		printf("error argument\n");
	    }
	}
      else
	printf("write a numeric argument\n");
    }
  else
    printf("wrong number of argument\n");
  return (0);
}
