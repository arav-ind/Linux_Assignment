INC = -I../include

all: libmystring.a libbitmask.a libmyutils.a clean.o

libmystring.a: *.o
	ar rc libmystring.a mystring.o

libbitmask.a: *.o
	ar rc libbitmask.a bitmask.o 

libmyutils.a: *.o
	ar rc libmyutils.a myutils.o

*.o: *.cpp
		g++ *.cpp $(INC) -c

clean.o:
	rm -f *.o