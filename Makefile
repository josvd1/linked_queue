CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o insert.o delete.o display.o
	echo "Compiling final"
	gcc $(CFLAGS) main.o insert.o delete.o display.o -o final
	chmod +x final
	
main.o: main.c
	echo "Compiling main"
	gcc $(CFLAGS) -c main.c

insert.o: insert.c
	echo "Compiling insert"
	gcc $(CFLAGS) -c insert.c

delete.o: delete.c
	echo "Compiling delete"
	gcc $(CFLAGS) -c delete.c

display.o: display.c
	echo "Compiling display"
	gcc $(CFLAGS) -c display.c



clean:
	echo: "Removing all but the source files"
	rm *.o