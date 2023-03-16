# Variables contenant les fichiers sources et objets
SRCS = main.c
OBJS = $(SRCS:.c=.o)

# Flags de compilation
CC = gcc
CFLAGS = -Wall -Wextra

# Nom de l'exécutable
EXEC = my_pointer_count

# Règle de compilation
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(EXEC)