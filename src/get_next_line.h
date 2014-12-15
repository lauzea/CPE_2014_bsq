/*
** get_next_line.h for get_next_line in /home/lauze_a/rendu/CPE_2014_getnextline
**
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Fri Nov  7 13:44:04 2014 lauze_a lauze_a
** Last update Mon Dec 15 10:56:26 2014 lauze_a lauze_a
*/

#ifndef __GET_NEXT_LINE_H__
#define __GET_NEXT_LINE_H__

/*
** READ_MAX : nombre de carac retourner a chaque read.
*/

 #define READ_MAX 1024

/*
** Prototypes
*/

char	*get_next_line(const int fd);
char	*my_realloc(char *old, int size);
int	my_strlen(char *str);

#endif /*  __GET_NEXT_LINE_H__ */
