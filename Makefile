# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/23 14:49:16 by mlabrayj          #+#    #+#              #
#    Updated: 2021/01/24 09:31:17 by mlabrayj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	./cub3D
FLAGS	=	-Wall -Wextra -Werror
SRC		=	main.c						\
			ft_setmap.c					\
			ft_check_error.c  			\
			ft_setup.c					\
			ft_print_map_bn.c			\
			events.c          			\
			ft_setup_util.c				\
			ft_spritlist.c     			\
			ft_sprit.c					\
			ft_check_step.c				\
			raycasting.c      			\
			ft_utils.c					\
			save.c						\
			libftutil/ft_atoi.c				\
			libftutil/ft_atoiforresul.c		\
			libftutil/ft_isdigit.c			\
			libftutil/ft_memcpy.c			\
			libftutil/ft_split.c			\
			libftutil/ft_strdup.c			\
			libftutil/ft_strjoin.c			\
			libftutil/ft_strlen.c			\
			libftutil/ft_strncmp.c			\
			libftutil/ft_strtrim.c			\
			libftutil/ft_substr.c			\
			libftutil/ft_tolower.c			\
			libftutil/ft_toupper.c			\
			get_next_line.c				\
			get_next_line_utils.c		\

all: $(NAME)

$(NAME): $(SRC)
	gcc $(SRC) $(FLAGS) -lmlx -framework appkit -framework opengl -o $(NAME)

bonus: $(NAME)

clean:
	rm -f cub3D

fclean: clean

re: fclean all

.PHONY: re clean fclean bonus