/*
** bsq.h for bsq in /home/lauze_a/rendu/CPE_2014_bsq/src
**
** Made by SiNlauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Mon Dec 15 10:18:46 2014 lauze_a lauze_a
** Last update Mon Dec 15 11:41:12 2014 lauze_a lauze_a
*/

#ifndef BSQ_H_
# define BSQ_H_

/*
** Defines
*/

#define BUFF_SIZE 1024
#define ERROR_RD "[Error] : read failed.\n"
#define ERROR_ARG "[Usage] : ./bsq [file].\n"
#define ERROR_OP "[Error] : open failed.\n"

/*
** Prototypes
*/

int	main(int ac, char **av);
int	parse_file(char *file);
int	is_o(char *buf);

#endif /* !BSQ_H_ */
