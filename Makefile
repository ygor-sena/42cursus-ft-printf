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

S_BONUS			=	$(addprefix ${S_PATH_BONUS}, ${S_FILES_BONUS})
S_PATH_BONUS	=	bonus/src/
S_FILES_BONUS	=	ft_printf_bonus.c \
					ft_instance_bonus.c \
					ft_sort_format_bonus.c \
					ft_parse_bonus.c \
					ft_type_cast_bonus.c \
					ft_cast_char_bonus.c \
					ft_cast_percent_bonus.c \
					ft_cast_string_bonus.c \
					ft_cast_pointer_bonus.c \
					ft_cast_unsigned_bonus.c \
					ft_cast_integer_bonus.c \
					ft_cast_hexa_bonus.c

INCS_PATH		=	includes/
I_PATH_BONUS	=	bonus/includes/

LIBFT			= 	$(addprefix ${LIBFT_PATH}, libft.a)
LIBFT_PATH		=	$(addprefix ${INCS_PATH}, libft/)

L_BONUS			= 	$(addprefix ${L_PATH_BONUS}, libft.a)
L_PATH_BONUS	=	$(addprefix ${I_PATH_BONUS}, libft/)

UT_FILES	=	main.c

INCS		= 	ft_printf.h

OBJS		= 	${SRCS:.c=.o}
OBJS_BONUS	= 	${S_BONUS:.c=.o}

CC			= 	cc
CC_FLAGS	= 	-Wall -Werror -Wextra
RM			= 	rm -f

NAME		= 	libftprintf.a

all:		${NAME}

${NAME}:	${OBJS}
			make -C ./${LIBFT_PATH}
			cp $(LIBFT) $(NAME)
			${CC} ${CC_FLAGS} -c $(SRCS) -I ${INCS_PATH}
			mv *.o ./src/
			ar -rcs $(NAME) $(OBJS)

bonus:		${OBJS} ${OBJS_BONUS}
			make -C ./${L_PATH_BONUS}
			cp $(L_BONUS) $(NAME)
			${CC} ${CC_FLAGS} -c $(S_BONUS) -I ${I_PATH_BONUS}
			mv *.o ./bonus/src/
			ar -rcs $(NAME) $(OBJS_BONUS)

clean:
			make clean -C ./${LIBFT_PATH}
			make clean -C ./${L_PATH_BONUS}
			rm -rf ${LIBFT}
			rm -rf ${L_BONUS}
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re libftprintf