
all: demo

demo: Point.o Segment.o Triangle.o main.o
	g++ $^ -o demo

Point.o: src/Point.cpp include/Point.h
	g++ -Iinclude -c src/Point.cpp -o Point.o

Segment.o: src/Segment.cpp include/Segment.h
	g++ -Iinclude -c src/Segment.cpp -o Segment.o

Triangle.o: src/Triangle.cpp include/Triangle.h
	g++ -Iinclude -c src/Triangle.cpp -o Triangle.o

main.o: main.cpp
	g++ -Iinclude -c main.cpp -o main.o

clean:
	rm -f *.o demo
