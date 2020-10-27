
NAME = prog

CLEAN = clean

SRCS = Sources/main.c Sources/Basic_fonction.c Sources/Check_Fonction.c Sources/Fonction_dico.c

OBJ = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -I Include


all:  ${NAME} clean

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: fclean all clean re