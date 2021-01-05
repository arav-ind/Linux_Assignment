LIBPATH=${PWD}/src

INC = -Iinclude\

LDFLAGS = -lbitmask -lmystring -lmyutils

all.out: test.o *.so 
	g++  -L${LIBPATH} test.o -lgtest -lgtest_main -lpthread -o dynamic.out ${LDFLAGS}  

test.o: test.cpp 
	g++ test.cpp $(INC) -c

outfile: 
	LD_LIBRARY_PATH=${LIBPATH} ./dynamic.out

*.so:
	make -C src

clean:
	rm -rf *.o *.out
