/*
** bsq.h for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by SiNlauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Mon Dec 15 10:18:46 2014 lauze_a lauze_a
** Last update Fri Jan  9 13:17:15 2015 lauze_a lauze_a
*/

#ifndef BSQ_H_
# define BSQ_H_

/*
** Defines
*/

#define BUF_SIZE 4096
#define ERROR_RD "[Error] : read failed.\n"
#define ERROR_ARG "[Usage] : ./bsq [file].\n"
#define ERROR_OP "[Error] : open failed.\n"

/*
** Prototypes
*/

int	main(int ac, char **av);
char	*parse_file(char *file);
char	*my_realloc(char *old, int size);
int	check_o(char **tab);

#endif /* !BSQ_H_ */
