/*
** aff_tenlines.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov  6 08:01:31 2014 Pierre-Alexandre Duquenne
** Last update Thu Nov 13 06:41:22 2014 Pierre-Alexandre Duquenne
*/

#include	<stdio.h>
#include	"../include/tail.h"

void		aff_tenlines(char *buffer)
{
  int		i;
  int		ligne;
  int		nbligne;
  int		d;

  d = 10;
  ligne = 0;
  i = 0;
  ligne = nb_ligne(buffer);
  if (ligne < 10)
    printf("%s", buffer);
  else
    {
      nbligne = 0;
      while (buffer[i])
	{
	  if (buffer[i] != '\n' && buffer[i + 1] == '\0')
	    d = 9;
	  i++;
	}
      i = 0;
      while (buffer[i])
	{
	  if (buffer[i] == '\n')
	    nbligne++;
	  i++;
	  if (nbligne == (ligne - d))
	    {
	      while (buffer[i])
		{
		  my_putchar(buffer[i]);
		  i++;
		}
	    }
	}
    }
}
