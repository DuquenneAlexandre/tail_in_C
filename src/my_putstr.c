/*
** my_putstr.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov  6 07:58:53 2014 Pierre-Alexandre Duquenne
** Last update Thu Nov  6 07:59:39 2014 Pierre-Alexandre Duquenne
*/

#include	"../include/tail.h"

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}
