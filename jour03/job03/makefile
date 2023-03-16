# Variables contenant les fichiers sources et objets
SRCS = main.c my_put.c
OBJS = $(SRCS:.c=.o)

# Flags de compilation
CC = gcc
CFLAGS = -Wall -Wextra

# Nom de l'exécutable
EXEC = my_make_evolve

# Règle de compilation
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
