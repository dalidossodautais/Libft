# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/24 18:47:17 by ddosso-d          #+#    #+#              #
#    Updated: 2018/01/24 18:47:19 by ddosso-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Werror -Wextra -Wall

HEADER_DIR =		./

LIBFT_HEADER =		libft.h

SPE_SRCS =			ft_error.c

SPE_OBJS =			$(SPE_SRCS:.c=.o)

LEN_SRCS =			ft_strlen.c \
					ft_strclen.c \
					ft_ilen.c \
					ft_nbword.c

LEN_OBJS =			$(LEN_SRCS:.c=.o)

IS_SRCS =			ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isblank.c \
					ft_isdigit.c \
					ft_isgraph.c \
					ft_islower.c \
					ft_isprint.c \
					ft_ispunct.c \
					ft_isspace.c \
					ft_isupper.c \
					ft_isxdigit.c \
					ft_iseblank.c \
					ft_issign.c \
					ft_isbetween.c \
					ft_isnnsame.c \
					ft_stris.c \
					ft_skipis.c \
					ft_skipris.c \
					ft_skipchar.c \
					ft_skipbchar.c

IS_OBJS =			$(IS_SRCS:.c=.o)

STR_SRCS =			ft_strcat.c \
					ft_strcchr.c \
					ft_strchr.c \
					ft_strclr.c \
					ft_strcmp.c \
					ft_strcpy.c \
					ft_strdel.c \
					ft_strdup.c \
					ft_strequ.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strldup.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strncat.c \
					ft_strnchr.c \
					ft_strnclr.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strndup.c \
					ft_strnequ.c \
					ft_strnew.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strsplit.c \
					ft_strstr.c \
					ft_strsub.c \
					ft_strtrim.c

STR_OBJS =			$(STR_SRCS:.c=.o)

PUT_SRCS =			ft_putchar.c \
					ft_putchar_fd.c \
					ft_putstr.c \
					ft_putstr_fd.c \
					ft_putendl.c \
					ft_putendl_fd.c \
					ft_puttab.c \
					ft_puttab_fd.c \
					ft_putnbr.c \
					ft_putnbr_fd.c \
					ft_putunicode.c \
					ft_putunicode_fd.c

PUT_OBJS =			$(PUT_SRCS:.c=.o)

MEM_SRCS =			ft_bzero.c \
					ft_memalloc.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memdel.c \
					ft_memmove.c \
					ft_memset.c

MEM_OBJS =			$(MEM_SRCS:.c=.o)

TO_SRCS =			ft_absolute.c \
					ft_atoi.c \
					ft_atoui.c \
					ft_atol.c \
					ft_atoul.c \
					ft_atoll.c \
					ft_atoull.c \
					ft_atoxi.c \
					ft_atoxui.c \
					ft_atoxl.c \
					ft_atoxul.c \
					ft_atoxll.c \
					ft_atoxull.c \
					ft_bigger.c \
					ft_itoa.c \
					ft_power.c \
					ft_smaller.c \
					ft_strtolower.c \
					ft_strtoupper.c \
					ft_tolower.c \
					ft_toupper.c

TO_OBJS =			$(TO_SRCS:.c=.o)

LST_SRCS =			ft_lstadd.c \
					ft_lstdel.c \
					ft_lstdelone.c \
					ft_lstdup.c \
					ft_lstiter.c \
					ft_lstmap.c \
					ft_lstnew.c

LST_OBJS =			$(LST_SRCS:.c=.o)

ALL_OBJS =			$(SPE_OBJS) \
					$(LEN_OBJS) \
					$(IS_OBJS) \
					$(STR_OBJS) \
					$(PUT_OBJS) \
					$(MEM_OBJS) \
					$(TO_OBJS) \
					$(LST_OBJS)

ALL_OBJS_DIR =		$(SPE_OBJS_DIR) \
					$(LEN_OBJS_DIR) \
					$(IS_OBJS_DIR) \
					$(STR_OBJS_DIR) \
					$(PUT_OBJS_DIR) \
					$(MEM_OBJS_DIR) \
					$(TO_OBJS_DIR) \
					$(LST_OBJS_DIR)

ALL_HEADERS =		$(addprefix $(HEADER_DIR), $(LIBFT_HEADER))

all : $(NAME)

$(NAME): $(ALL_OBJS) $(ALL_HEADERS)
	ar -rc $(NAME) $(ALL_OBJS)
	@ranlib $(NAME)

%.o : %.c $(addprefix $(HEADER_DIR), $(LIBFT_HEADER))
	@gcc -o $@ -c $< $(FLAGS) -I $(HEADER_DIR)

clean :
	@rm -f $(ALL_OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
