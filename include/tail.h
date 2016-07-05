/*
** tail.h for  in /home/duquen_p/rendu/tail
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Fri Oct 31 10:32:28 2014 Pierre-Alexandre Duquenne
** Last update Wed Nov 26 09:58:39 2014 Pierre-Alexandre Duquenne
*/

#ifndef	       _TAIL_H_
# define	_TAIL_H_

typedef struct s_list
{
  char	*str;
  struct s_list *next;
} t_list;

typedef struct s_tail
{
  char	*tmp;
  int	i;
  int	a;
  int	v;
  int	z;
} t_tail;

t_list		*create_list(t_list *list, char *str);
void		display_list(t_list *list);
void		display_list2(t_list *list);
void		add_elem(t_list *list, char *element);
void		my_putchar(char c);
void		my_putstr(char *str);
int		nb_ligne(char *str);
void		*my_open(char *str);
void		my_compare(t_list *list, char *str, int nb, int v, char *av);
char		*my_opentab(char *str);
void		aff_tenlines(char *str);
void		aff_arrow(char *str);
void		tailnoop(char *str);
void		error_open(char *str);
void		solo_tail();
void		my_showmore(char *s1, char *s2);
int		error_trunc(char *s1, char *s2);

#endif
