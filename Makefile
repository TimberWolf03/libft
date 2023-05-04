# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 12:58:44 by asaravan          #+#    #+#              #
#    Updated: 2023/05/02 14:57:55 by asaravan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# specify the name of the static library created by makefile
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

# source files that will be compiled to create library (all .c files for now)
SRCS = $(wildcard *.c)

# .c replaced with .o extension (not compiled)
OBJS = $(SRCS:.c=.o)

# compile source files into object files with same name as target using flags 
# specified
# -c compile without linking
# $< first dependency (src file)
# -o create output file
# $@ target/output name
%.o: %.c
	cc $(CFLAGS) -c $< -o $@

# format = target: $(dependency)
# $ sign indicates the word/phrase is a variable reference
# all = default target when running the make command without specifying a 
# particular target
all: $(NAME)

# commands associated with a rule will have tab indentations
# ar rcs = create a static library archive file named NAME with indexing (s 
# letter similar function with ranlib command) using OBJS object files
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# remove object files listed in OBJS
clean:
	rm -f $(OBJS)

# removes files created by makefile including library archive
fclean: clean
	rm -f $(NAME)

# rebuild the library from scratch after all object files are removed
re: fclean all

# telling make not to check whether the dependency files exists. Ensures 
# targets are always executed despite the existence of file with same name
.PHONY: all clean fclean re