NAME_ONE = Colleen
NAME_TWO = Grace
NAME_THIRD = Sully

SRCS_ONE = Colleen.c
SRCS_TWO = Grace.c
SRCS_THIRD = Sully.c

OBJS_ONE = $(SRCS_ONE:.c=.o)
OBJS_TWO = $(SRCS_TWO:.c=.o)
OBJS_THIRD = $(SRCS_THIRD:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME_ONE) $(NAME_TWO) $(NAME_THIRD)

$(NAME_ONE): $(OBJS_ONE)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo $$'\n✅ \033[1;32mColleen compiled\033[0m ✅'

$(NAME_TWO): $(OBJS_TWO)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo $$'\n✅ \033[1;32mGrace compiled\033[0m ✅'

$(NAME_THIRD): $(OBJS_THIRD)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo $$'\n✅ \033[1;32mSully compiled\033[0m ✅'

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf $$'\033[1m*\033[0m '

clean:
	@rm -f $(OBJS_ONE) $(OBJS_TWO) $(OBJS_THIRD) Grace_kid.c
	@echo -e "\033[1;31m🧹 cleaned objects\033[0m"

fclean: clean
	@rm -f $(NAME_ONE) $(NAME_TWO) $(NAME_THIRD) Grace_kid.c
	@echo -e "\033[1;31m🗑️ removed binaries\033[0m"

re: fclean all

.PHONY: all clean fclean re
