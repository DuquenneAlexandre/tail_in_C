/*
** nb_ligne.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov  6 07:59:53 2014 Pierre-Alexandre Duquenne
** Last update Thu Nov  6 08:01:21 2014 Pierre-Alexandre Duquenne
*/

#include	"../include/tail.h"

int		nb_ligne(char *str)
{
  int		i;
  int		lignes;

  i = 0;
  lignes = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	lignes++;
      i++;
    }
  return (lignes);
}
