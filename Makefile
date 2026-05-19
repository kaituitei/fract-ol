NAME := fractol

SRC := $(wildcard *.c)
SRC += $(wildcard plot/*.c)
SRC += $(wildcard mandelbort/*.c)
SRC += $(wildcard math/*.c)
SRC += $(wildcard event/*.c)
OBJS := $(SRC:.c=.o)

CC = cc

ORIG_CFLAGS := $(CFLAGS)
CFLAGS += -Wall -Werror -Wextra -c
CFLAGS += -Ilibft -Iminilibx -Ift_printf -include fractol.h
CLGAGS += -g3 -glldb #-fsanitize=address,undefined
LDFLAGS = -Llibft -Lminilibx -Lft_printf #-fsanitize=address,undefined
LDLIBS := -lft -lm -lmlx -lX11 -lftprintf -lXext

all : $(NAME)
clean :
	$(MAKE) -C libft fclean
	$(MAKE) -C minilibx clean
	$(RM) $(OBJS) $(DEPS)

fclean : clean
	$(RM) $(OBJS) $(NAME)

re : fclean all

minilibx/libmlx.a:
	$(MAKE) -C minilibx all

libft/libft.a :
	CFLAGS='$(ORIG_CFLAGS)' $(MAKE) -C libft all

ft_printf/libftprintf.a :
	CFLAGS='$(ORIG_CFLAGS)' $(MAKE) -C libftprintf all

$(NAME) : $(OBJS) | libft/libft.a minilibx/libmlx.a ft_printf/libftprintf.a
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS)

.NOTPARALLEL: re
.PHONY: all clean fclean re libft
