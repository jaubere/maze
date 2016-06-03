/*
** my.h for my in /home/jaubere/Bureau/all/dante/génération
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Tue May 17 10:01:33 2016 jauber_e
** Last update Wed May 18 20:36:48 2016 jauber_e
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_maze
{
  char		**lab;
  int		larg;
  int		longu;
  int		x;
  int		y;
  int		rd;
}		t_maze;

char		*my_malloc_check(int);
char		*my_malloc(int);
int		my_strcmp(char *, char *);
int		my_str_isnum(char *);
void		print_map(char **);
void		check_wall(t_maze *);
int		make_branch(t_maze *);
int		create_branch_right(t_maze *);
int		create_branch_left(t_maze *);
int		make_branch(t_maze *);
void		make_way(t_maze *, int);

#endif
