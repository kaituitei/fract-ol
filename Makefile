NAME := fractol

SRC := $(wildcard *.c)
SRC += $(wildcard plot/*.c)
OBJS := $(SRC:.c=.o)

CC = cc

ORIG_CFLAGS := $(CFLAGS)

CFLAGS += -Ilibft -Iminilibx
LDFLAGS += -Llibft -Lminilibx
LDLIBS := -lft -lm -lmlx -lX11 -lXext

all : $(NAME)
clean :
	$(MAKE) -C libft fclean
	$(MAKE) -C minilibx clean
	$(RM) $(OBJS) $(DEPS)

fclean : clean
	$(RM) $(OBJS)

re : fclean all

minilibx/libmlx.a:
	$(MAKE) -C minilibx all

libft/libft.a :
	CFLAGS='$(ORIG_CFLAGS)' $(MAKE) -C libft all

$(NAME) : $(OBJS) | libft/libft.a minilibx/libmlx.a
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS)

.PHONY: all clean fclean re libft
