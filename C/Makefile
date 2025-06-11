# Variables
NAME = Colleen

SRCS = Colleen.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

# Règles principales
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -fsanitize=address
	@echo $$'\n✅ \033[1;32mproject compiled\033[0m ✅'

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf $$'\033[1m*\033[0m'

# Nettoyage
clean:
	@rm -f $(OBJS)
	@echo $$'\033[1;31mremoved object files\033[0m'

fclean: clean
	@rm -f $(NAME)
	@echo $$'\033[1;31mremoved $(NAME)\033[0m'

re: fclean all

# Phonies
.PHONY: all clean fclean re