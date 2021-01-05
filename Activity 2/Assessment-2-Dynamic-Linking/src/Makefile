INC = -I../include

all: *.o libmystring.so libbitmask.so libmyutils.so clean.o

libmystring.so: *.o
	gcc -shared -o libmystring.so mystring.o

libbitmask.so: *.o
	gcc -shared -o libbitmask.so bitmask.o 

libmyutils.so: *.o
	gcc -shared -o libmyutils.so myutils.o

*.o: *.cpp
		g++ *.cpp $(INC) -c

clean.o:
	rm -f *.o