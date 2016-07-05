/*
** error_open.c for  in /home/duquen_p/tail
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Tue Nov 11 10:48:20 2014 Pierre-Alexandre Duquenne
** Last update Wed Nov 26 10:03:10 2014 Pierre-Alexandre Duquenne
*/

#include	<stdlib.h>
#include	<errno.h>
#include	<string.h>
#include	"../include/tail.h"

void		error_open(char *str)
{
  if (errno == EACCES)
    {
      my_putstr("tail: cannot read: ");
      my_putstr(str);
      my_putstr(": Permission denied\n");
    }
  else if (errno == ENOENT)
    {
      my_putstr("tail: cannot read: ");
      my_putstr(str);
      my_putstr(": No such file or directory\n");
    }
  else if (errno == EISDIR)
    {
      my_putstr("tail: read failed: ");
      my_putstr(str);
      my_putstr(": Is a directory\n");
    }
  else if (errno == ENAMETOOLONG)
    {
      my_putstr("tail:");
      my_putstr(str);
      my_putstr(": File name too long\n");
    }
}
