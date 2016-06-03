/*
** init.c for init in /home/jaubere/Bureau/all/dante/profondeur
**
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
**
** Started on  Sat May 21 15:23:25 2016 jauber_e
** Last update Sat May 28 17:27:39 2016 jauber_e
*/

#include        <stdlib.h>
#include        "my.h"

int		init_data(t_maze *maze, int larg, int longu)
{
  maze->last_mv = 0;
  maze->x = 0;
  maze->y = 0;
  maze->x_end = larg - 1;
  maze->y_end = longu - 1;
  if ((maze->inter = malloc(sizeof(int *) * (larg * longu))) == NULL)
    return (1);
  return (0);
}

void		init_dir(t_maze *maze)
{
  maze->up = 0;
  maze->down = 0;
  maze->left = 0;
  maze->right = 0;
  if (maze->y == 0 || maze->map[maze->y - 1][maze->x] == '.')
    maze->up = 1;
  if (maze->y == maze->y_end || maze->map[maze->y + 1][maze->x] == '.')
    maze->down = 1;
  if (maze->x == 0 || maze->map[maze->y][maze->x - 1] == '.')
    maze->left = 1;
  if (maze->x == maze->x_end || maze->map[maze->y][maze->x + 1] == '.')
    maze->right = 1;
}
