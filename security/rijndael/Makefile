rijndael: aes.c aes.h aestab.h aesxam.c Makefile
	gcc -static -O3 -o rijndael aes.c aesxam.c

rijndael_h: aes.c aes.h aestab.h aesxam.c Makefile
	gcc -c -static -O3 aes.c aesxam.c

clean:
	rm -rf rijndael output*
