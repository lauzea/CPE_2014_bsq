/*
** algo.c for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Tue Jan  6 15:06:55 2015 lauze_a lauze_a
** Last update Fri Jan  9 11:37:07 2015 lauze_a lauze_a
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

int	away_from_line(char **tab, int i)
{
  int	j;

  j = -1;
  while (++j < 9)
    if (tab[i][j] == 'o')
      return (0);
  return (1);
}

int	away_from_column(char **tab, int j)
{
  int	i;

  i = -1;
  while (++i < 9)
    if (tab[i][j] == 'o')
      return (0);
  return (1);
}

int	is_ok(char **tab)
{
  int	i;
  int	j;

  i = -1;
  j = -1;
  while (tab[++i] == '.')
    {

    }
}
