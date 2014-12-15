/*
** convert_base_adress.c for convert_base_adress in /home/lauze_a/rendu/MUL_2013_rtv1
** 
** Made by lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Sun Feb 16 12:11:32 2014 lauze_a
** Last update Sun Feb 16 12:47:51 2014 lauze_a
*/

void	*convert_base_adress(int nb, char *base_arvl)
{
  unsigned long long nb1;

  nb1 = nb % my_strlen(base_arvl);
  nb = nb / my_strlen(base_arvl);
  if (nb > 0)
    convert_base(nb, base_arvl);
  my_putchar(base_arvl[nb1]);
}
