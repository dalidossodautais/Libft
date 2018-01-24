# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 16:31:23 by ddosso-d          #+#    #+#              #
#    Updated: 2016/11/29 16:31:25 by ddosso-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
FLAGS = -Wall -Wextra -Werror
SRC1 =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c
SRC2 =	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC3 =	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
		ft_lstmap.c
SRCX =	ft_isblank.c ft_power.c ft_puttab.c ft_puttab_fd.c ft_strsplit_blank.c \
		ft_tabtostr.c ft_putlst.c ft_putlst_fd.c ft_strcdup.c \
		ft_strndup.c ft_islower.c ft_isupper.c
SRCS =	$(SRC1) $(SRC2) $(SRC3) $(SRCX)
OBJS =	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm $(NAME)

re: fclean all
