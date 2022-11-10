CC = gcc -Wall -Werror -Wextra
EXEC = prog 
SRC = *.c
OBJ = *.o


all : $(EXEC) 

$EXEC : OBJ
	$(CC) -o $(EXEC) *.o

OBJ 0: SRC
	$(CC) -o -c
