/*
** tail_main.c for  in /home/duquen_p/rendu/tail/src
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov  6 08:08:57 2014 Pierre-Alexandre Duquenne
** Last update Wed Nov 26 11:19:05 2014 Pierre-Alexandre Duquenne
*/

#include	<string.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<string.h>
#include	<stdio.h>
#include	"../include/tail.h"

int		main(int ac, char **av)
{
  t_list	*list;
  t_tail	tail;

  tail.v = 0;
  tail.z = 0;
  tail.a = 0;
  tail.tmp = NULL;
  list = NULL;
  list = create_list(list, av[0]);
  tail.i = ac;
  while (tail.i > 1)
    tail.i--;
  if (ac == 1)
    solo_tail();
  while (tail.i < ac)
    {
      if (strcmp(av[tail.i], "-f") == 0)
	tail.a = tail.i;
      tail.i++;
    }
  if (tail.a != 0)
    {
      tail.i = 1;
      while (tail.i < ac)
	{
	  if (tail.i != tail.a)
	    if (my_opentab(av[tail.i]) == 6)
	      tail.z = tail.i;
	  if (tail.i != tail.a && tail.i != tail.z)
	    add_elem(list, my_opentab(av[tail.i]));
	  tail.i++;
	}
      display_list(list);
      while (42)
	{
	  tail.i = 1;
	  tail.v = 0;
	  if (tail.a == 1)
	    tail.v = 1;
	  while (tail.i < ac)
	    {
	      if (tail.i > tail.a)
		tail.v = 1;
	      sleep(2);
	      if (tail.i != tail.a && tail.i != tail.z)
		{
		  if ((tail.tmp = my_opentab(av[tail.i])) != 6)
		    my_compare(list, tail.tmp, tail.i, tail.v, av[tail.i]);
		  else
		    tail.z = tail.i;
		}
	      tail.i++;
	    }
	}
    }
  else
    {
      tail.i = 1;
      while (tail.i < ac)
	{
	  if (ac > 2)
	    aff_arrow(av[tail.i]);
	  if (ac > 2)
	    my_putchar('\n');
	  my_open(av[tail.i]);
	  tail.i++;
	}
    }
  free(list);
  return (0);
}
