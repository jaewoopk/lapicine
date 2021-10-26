NAME = libft.a
SRCS = ./srcs/ft_puthcar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror -I ./includes/
CC = gcc
RM = rm -f

all :	${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS};
		ranlib ${NAME};

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean_re
