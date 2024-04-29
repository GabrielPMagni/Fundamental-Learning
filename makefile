# Makefile para um projeto em C

# Nome do executável
TARGET = libft

# Compilador
CC = gcc

outputDir = out/

# Opções de compilação
CFLAGS = -Wall -Wextra -Werror -target x86_64-apple-darwin

# Arquivos fonte
SOURCES = libft.c main.c libtest.c

# Objetos gerados a partir dos arquivos fonte
OBJECTS = $(SOURCES:.c=.o)

# Regra padrão: compilação do programa
all: createOutFolderIfNotExists $(TARGET) clear

# Regra para compilar o programa
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(outputDir)$(TARGET) $(OBJECTS)

# Regra para compilar cada arquivo fonte separadamente
%.o: %.c
	$(CC) $(CFLAGS) -c $<

createOutFolderIfNotExists: 
	mkdir -p $(outputDir)

clear: 
	rm ./*.o