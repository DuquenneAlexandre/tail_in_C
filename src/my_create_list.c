/*
** my_create_list.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Fri Nov  7 07:58:06 2014 Pierre-Alexandre Duquenne
** Last update Thu Nov 13 10:31:56 2014 Pierre-Alexandre Duquenne
*/

#include	<stdlib.h>
#include	<string.h>
#include	"../include/tail.h"

t_list		*create_list(t_list *list, char *str)
{
  list = malloc(sizeof(t_list));
  if (list != NULL)
    list->str = strdup(str);
  list->next = NULL;
  return (list);
}
