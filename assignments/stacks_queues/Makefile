OBJECTS = stack.o Node.o OList.o 
CXXFLAGS = -std=c++11

main: main.o $(OBJECTS) 
	g++ -o main main.o $(OBJECTS)

tests: tests.o stack.o OList.o Node.o 
	g++ -o tests tests.o stack.o OList.o Node.o 

tests.o: tests.cpp doctest.h
	g++ -c tests.cpp

main.o: main.cpp stack.h
	g++ -c main.cpp

stack.o: stack.cpp stack.h
	g++ -c stack.cpp

OList.o: OList.cpp OList.h
	g++ -c OList.cpp

Node.o: Node.cpp Node.h
	g++ -c Node.cpp

clean:
	rm -f *.o
