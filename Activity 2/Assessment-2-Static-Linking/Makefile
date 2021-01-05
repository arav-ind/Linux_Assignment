LIBPATH=${PWD}/src

INC = -Iinclude\

LDFLAGS = -lbitmask -lmystring -lmyutils

all.out: test.o *.a
	g++  -L${LIBPATH} test.o -lgtest -lgtest_main -lpthread -o static.out ${LDFLAGS}  -static-libgcc -static-libstdc++

test.o: test.cpp 
	g++ test.cpp $(INC) -c

*.a:
	make -C src

clean:
	rm -rf *.out
