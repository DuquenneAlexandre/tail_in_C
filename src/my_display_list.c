/*
** my_display_list.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Fri Nov  7 08:01:37 2014 Pierre-Alexandre Duquenne
** Last update Thu Nov 13 11:48:51 2014 Pierre-Alexandre Duquenne
*/

#include	<stdlib.h>
#include	<stdio.h>
#include	"../include/tail.h"

void		display_list(t_list *list)
{
  list = list->next;
  while (list != NULL)
    {
      aff_tenlines(list->str);
      list = list->next;
    }
}

void		display_list2(t_list *list)
{
  list = list->next;
  while (list != NULL)
    {
      printf("%s\n", list->str);
      list = list->next;
    }
}
