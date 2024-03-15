default:
	gcc -Wall -o prog main.c input.c arrays.c -lm
debug:
	gcc -Wall -o prog -g  main.c input.c arrays.c -lm
clean:
	rm -f prog
