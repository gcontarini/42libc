FILES = $(wildcard ft_*.c)
BFILES = $(wildcard b_*.c)
OBJS = $(FILES:.c=.o)
BOBJS = $(BFILES:.c=.o)
NAME = libft.a

CC = gcc 
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

.c.o: $(FILES) $(BFILES)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $^

bonus: $(NAME) $(BOBJS)
	ar rcs $(NAME) $(BOBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus_re: fclean bonus

.PHONY: all clean fclean re bonus bonus_re
