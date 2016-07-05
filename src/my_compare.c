/*
** my_compare.c for  in /home/duquen_p/tail
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Wed Nov 12 08:29:09 2014 Pierre-Alexandre Duquenne
** Last update Fri Nov 21 10:41:24 2014 Pierre-Alexandre Duquenne
*/

#include	<string.h>
#include	<stdlib.h>
#include	"../include/tail.h"

void		my_compare(t_list *list, char *str, int nb, int v, char *av)
{
  int           i;

  i = 0;
  while (list != NULL)
    {
      if (i == (nb - v))
        if (strcmp(str, list->str) != 0)
          {
            if (error_trunc(list->str, str) != 1)
	      {
		aff_arrow(av);
		my_showmore(list->str, str);
	      }
            strcpy(list->str, str);
          }
      list = list->next;
      i++;
    }
}
