all:  dijkstra_large dijkstra_small

dijkstra_large: dijkstra_large.c Makefile
	gcc -static dijkstra_large.c -O3 -o dijkstra_large

dijkstra_small: dijkstra_small.c Makefile
	gcc -static dijkstra_small.c -O3 -o dijkstra_small 

all_h:  dijkstra_small_h

dijkstra_small_h: dijkstra_small.c Makefile
	gcc -c -static dijkstra_small.c -O3

clean:
	rm -rf dijkstra_large dijkstra_small output*
