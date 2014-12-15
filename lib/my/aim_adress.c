/*
** aim_adress.c for aim_adress in /home/lauze_a/rendu/MUL_2013_rtv1
**
** Made by lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Sun Feb 16 12:04:38 2014 lauze_a
** Last update Sun Feb 16 12:04:40 2014 lauze_a
*/


void	*aim_adress(int *nb)
{
  if (nb == 0)
    my_putstr("(nil)");
  else
    {
      my_putstr("0x");
      convert_base_adress(nb, "0123456789abcdef");
    }
}
