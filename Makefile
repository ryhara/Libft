# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/21 10:12:09 by ryhara            #+#    #+#              #
#    Updated: 2023/06/11 12:00:12 by ryhara           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

B_SRCS = $(SRCS) ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c

OBJS = $(SRCS:%.c=$(OBJDIR)%.o)
OBJDIR = ./obj/
CC = cc
RM = rm -rf
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

ifdef WITH_BONUS
	OBJS += $(B_SRCS:%.c=$(OBJDIR)%.o)
endif

all : $(OBJDIR) $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(OBJDIR):
	mkdir obj

$(OBJDIR)%.o: %.c
	$(CC) $(CFLAGS)  -o $@ -c $<

bonus:
	make WITH_BONUS=1

clean :
	$(RM) $(OBJDIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus