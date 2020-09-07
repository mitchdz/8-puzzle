all:
	gcc 8-puzzle.c -lm -o 8-puzzle && ./8-puzzle

clean:
	rm 8-puzzle
