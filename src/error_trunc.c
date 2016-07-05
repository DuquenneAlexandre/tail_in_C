/*
** error_trunc.c for  in /home/duquen_p/tail
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov 13 07:22:49 2014 Pierre-Alexandre Duquenne
** Last update Fri Nov 21 10:44:45 2014 Pierre-Alexandre Duquenne
*/

#include	<string.h>
#include	<stdio.h>
#include	"../include/tail.h"

int             error_trunc(char *s1, char *s2)
{
  int           i;
  int           j;

  i = strlen(s1);
  j = strlen(s2);
  if (i > j)
    {
      printf("%s\n", "Error file truncated .");
      return (1);
    }
  else
    return (0);
}
