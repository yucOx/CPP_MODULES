SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = testMe

# Renk kodları
COLOR_RESET = \033[0m
COLOR_GREEN = \033[32;1m
COLOR_YELLOW = \033[33;1m

define ASCII_ART
─────▄████▀█▄
───▄█████████████████▄
─▄█████.▼.▼.▼.▼.▼.▼▼▼▼
▄███████▄.▲.▲▲▲▲▲▲▲▲
████████████████████▀▀
endef
export ASCII_ART

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$$ASCII_ART"  "$(COLOR_GREEN)Executable $(NAME) is ready for use.$(COLOR_RESET) $(COLOR_YELLOW)Follow me on github ->$(COLOR_RESET) ~yucOx"

clean:
	$(RM) $(OBJ)
	@echo "$(COLOR_YELLOW)Cleaned object files$(COLOR_RESET)"
	@echo "$(COLOR_YELLOW)Follow me on github->$(COLOR_RESET) ~yucOx"

fclean: clean
	$(RM) $(NAME)
	@echo "$(COLOR_YELLOW)Removed executable $(NAME)$(COLOR_RESET)"

re: fclean $(NAME)
