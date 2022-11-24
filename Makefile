all:main

main:main.o func.o
	gcc $^ -o $@ 

main.o:main.c
	gcc -c $< -o $@ -std=gnu89
func.o:func.c
	gcc -c $< -o $@ -std=gnu89

clean:
	-rm -f main main.o func.o
	
