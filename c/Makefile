CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

clox: $(OBJS)
	$(CC) $(CFLAGS) -o clox $(OBJS)

clean:
	rm -f clox *.o