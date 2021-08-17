# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 22:01:08 by apaduan-          #+#    #+#              #
#    Updated: 2021/08/17 20:33:13 by apaduan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
NAME=libftprintf.a
 
# Files of Printf
# .c files
C_SOURCE=ft_printf.c \
		 main.c
 
# .h files
H_SOURCE=ft_printf.h
 
# Output files
OUT=$(C_SOURCE:.c=.o)
 
#Libft Path
LIBFT_PATH = Libft

#Libft file
LIBFT = $(LIBFT_PATH)libft.a

# Compiler
CC=clang
 
# Flags for compiler
CC_FLAGS=-Wall         \
         -Wextra      \
         -Werror

# Compilation and linking

all: $(NAME)

$(NAME): $(LIBFT) $(OUT)
	@ar rcs  $(NAME) $(OUT)
	@echo "Creating $(NAME)"

$(LIBFT):
	@cd $(LIBFT_PATH); make

$(OUT): $(C_SOURCE) $(H_SOURCE)
	@$(CC) $(CC_FLAGS) -c $(C_SOURCE)
	@echo "Creating $(OUT)"

clean:
	@cd $(LIBFT_PATH); make clean
	@rm -f $(OUT)
	@echo "Removing $(OUT)"

fclean:
	@cd $(LIBFT_PATH); make fclean
	@rm -f $(OUT)
	@echo "Removing $(OUT)"
	@rm -f $(NAME)
	@echo "Removing $(NAME)"

re: fclean all

#To use this command in terminal write:
# make git m="your message"
git:
	@git add .
	@git commit -m "$m"
	@git push

.PHONY: 