/*
** main.c for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Mon Dec 15 10:17:47 2014 lauze_a lauze_a
** Last update Fri Jan  9 11:35:34 2015 lauze_a lauze_a
*/

#include <stdlib.h>
#include ".././include/my.h"
#include "bsq.h"

int	main(int ac, char **av)
{
  if (ac != 1)
    {
      parse_file(av[1]);
      return (EXIT_SUCCESS);
    }
  else
    return (my_error(ERROR_ARG));
}
