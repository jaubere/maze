/*
** intersection.c for intersection in /home/jaubere/Bureau/all/dante/profondeur
**
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
**
** Started on  Sat May 21 15:34:44 2016 jauber_e
** Last update Sat May 28 17:39:43 2016 jauber_e
*/

#include        <stdlib.h>
#include        "my.h"

int		g_nb = 89;

void		change_mv(t_maze *maze)
{
  if (maze->right == 0 && maze->map[maze->y][maze->x + 1] == '*')
    {
      maze->last_mv = 'r';
      maze->x++;
    }
  else if (maze->down == 0 && maze->map[maze->y + 1][maze->x] == '*')
    {
      maze->last_mv = 'd';
      maze->y++;
    }
  else if (maze->up == 0 && maze->map[maze->y - 1][maze->x] == '*')
    {
      maze->last_mv = 'u';
      maze->y--;
    }
  else if (maze->left == 0 && maze->map[maze->y][maze->x - 1] == '*')
    {
      maze->last_mv = 'l';
      maze->x--;
    }
}

int		intersection(t_maze *maze)
{
  if ((maze->inter[g_nb - 89] = malloc(sizeof(int) * 4)) == NULL)
    return (1);
  maze->inter[g_nb - 89][0] = g_nb;
  maze->inter[g_nb - 89][1] = maze->y;
  maze->inter[g_nb - 89][2] = maze->x;
  maze->map_copy[maze->y][maze->x] = g_nb;
  g_nb++;
  maze->inter[g_nb - 89] = NULL;
  change_mv(maze);
  return (0);
}

int		check_if_inter(t_maze *maze)
{
  int		stars;

  init_dir(maze);
  stars = 0;
  if (maze->left == 0)
    if (maze->map[maze->y][maze->x - 1] == '*')
      stars++;
  if (maze->right == 0)
    if (maze->map[maze->y][maze->x + 1] == '*')
      stars++;
  if (maze->up == 0)
    if (maze->map[maze->y - 1][maze->x] == '*')
      stars++;
  if (maze->down == 0)
    if (maze->map[maze->y + 1][maze->x] == '*')
      stars++;
  if (stars > 1)
    {
      intersection(maze);
      return (1);
    }
  return (0);
}
