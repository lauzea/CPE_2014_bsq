/*
** algo.c for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Tue Jan  6 15:06:55 2015 lauze_a lauze_a
** Last update Fri Jan  9 10:50:26 2015 lauze_a lauze_a
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

int	away_from_line(int k, char **tab, int i)
{
  int	j;

  j = -1;
  while (++j < 9)
    if (tab[i][j] == k)
      return (0);
  return (1);
}

int	away_from_column(int k, char **tab, int j)
{
  int	i;

  i = -1;
  while (++i < 9)
    if (tab[i][j] == k)
      return (0);
  return (1);
}

int	is_ok(char **tab, int pos)
{
  int	i;
  int	j;
  int	k;

  k = 0;
  i = pos / 9;
  j = pos % 9;
  if (pos == 10 * 10)
    return (1);
  if (tab[i][j] != 0)
    return (is_ok(tab, pos + 1));
  while (++k <= 10)
    {
      if (away_from_line(k, tab, i) && away_from_column(k, tab, j))
	tab[i][j] == k;
      if (is_ok(tab, pos + 1))
	return (0);
    }
  tab[i][j] = 0;
  return (0);
}
