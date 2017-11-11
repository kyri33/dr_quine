NAME_COL=Colleen
NAME_GRACE=Grace
NAME_SULLY=Sully

SRC_COL=ft_colleen/colleen.c
SRC_SULLY=ft_sully/sully.c
SRC_GRACE=ft_grace/grace.c

FLAGS=clang -Wall -Werror -Wextra -o

all: $(NAME_COL) $(NAME_GRACE) $(NAME_SULLY)

$(NAME_COL): $(SRC_COL)
	$(FLAGS) $(NAME_COL) $(SRC_COL)

$(NAME_GRACE): $(SRC_GRACE)
	$(FLAGS) $(NAME_GRACE) $(SRC_GRACE)

$(NAME_SULLY): $(SRC_SULLY)
	$(FLAGS) $(NAME_SULLY) $(SRC_SULLY)

clean:
	rm -f Sully_*

fclean: clean
	rm -f $(NAME_COL) $(NAME_GRACE) $(NAME_SULLY)

re: fclean all
