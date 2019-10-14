FILE1 = basicmath_small.c   rad2deg.c  cubic.c   isqrt.c
FILE2 = basicmath_large.c   rad2deg.c  cubic.c   isqrt.c

all: basicmath_small basicmath_large

all_h: h_basicmath
	ar rcs basicmath.a *.o

basicmath_small: ${FILE1}
	gcc -static -O3 ${FILE1} -o basicmath_small -lm
basicmath_large: ${FILE2}
	gcc -static -O3 ${FILE2} -o basicmath_large -lm

h_basicmath: ${FILE1}
	gcc -c -static -O3 basicmath_small.c rad2deg.c cubic.c isqrt.c basicmath_large.c -lm

clean:
	rm -rf basicmath_small basicmath_large output*
