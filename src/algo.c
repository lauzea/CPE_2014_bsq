/*
** algo.c for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Tue Jan  6 15:06:55 2015 lauze_a lauze_a
** Last update Fri Jan  9 13:36:21 2015 lauze_a lauze_a
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

int	check_o(char **tab)
{
  int	i;
  int	j;
  int	pos;

  i = -1;
  j = -1;
  while (tab[++i][j] != '\0')
    {
      if (tab[i][j] == '\n')
	j++;
      if (tab[i][j] == 'o')
	my_strcmp(pos, tab[i][j]);

    }
}
