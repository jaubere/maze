/*
** main.c for main in /home/jaubere/Bureau/all/dante/profondeur
**
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
**
** Started on  Sat May 21 15:12:27 2016 jauber_e
** Last update Sat May 28 17:25:52 2016 jauber_e
*/

#include        <stdio.h>
#include        <unistd.h>
#include        <stdlib.h>
#include        <time.h>
#include        "my.h"
#include        "lib/my_printf.h"

int		create_map(t_maze *maze, int *larg, int *longu, char *file)
{
  FILE		*fp;
  size_t	tmp = 0;
  ssize_t	len;

  if ((fp = fopen(file, "r")) == NULL)
    return (1);
  if ((maze->map = malloc(sizeof(char *) * 2)) == NULL)
    return (1);
  maze->map[0] = NULL;
  *larg = 0;
  while ((len = getline(&maze->map[*longu], &tmp, fp)) != -1)
    {
      *larg = len;
      *longu += 1;
      maze->map[*longu] = NULL;
      maze->map = my_realloc_double(maze->map, *longu);
    }
  if (*larg == 0)
    return (1);
  if (maze->map[*longu - 1][*larg - 1] == '\n')
    *larg -= 1;
  maze->map[*longu] = NULL;
  return (0);
}

int		main(int ac, char **av)
{
  t_maze	maze;
  int		longu;
  int		larg;

  srand(time(NULL));
  if (ac == 2)
    {
      longu = 0;
      if (create_map(&maze, &larg, &longu, av[1]) == 1)
	return (1);
      init_data(&maze, larg, longu);
      if (check_map(&maze) == 1)
	return (1);
      maze.map_copy = copy_map(maze.map);
      while (!(maze.x == maze.x_end && maze.y == maze.y_end))
	move(&maze);
      maze.map[maze.y_end][maze.x_end] = 'o';
      finish_map(&maze);
      free_all(&maze);
    }
  else
    printf("File missing.\n");
  return (0);
}
