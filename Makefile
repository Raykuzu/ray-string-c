##
## RAY PROJECT, 2019
## string-library
## File description:
## Makefile
##

CC=				gcc

RM=				rm -f

SRC_DIR=		./src/

INC_DIR=		./include/

SRCS=			$(SRC_DIR)caps.c			\
				$(SRC_DIR)char_op.c			\
				$(SRC_DIR)count.c			\
				$(SRC_DIR)affix.c			\
				$(SRC_DIR)index_not_of.c	\
				$(SRC_DIR)index_of.c		\
				$(SRC_DIR)join.c			\
				$(SRC_DIR)misc.c			\
				$(SRC_DIR)replace.c			\
				$(SRC_DIR)split.c			\
				$(SRC_DIR)trim.c

OBJS=			$(SRCS:.c=.o)

CFLAGS=			-std=gnu18 -pedantic -W -Wall -Wextra -Wshadow -Wundef -Wpointer-arith -Wcast-align
CFLAGS+=		-Wstrict-prototypes -Wwrite-strings -Waggregate-return -Wcast-qual
CFLAGS+=		-Wswitch-default -Wunreachable-code -Wuninitialized -Winit-self
CFLAGS+=		-fPIC

CFLAGS+=		-I$(INC_DIR)

NAME=			libraystring.so

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) -shared -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

test:			make -C ./test/

.PHONY:			all clean fclean re