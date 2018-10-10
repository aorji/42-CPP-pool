# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aorji <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/24 16:00:36 by aorji             #+#    #+#              #
#    Updated: 2018/09/24 16:08:54 by aorji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp

NAME	= megaphone

OBJ		= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Wextra -Werror

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)
	echo '\033[32m[ ✔ ]' "$(NAME) created" '\033[0m'

# %.o: %.cpp
# 	$clang++ $(FLAGS) -o $(NAME) -c $<
clean:
	rm -rf $(OBJ)
	echo '\033[31m[ × ]' "$(OBJ) removed" '\033[0m'

fclean: clean
	rm -f $(NAME)
	echo '\033[31m[ × ]' "$(NAME) removed" '\033[0m'

re: fclean all