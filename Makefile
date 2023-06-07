CC = gcc
CFLAGS = -Wall -Wextra

# Source files
SRCS = netc/net.c

# Object files
OBJS = $(SRCS:.c=.o)

# Output library
LIBRARY = libnetc.a

.PHONY: all clean

all: $(LIBRARY)

$(LIBRARY): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(LIBRARY) $(OBJS)
