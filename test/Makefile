##
## RAY PROJECT, 2019
## string-library
## File description:
## Makefile
##

CC=			gcc

RM=			rm -f

SRC_DIR=	./src/

INC_DIR=	../include/ray/

SRCS=		$(SRC_DIR)affix.c			\
			$(SRC_DIR)caps.c			\
			$(SRC_DIR)char_op.c			\
			$(SRC_DIR)count.c			\
			$(SRC_DIR)index_not_of.c	\
			$(SRC_DIR)index_of.c		\
			$(SRC_DIR)join.c			\
			$(SRC_DIR)misc.c			\
			$(SRC_DIR)replace.c			\
			$(SRC_DIR)split.c			\
			$(SRC_DIR)trim.c

CFLAGS=			-std=gnu18 -pedantic -W -Wall -Wextra -Wshadow -Wundef -Wpointer-arith -Wcast-align
CFLAGS+=		-Wstrict-prototypes -Wwrite-strings -Waggregate-return -Wcast-qual
CFLAGS+=		-Wswitch-default -Wunreachable-code -Wuninitialized -Winit-self
CFLAGS+=		-fPIC

CFLAGS+=		-I$(INC_DIR)

LDFLAGS= 	-lraystring -lcriterion

OBJS=		$(SRCS:.c=.o)

NAME=		libraystringtests

all: 		$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY: all clean fclean re
