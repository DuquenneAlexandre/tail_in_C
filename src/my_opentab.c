/*
** my_open.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov  6 08:04:18 2014 Pierre-Alexandre Duquenne
** Last update Wed Nov 26 11:13:02 2014 Pierre-Alexandre Duquenne
*/

#include	<fcntl.h>
#include	<stdlib.h>
#include	<string.h>
#include	<unistd.h>
#include	"../include/tail.h"

char            *my_opentab(char *str)
{
  int           fd;
  int           value;
  char          *buffer;
  char          *strr;
  char          *tmp;

  strr = malloc(sizeof(char) * 1);
  strr[0] = 0;
  fd = 0;
  fd = open(str, O_RDONLY);
  if (fd == -1)
    {
      error_open(str);
      return (6);
    }
  if ((buffer = malloc(sizeof(char*) * 40096)) == NULL)
    exit(0);
  while ((value = read(fd, buffer, 40096)) > 0)
    {
      buffer[value] = 0;
      tmp = malloc(sizeof(char) * strlen(strr) + value + 1);
      strcpy(tmp, strr);
      strcat(tmp, buffer);
      strr = strdup(tmp);
    }
  if (value == -1)
    {
      error_open(str);
      return (6);
    }
  close(fd);
  return (strr);
}

