prog:CRUD.c main.o
	gcc CRUD.o main.o -o prog -g
main.o:main.c
	gcc -c main.c -g
CRUD.o:CRUD.c
	gcc -c CRUD.c -g
