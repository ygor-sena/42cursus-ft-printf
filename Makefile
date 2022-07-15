SRCS			=	$(addprefix ${SRCS_PATH}, ${SRCS_FILES})
SRCS_PATH		=	src/
SRCS_FILES		= 	ft_printf.c \
					ft_instance.c \
					ft_sort_format.c \
					ft_type_cast.c \
					ft_cast_char.c \
					ft_cast_percent.c \
					ft_cast_string.c \
					ft_cast_pointer.c \
					ft_cast_unsigned.c \
					ft_cast_integer.c \
					ft_cast_hexa.c

INCS_PATH		=	includes/

LIBFT			= 	$(addprefix ${LIBFT_PATH}, libft.a)
LIBFT_PATH		=	$(addprefix ${INCS_PATH}, libft/)

UT_FILES	=	main.c

INCS		= 	ft_printf.h
OBJS		= 	${SRCS:.c=.o}
OBJS_BONUS	= 	

CC			= 	cc
CC_FLAGS	= 	-Wall -Werror -Wextra
RM			= 	rm -f

NAME		= 	libftprintf.a

all:		${NAME}

${NAME}:	${SRCS}
			make -C ./${LIBFT_PATH}
			cp $(LIBFT) $(NAME)
			${CC} ${CC_FLAGS} -c $(SRCS) -I ./includes/
			mv *.o ./src/
			ar -rc $(NAME) $(OBJS)
			gcc main.c -I ./includes/ -L ./ -lftprintf
			./a.out
clean:
			make clean -C ./${LIBFT_PATH}
			rm -rf ${LIBFT}
			rm -rf a.out
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			make clean -C ./${LIBFT_PATH}
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re