hw5: hw5.o Graph.o
	g++ -o hw5 hw5.o Graph.o

hw5.o: hw5.cpp
	g++ -c -pedantic -Wall -Werror hw5.cpp

Graph.o: Graph.cpp
	g++ -c -pedantic -Wall -Werror Graph.cpp

clean:
	rm *.o