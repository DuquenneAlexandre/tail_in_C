/*
** my_showmore.c for  in /home/duquen_p/rendu_02/tail
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Fri Nov 21 10:33:27 2014 Pierre-Alexandre Duquenne
** Last update Fri Nov 21 10:33:37 2014 Pierre-Alexandre Duquenne
*/

#include        "../include/tail.h"

void            my_showmore(char *s1, char *s2)
{
  int           i;

  i = 0;
  while (s2[i])
    {
      if (s1[i] - s2[i] == 0)
        i++;
      if (s1[i] - s2[i] != 0)
        while (s2[i])
          {
            my_putchar(s2[i]);
            i++;
          }
    }
}
