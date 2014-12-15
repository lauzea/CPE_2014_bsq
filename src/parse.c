/*
** parse.c for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Mon Dec 15 10:26:11 2014 lauze_a lauze_a
** Last update Mon Dec 15 13:14:24 2014 lauze_a lauze_a
*/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include ".././include/my.h"
#include "bsq.h"

int	parse_file(char *file)
{
  int	rd;

   if ((rd = open(file, O_RDONLY)) == 0)
    return (my_error(ERROR_OP));
  get_next_line(rd);
  is_o(rd);
  return (rd);
}
