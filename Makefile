# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 16:00:52 by wborges-          #+#    #+#              #
#    Updated: 2022/04/26 13:36:56 by wborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I. -c
RM		= rm -f
HEADERS = libft.h
AR		= ar rcs

SRC_FILES = ft_atoi.c		ft_bzero.c		ft_calloc.c		ft_isalpha.c	\
			ft_isalnum.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c	\
			ft_itoa.c		ft_memchr.c		ft_memcmp.c		ft_memcpy.c		\
			ft_memmove.c	ft_memset.c		ft_putchar_fd.c	ft_putendl_fd.c	\
			ft_putnbr_fd.c	ft_putstr_fd.c	ft_split.c		ft_strchr.c		\
			ft_strdup.c		ft_striteri.c	ft_strjoin.c	ft_strlcat.c	\
			ft_strlcpy.c	ft_strlen.c		ft_strmapi.c	ft_strncmp.c	\
			ft_strnstr.c	ft_strrchr.c	ft_strtrim.c	ft_substr.c		\
			ft_toupper.c	ft_tolower.c

SRC_OBJ = $(SRC_FILES:%.c=%.o)

BONUS_FILES =	ft_lstadd_back.c	ft_lstadd_front.c		ft_lstclear.c	\
				ft_lstdelone.c		ft_lstiter.c			ft_lstlast.c	\
				ft_lstmap.c			ft_lstnew.c				ft_lstsize.c

BONUS_OBJ = $(BONUS_FILES:%.c=%.o)

$(NAME): $(SRC_OBJ) $(HEADERS)
	$(AR) $(NAME) $(SRC_OBJ)

$(BONUS_OBJ):
	$(CC) $(CFLAGS) $(BONUS_FILES)

all: $(NAME)

bonus: $(NAME) $(BONUS_OBJ)
	$(AR) $(NAME) $(BONUS_OBJ)

clean:
	$(RM) $(SRC_OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus