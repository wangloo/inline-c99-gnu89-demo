all:main

main:main.o func.o
	gcc $^ -o $@ 

main.o:main.c
	gcc -c $< -o $@ -std=c99
func.o:func.c
	gcc -c $< -o $@ -std=c99

clean:
	-rm -f main main.o func.o
	
