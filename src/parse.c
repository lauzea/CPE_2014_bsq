/*
** parse.c for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Mon Dec 15 10:26:11 2014 lauze_a lauze_a
** Last update Fri Jan  9 11:36:41 2015 lauze_a lauze_a
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "../include/my.h"
#include "bsq.h"

char	*parse_file(char *file)
{
  int	i;
  int	j;
  int	count;
  char	**tab;
  char	*coor;
  int	fd;
  int	rd;
  char	*buf[BUF_SIZE + 1];

  i = 0;
  j = 0;
  count = -1;
  if ((fd = open(file, O_RDONLY)) == -1)
    return (NULL);
  if ((rd = read(fd, buf, BUF_SIZE)) == -1)
    return (NULL);
  if ((tab = malloc(100 *sizeof (char *))) == NULL)
    return (NULL);
 while (++count != 100)
   if ((tab = malloc(100 * sizeof(*tab))) == NULL)
     return (NULL);
 while (tab[i] != NULL)
   tab[++i][++j] = buf[++i][++j];
 is_ok(tab);
}
