##
## Makefile for Makefile in /home/lauze_a/rendu/Piscine_C_J11/lib/my
## 
## Made by lauze_a lauze_a
## Login   <lauze_a@epitech.net>
## 
## Started on  Mon Oct 20 09:06:13 2014 lauze_a lauze_a
## Last update Mon Dec 15 10:38:06 2014 lauze_a lauze_a
##

SRC=		./lib/my/my_aff_alpha.c \
		./lib/my/my_aff_chiffre.c \
		./lib/my/my_aff_comb2.c \
		./lib/my/my_aff_comb.c \
		./lib/my/aim_adress.c \
		./lib/my/my_error.c \
		./lib/my/convert_base.c \
		./lib/my/convert_base_adress.c \
		./lib/my/my_putstr_unreadable.c \
		./lib/my/my_aff_revalpha.c \
		./lib/my/my_evil_str.c \
		./lib/my/my_put_nbr_unsigned.c \
		./lib/my/my_factorielle_it.c \
		./lib/my/my_factorielle_rec.c \
		./lib/my/my_find_prime_sup.c \
		./lib/my/my_getnbr.c \
		./lib/my/my_isneg.c \
		./lib/my/my_is_prime.c \
		./lib/my/my_power_it.c \
		./lib/my/my_power_rec.c \
		./lib/my/my_putchar.c \
		./lib/my/my_put_nbr.c \
	        ./lib/my/my_printf.c \
		./lib/my/my_putstr.c \
		./lib/my/my_revstr.c \
		./lib/my/my_showmen.c \
		./lib/my/my_showstr.c \
		./lib/my/my_sort_in_tab.c \
		./lib/my/my_square_root.c \
		./lib/my/my_strcat.c \
		./lib/my/my_strcmp.c \
		./lib/my/my_strcpy.c \
		./lib/my/my_str_isalpha.c \
		./lib/my/my_str_islower.c \
		./lib/my/my_str_isnum.c \
		./lib/my/my_str_isprintable.c \
		./lib/my/my_str_isupper.c \
		./lib/my/my_strlcat.c \
		./lib/my/my_strlen.c \
		./lib/my/my_strlowcase.c \
		./lib/my/my_strncat.c \
		./lib/my/my_strncmp.c \
		./lib/my/my_strncpy.c \
		./lib/my/my_strstr.c \
		./lib/my/my_strupcase.c \
		./lib/my/my_swap.c \
		./src/main.c \
		./src/parse.c

NAME=		bsq

NAME2= 		libmy.a

CC=		gcc

RM=		rm -f

LIB=	        -L ./lib

OBJ=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) -g3 $(SRC) $(LIB)
		ar rc libmy.a $(OBJ)
		ranlib libmy.a
		mv libmy.a ./lib

clean:
		rm -f $(OBJ)

fclean:		clean
		$(RM) $(NAME) ./lib/libmy.a

re:		fclean all
