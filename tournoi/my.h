/*
** my.h for my in /home/jaubere/Bureau/all/dante/profondeur
**
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
**
** Started on  Thu May 19 13:15:39 2016 jauber_e
** Last update Sat May 28 18:03:40 2016 jauber_e
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_maze
{
  int		x;
  int		y;
  int		x_end;
  int		y_end;
  int		up;
  int		down;
  int		left;
  int		right;
  char		**map;
  int		**map_copy;
  int		**inter;
  char		last_mv;
}		t_maze;

int		g_nb;
void		print_possi(t_maze *struc);
void		move(t_maze *);
char		**my_realloc_double(char **, int);
char		**copy_lab(char **, int);
char		*my_strcat(char *, char *);
char		*my_malloc(int);
int		init_data(t_maze *, int, int);
void		init_dir(t_maze *);
int		my_strlen(char *);
int		my_tablen(char **);
void		free_all(t_maze *);
void		finish_map(t_maze *);
int		**copy_map(char **);
void		check_if_impasse(t_maze *);
int		check_if_inter(t_maze *);
int		check_map(t_maze *);
void		replace_cara(t_maze *, int);

#endif
