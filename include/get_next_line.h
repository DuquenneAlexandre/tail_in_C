/*
** get_next_line.h for  in /home/duquen_p/tail/include
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov 13 07:36:06 2014 Pierre-Alexandre Duquenne
** Last update Thu Nov 13 10:31:05 2014 Pierre-Alexandre Duquenne
*/

#ifndef	_GET_NEXT_LINE_H_
# define _GET_NEXT_LINE_H_

#define BUFF_SIZE       4096
#include <sys/types.h>
#include <unistd.h>

typedef struct  v_list t_list;

struct v_list
{
  char  character;
  t_list        *next;
};

char    *get_next_line(const int);

#endif
