NAME = read_file
SRC_DIR = src
INC_DIR = inc
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
CC = clang

all: $(NAME) clean

$(NAME):
	@$(CC) $(CFLAGS) $(SRC_FILES) -I $(INC_DIR) -o $(NAME)

clean:
	@$(RM) $(OBJ_DIR)

uninstall: clean
	@$(RM) $(NAME)

reinstall: uninstall all

.PHONY: all uninstall clean reinstall
