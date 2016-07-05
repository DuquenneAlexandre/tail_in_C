/*
** solo_tail.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov  6 08:07:16 2014 Pierre-Alexandre Duquenne
** Last update Fri Nov 21 09:13:52 2014 Pierre-Alexandre Duquenne
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"../include/tail.h"

void		solo_tail()
{
  t_list	*llist;
  char		*buffer;
  int		i;

  llist = NULL;
  i = 0;
  llist = create_list(llist, "Tail");
  while (42)
    {
      if ((buffer = get_next_line(0)) == NULL)
	{
	  display_list2(llist);
	  exit(0);
	}
      while (buffer[i])
	i++;
      add_elem(llist, buffer);
    }
}
