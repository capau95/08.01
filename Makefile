HEADERS = kbfunc.h

all: kb kbfunc

kb.o: kb.c
	gcc -c kb.c -o kb.o

kbfunc.o: kbfunc.c
	gcc -c kbfunc.c -o kbfunc.o

kb: kb.o kbfunc.o
	gcc kb.o kbfunc.o -o kb

clean: 
	-rm -f kb.o	
	-rm -f kbfunc.o
	-rm -f kb
