NAME = libft.a

# file name
PART1 = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
		ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
		ft_strncmp.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_strchr.c \
		ft_strrchr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
		ft_memset.c ft_memmove.c ft_strlcpy.c ft_strnstr.c

PART2 = ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_substr.c

BONUS_PART = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c \
			 ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Source and Object file
SRCS = ${PART1} ${PART2}
OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_PART:.c=.o}
 
# Compiler and flag
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
RM = rm -f

# Compile each .c into .o
# "$<" -> first dependency "$@" -> Target
%.o:%.c
	${CC} ${FLAGS} ${INCLUDE} -c $< -o $@ 

# Build rule
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

bonus:	${OBJS} ${BONUS_OBJS}
	ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re