test:list.o fileread.o filewrite.o main.o
	gcc -o test list.o fileread.o filewrite.o main.o
list.o:
	gcc -c list.c
fileread.o:
	gcc -c fileread.c
filewrite.o:
	gcc -c filewrite.c
main.o:
	gcc -c main.c
clean:
	rm *.o test