/*
** my_error.c for my_error in /home/lauze_a/rendu/PSU_2014_my_printf/lib/my
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Thu Nov  6 10:46:52 2014 lauze_a lauze_a
** Last update Thu Nov  6 10:47:24 2014 lauze_a lauze_a
*/

int	my_error(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (-1);
}
