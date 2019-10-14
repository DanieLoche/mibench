patricia: patricia.c patricia_test.c
	gcc -static patricia.c patricia_test.c -O3 -o patricia

patricia_h: patricia.c patricia_test.c
	gcc -c -static patricia.c patricia_test.c -O3

clean:
	rm -rf patricia output*
