/*
** my_realloc.c for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Tue Jan  6 16:25:04 2015 lauze_a lauze_a
** Last update Tue Jan  6 16:27:33 2015 lauze_a lauze_a
*/

#include <stdlib.h>
#include "../include/my.h"

char	*my_realloc(char *old, int size)
{
  int	i;
  int	*new;

  i = 0;
  if ((new = malloc(sizeof (*new) * (my_strlen(old) + size))) == NULL)
     return (NULL);
  while (old[i] != '\0')
    {
      new[i] = old[i];
      i++;
    }
  free(old);
  return (new);
}
