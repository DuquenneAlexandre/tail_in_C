/*
** aff_arrow.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov  6 09:40:43 2014 Pierre-Alexandre Duquenne
** Last update Thu Nov  6 12:11:52 2014 Pierre-Alexandre Duquenne
*/

#include	"../include/tail.h"

void		aff_arrow(char *str)
{
  my_putstr("==> ");
  my_putstr(str);
  my_putstr(" <==");
  my_putchar('\n');
}
