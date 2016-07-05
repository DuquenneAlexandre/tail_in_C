/*
** my_add_elem.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Fri Nov  7 08:05:06 2014 Pierre-Alexandre Duquenne
** Last update Fri Nov  7 08:11:41 2014 Pierre-Alexandre Duquenne
*/

#include	<stdlib.h>
#include	<string.h>
#include	"../include/tail.h"

void    add_elem(t_list *list, char *element)
{
  t_list *new;

  new = malloc(sizeof(t_list));
  new->str = strdup(element);
  new->next = NULL;
  while (list->next != NULL)
    {
      list = list->next;
    }
  list->next = new;
}
