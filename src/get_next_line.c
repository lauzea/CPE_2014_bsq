/*
** get_next_line.c for get_next_line in /home/lauze_a/rendu/CPE_2014_get_next_line
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Mon Nov 17 10:14:39 2014 lauze_a lauze_a
** Last update Mon Dec 15 11:07:12 2014 lauze_a lauze_a
*/

#include <unistd.h>
#include <stdlib.h>
#include ".././include/my.h"
#include "get_next_line.h"

char            *my_realloc(char *old, int size)
{
  int           i;
  char          *new;

  i = 0;
  if ((new = malloc(sizeof(*new) * (my_strlen(old) + size))) == NULL)
    return (NULL);
  while (old[i] != '\0')
    {
      new[i] = old[i];
      i++;
    }
  free(old);
  return (new);
}

char            *get_next_line(const int fd)
{
  static int    rd;
  char          *buff;
  char          *buffer;
  int           i;
  int		j;

  i = -1;
  j = 0;
  if ((buff = malloc(READ_MAX * sizeof(char))) == NULL)
    return (NULL);
  if ((buffer = malloc(READ_MAX * sizeof(char))) == NULL)
    return (NULL);
  if ((rd = read(fd, buff, READ_MAX)) <= 0)
    return (NULL);
  while (buff[++i] != '\0')
    {
      if (buff[i] == '\n')
	{
	  my_realloc(buff, READ_MAX);
	  get_next_line(rd);
	}
	  buffer[j] = buff[i];
      j++;
    }
  return (buffer);
}
