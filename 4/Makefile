##
## EPITECH PROJECT, 2025
## pool_exercise
## File description:
## Makefile to compile the project
##
SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.c)

CPPFLAGS = -Wall -Wextra
DEBUG = -Wall -Wextra -Werror

INCLUDE = -I include

NAME = pool_exercise

all: $(NAME)

$(NAME):
	@gcc main.c $(SRC) -o $(NAME) $(INCLUDE) $(CPPFLAGS)
	@echo "\033[1;34mCompiled successfully 🎩\033[0m"

debug:
	@gcc -g3 main.c $(SRC) -o $(NAME) $(INCLUDE) $(DEBUG)
	@echo "\033[1;34mCompiled 🎩 (debug)\033[0m"

clean:
	@rm -rf $(NAME)
	@echo "\033[1;35mCleaned all 🚽\033[0m"

re: clean all

start: re
	@echo "\033[1;36m⬇️  Started ⬇️ \033[0m"
	@./$(NAME)
