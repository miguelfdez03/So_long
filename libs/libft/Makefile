# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 20:08:21 by alromero          #+#    #+#              #
#    Updated: 2025/05/16 21:14:25 by miguel-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Name
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Command cleaner
RM = rm -f

# Sources and Headings
SRCS =	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlcat.c ft_strlen.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putnbr_fd.c ft_split.c ft_putendl_fd.c ft_putnbr_base.c ft_numlen.c ft_strcmp.c ft_printf.c ft_printf_functions.c \
		get_next_line.c get_next_line_utils.c
		
BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

ALL_SRCS = $(SRCS) $(BONUS_SRCS)

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Static Library
${NAME}:	${OBJS}
	ar rsc ${NAME} ${OBJS}

# Bonus target
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

both:
	$(CC) $(CFLAGS) -c $(ALL_SRCS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Main Rule
all: $(NAME)

# Rule for compiling .c files into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Cleaning object files
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

# Complete cleaning 
fclean: clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re