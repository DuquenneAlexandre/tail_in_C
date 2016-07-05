/*
** my_putchar.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov  6 07:58:16 2014 Pierre-Alexandre Duquenne
** Last update Thu Nov  6 08:18:27 2014 Pierre-Alexandre Duquenne
*/

#include	<unistd.h>
#include	"../include/tail.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}
