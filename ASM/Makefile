NAME = Colleen
SRCS = Colleen.s
OBJS = $(SRCS:.s=.o)

ASM_CC = nasm
ASMFLAGS = -f elf64

all: $(NAME)

$(NAME): $(OBJS)
	@gcc -no-pie -o $@ $^
	@echo $$'\n✅ \033[1;32mproject compiled\033[0m ✅'

%.o: %.s
	@$(ASM_CC) $(ASMFLAGS) $< -o $@
	@echo -n "• "

clean:
	@rm -f $(OBJS)
	@echo -e "\033[1;31m🧹 cleaned objects\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo -e "\033[1;31m🗑️ removed $(NAME)\033[0m"

re: fclean all

.PHONY: all clean fclean re
