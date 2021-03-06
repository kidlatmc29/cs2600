// Graph.h
// Isabel Ovalles

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Graph {
  private:
    int** adjMatrix = nullptr; // 2-D array for adjacency matrix of the graph
    int numOfVertices; 
    
  public:
    Graph();
    // default constructor.
    // Pre: None.
    // Post: sets numOfVertices to 0 and creates an empty adjMatrix.

    ~Graph();
    // deconstructor.
    // Pre: None.
    // Post: deallocates adjMaxtrix and sets numOfVertices to 0.

    void load(string filename);
    // creates a graph using input file.
    // Pre: Assuming filename is correct and the file is properly formatted.
    // Post:

    void display();
    // displays the graph's adjacency matrix
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
};
