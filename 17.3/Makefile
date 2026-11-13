all: libutil.a

Logger.o: src/Logger.cpp include/Logger.h
	g++ -fPIC -Iinclude -c src/Logger.cpp -o Logger.o

Config.o: src/Config.cpp include/Config.h
	g++ -fPIC -Iinclude -c src/Config.cpp -o Config.o

libutil.a: Logger.o Config.o
	ar rcs libutil.a Logger.o Config.o

libutil.so: Logger.o Config.o
	g++ -shared -o libutil.so Logger.o Config.o

testLib: testLib.cpp libutil.a
	g++ testLib.cpp -Iinclude -L. -lutil -o testLib

clean:
	rm -f *.o *.a *.so testLib