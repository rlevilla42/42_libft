# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 02:35:28 by rlevilla          #+#    #+#              #
#    Updated: 2022/10/19 01:23:08 by rlevilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_split.c \
ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_strtrim.c ft_striteri.c ft_substr.c ft_tolower.c ft_toupper.c \
\

OBJS	= ${SRCS:.c=.o}
CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

OPTIONS	= -I

SRCS_BONUS = ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME	= libft.a

all:	${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}
		ranlib ${NAME}

bonus:	${OBJS_BONUS}
	ar rcs ${NAME} ${OBJS_BONUS}

clean:
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:	clean
				${RM} ${NAME}
re:	fclean all

.PHONY: clean fclean all re
