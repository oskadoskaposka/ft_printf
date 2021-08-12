# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 22:01:08 by apaduan-          #+#    #+#              #
#    Updated: 2021/08/11 22:24:34 by apaduan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
NAME=.....
 
# .c files
C_SOURCE=.....
 
# .h files
H_SOURCE=.....
 
# Output files
OUT=$(C_SOURCE:.c=.o)
 
# Compiler
CC=clang
 
# Flags for compiler
CC_FLAGS=-Wall         \
         -Wextra      \
         -Werror

# Compilation and linking

all: $(NAME)

$(NAME):$(OUT)
	@ar rcs  $(NAME) $(OUT)
	@echo "Creating $(NAME)"

$(OUT): $(C_SOURCE) $(H_SOURCE)
	@$(CC) $(CC_FLAGS) -c $(C_SOURCE)
	@echo "Creating $(OUT)"

clean:
	@rm -f $(OUT)
	@echo "Removing $(OUT)"

fclean: clean
	@rm -f $(NAME)
	@echo "Removing $(NAME)"

re: fclean all

#To use this command in terminal write:
# make git m="your message"
git:
	@git add .
	@git commit -m "$m"
	@git push
