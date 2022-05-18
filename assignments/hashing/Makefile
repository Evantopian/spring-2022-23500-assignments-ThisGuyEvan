OBJECTS = Dictionary.o List.o Node.o Person.o
CXXFLAGS = -std=c++11

main: main.o $(OBJECTS)
	g++ $(CXXFLAGS) -o main main.o $(OBJECTS)

main.o: main.cpp Dictionary.h 
	g++ -c main.cpp


test: test.o $(OBJECTS)
	g++ -c $(CXXFLAGS) -o tests test.o $(OBJECTS)

test.o: test.cpp doctest.h
	g++ -c test.cpp 


Person.o: Person.cpp Person.h
	g++ -c Person.cpp


Node.o: Node.cpp Node.h
	g++ -c Node.cpp

List.o: List.cpp List.h Node.h
	g++ -c List.cpp

Dictionary.o: Dictionary.cpp Dictionary.h List.h Person.h
	g++ -c Dictionary.cpp


clean:
	rm -rf *.o main tests
