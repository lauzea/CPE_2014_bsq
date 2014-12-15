/*
** parse.c for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Mon Dec 15 10:26:11 2014 lauze_a lauze_a
** Last update Mon Dec 15 10:44:41 2014 lauze_a lauze_a
*/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include ".././include/my.h"
#include "bsq.h"

int	parse_file(char *file)
{
  char	*buf[BUFF_SIZE];
  int	rd;
  int	i;

  i = 0;
  if ((rd = open(file, O_RDONLY)) == 0)
    return (my_error(ERROR_OP));
  if ((read(rd, buf, BUFF_SIZE)) == 0)
    return (my_error(ERROR_RD));
}
