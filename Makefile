# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekelen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 18:23:23 by ekelen            #+#    #+#              #
#    Updated: 2017/01/12 12:45:08 by ekelen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC= gcc

FLAG += -Wall -Wextra -Werror

SRC = 

# **************************************************************************** #
# PART I - MEMORY                                                              #
# **************************************************************************** #
SRC += ft_memset.c
SRC += ft_bzero.c
SRC += ft_memcpy.c
SRC += ft_memccpy.c
SRC += ft_memmove.c
SRC += ft_memchr.c
SRC += ft_memcmp.c

# **************************************************************************** #
# PART I - STRINGS                                                             #
# **************************************************************************** #
SRC += ft_strlen.c
SRC += ft_strdup.c
SRC += ft_strcpy.c
SRC += ft_strncpy.c
SRC += ft_strcat.c
SRC += ft_strncat.c
SRC += ft_strlcat.c
SRC += ft_strchr.c
SRC += ft_strrchr.c
SRC += ft_atoi.c
SRC += ft_strcmp.c
SRC += ft_strncmp.c
SRC += ft_strstr.c
SRC += ft_strnstr.c
SRC += ft_tolower.c
SRC += ft_toupper.c
SRC += ft_isdigit.c
SRC += ft_isalnum.c
SRC += ft_isalpha.c
SRC += ft_isascii.c
SRC += ft_isprint.c


# **************************************************************************** #
# PART II                                                                      #
# **************************************************************************** #
SRC += ft_memalloc.c
	# mallocs fresh memory area, initialized to 0. if fails, returns null. takes size of mem to be allocated. 
	# returns allocated memory area.
SRC += ft_memdel.c
	# frees memory area, then sets ptr to that area to NULL. returns void.
SRC += ft_strnew.c
	# mallocs fresh string of t_size size, terminated by \0. all chars initialized to \0. returns this string.
	# uses memset to put null chars in string.
SRC += ft_strdel.c
	# frees address of string; sets pointer to string to null.
SRC += ft_strclr.c
	# sets all chars in string to \0. returns void.
SRC += ft_striter.c
	# Applies the function f to each character of the string passed as argument.
SRC += ft_striteri.c
	# Does something to index and char of a string.
SRC += ft_strmap.c
	# Creates a fresh string resulting from successive applications of (*f) to each character. Returns fresh string.
SRC += ft_strmapi.c
	# Same as above, but also passes index.
SRC += ft_strequ.c
	# Compares s1 and s2; if they are identical returns 1, otherwise 0.
SRC += ft_strnequ.c
SRC += ft_strsub.c
SRC += ft_strjoin.c
SRC += ft_strtrim.c
SRC += ft_strsplit.c
SRC += ft_itoa.c
SRC += ft_putendl.c
SRC += ft_putendl_fd.c
SRC += ft_putchar.c
SRC += ft_putstr.c
SRC += ft_putnbr.c
SRC += ft_putnbr_fd.c
SRC += ft_putchar_fd.c
SRC += ft_putstr_fd.c
SRC += ft_strclr.c

# **************************************************************************** #
# PART III                                                                     #
# **************************************************************************** #
SRC += ft_lstnew.c
SRC += ft_lstdelone.c
SRC += ft_lstdel.c
SRC += ft_lstadd.c
SRC += ft_lstiter.c
SRC += ft_lstmap.c


# **************************************************************************** #
# PART IV - CUSTOM                                                             #
# **************************************************************************** #
SRC += ft_extra_abs.c
SRC += ft_extra_isspace.c
SRC += ft_extra_lstprint.c
SRC += ft_extra_max.c
SRC += ft_putnbr_nl.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o : %.c
	@$(CC) $(FLAG) -c -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
                             
