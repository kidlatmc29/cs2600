#Graph.h
#Isabel Ovalles

#include <iostream>

using namespace std;

class Graph {
  private:
    
  public:
    Graph();
    // default constructor
    // Pre: None.
    // Post: Creates an empty Graph

    ~Graph();
    // deconstructor
    // Pre: None.
    // Post:

    void load(char* filename);
    // creates a graph using input file
    // Pre:
    // Post:

    void display();
    // displays the graph's adcency matrix
    // Pre:
    // Post:

    void displayDFS(int vertex);
    // displays the result of a depth first search starting at the provided
    //  vertex. With a choice, picks the lower number.
    // Pre:
    // Post:

    void displayBFS(int vertex);
    // displays the result of a breadth first search starting at the provided
    // vertex. With a choice, picks the lower number.
    // Pre:
    // Post:
}
