/*
** get_next_line.c for  in /home/duquen_p/tail
** 
** Made by Pierre-Alexandre Duquenne
** Login   <duquen_p@epitech.net>
** 
** Started on  Thu Nov 13 07:34:32 2014 Pierre-Alexandre Duquenne
** Last update Thu Nov 13 07:35:51 2014 Pierre-Alexandre Duquenne
*/

#include	<stdlib.h>
#include	"../include/get_next_line.h"

static t_list           *add_in_list(t_list *list, char character)
{
  t_list                *new_element;
  t_list                *tmp;

  if ((new_element = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  new_element->character = character;
  new_element->next = NULL;
  if (list == NULL)
    return (new_element);
  tmp = list;
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = new_element;
  return (list);
}

static int              check_list(t_list *list)
{
  t_list                *tmp;

  tmp = list;
  while (tmp != NULL)
    {
      if (tmp->character == '\n' || tmp->character == '\0')
        return (1);
      tmp = tmp->next;
    }
  return (0);
}

static int              str_size(t_list *list)
{
  t_list                *tmp;
  int                   i;

  i = 0;
  tmp = list;
  while (tmp != NULL)
    {
      if (tmp->character == '\n' || tmp->character == '\0')
        return (i);
      tmp = tmp->next;
      i++;
    }
  return (i);
}

static char             *list_to_str(t_list **list)
{
  t_list                *ptr;
  char                  *str;
  int                   i;

  i = 0;
  if ((*list) == NULL)
    return (NULL);
  if ((str = malloc(sizeof(char) * (str_size(*list) + 1))) == NULL)
    return (NULL);
  while ((*list) != NULL && (*list)->character != '\n' && (*list)->character !=\
	 '\0')
    {
      ptr = (*list);
      str[i++] = (*list)->character;
      (*list) = (*list)->next;
      free(ptr);
    }
  str[i] = '\0';
  if ((*list) != NULL)
    {
      ptr = (*list);
      (*list) = (*list)->next;
      free(ptr);
    }
  return (str);
}

extern char             *get_next_line(const int fd)
{
  static t_list         *list;
  char                  buffer[BUFF_SIZE];
  int                   value;
  int                   i;

  i = 0;
  while (i < BUFF_SIZE)
    buffer[i++] = 0;
  if ((value = read(fd, buffer, BUFF_SIZE)) < 0)
    return (NULL);
  if (value == 0)
    return (list_to_str(&list));
  i = 0;
  while (i < value)
    if ((list = add_in_list(list, buffer[i++])) == NULL)
      return (NULL);
  if (check_list(list))
    return (list_to_str(&list));
  return (get_next_line(fd));
}
