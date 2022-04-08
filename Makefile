NAME = libft.a
SRC = ft_strlen.c
OBJ = $(SRC:%.c=%.o)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

%.o: %.c
	@gcc -c $< -o $@

