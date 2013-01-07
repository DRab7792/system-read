all: read

read: read.o
	g++ read.o -o read

read.o: read.cpp
	g++ -c read.cpp -o read.o

clean:
	rm -f *.o read
