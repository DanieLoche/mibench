FILE1 = qsort_small.c
FILE2 = qsort_large.c

all_h: qsort_small_h qsort_large_h

qsort_small_h: qsort_small.c Makefile
	gcc -c -static qsort_small.c -O3 -lm
qsort_large_h: qsort_large.c Makefile
	gcc -c -static qsort_large.c -O3 -lm

all: qsort_small qsort_large

qsort_small: qsort_small.c Makefile
	gcc -static qsort_small.c -O3 -o qsort_small -lm
qsort_large: qsort_large.c Makefile
	gcc -static qsort_large.c -O3 -o qsort_large -lm

clean:
	rm -rf qsort_small qsort_large output*
