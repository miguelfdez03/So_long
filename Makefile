# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 18:49:53 by miguel-f          #+#    #+#              #
#    Updated: 2025/05/19 18:47:11 by miguel-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del ejecutable final
NAME = so_long

# Compilador y flags de compilación
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

# Rutas y nombres de las bibliotecas necesarias
MLX42_PATH = libs/MLX42
MLX42 = $(MLX42_PATH)/build/libmlx42.a

LIBFT_PATH = libs/libft
LIBFT = $(LIBFT_PATH)/libft.a

# Directorios de los archivos de cabecera
HEADERS = -I ./libs -I $(MLX42_PATH)/include/MLX42 -I $(LIBFT_PATH)

# Archivos fuente del proyecto
SRCS = src/so_long.c src/map_check.c src/map.c src/moves.c src/text_img.c src/utils.c

# Directorios de fuentes y objetos
SRCDIR = src/
OBJDIR = obj/
# Convierte los archivos .c en .o y los coloca en el directorio de objetos
OBJS = $(SRCS:$(SRCDIR)%.c=$(OBJDIR)%.o)

# Regla principal que construye todo el proyecto
all : $(MLX42) $(LIBFT) $(OBJDIR) $(NAME)

# Compila el ejecutable final enlazando todos los objetos y bibliotecas
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(MLX42) $(LIBFT) $(HEADERS) -lglfw -o $(NAME) -lm

# Regla para compilar cada archivo fuente en su correspondiente objeto
$(OBJDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Crea el directorio para los archivos objeto si no existe
$(OBJDIR):
	mkdir -p $@

# Compila la biblioteca libft
$(LIBFT):
	make -C $(LIBFT_PATH)

# Compila la biblioteca MLX42 usando cmake
$(MLX42):
	cmake $(MLX42_PATH) -B $(MLX42_PATH)/build && make -C $(MLX42_PATH)/build -j4

# Limpia los archivos objeto
clean:
	$(RM) obj
	make -C $(LIBFT_PATH) clean
	make -C $(MLX42_PATH)/build clean

# Limpia todos los archivos generados, incluyendo el ejecutable
fclean:
	$(RM) obj $(NAME)
	make -C $(LIBFT_PATH) fclean
	$(RM) $(MLX42_PATH)/build

# Limpia todo y recompila
re: fclean all