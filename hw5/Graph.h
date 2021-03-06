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
    
    void addEdge(int x, int y);
    // helper function for load. adds a new edge into the adjMatrix. 

    void displayDFS(int vertex, bool *visited);
    // helper function for displayDFS

  public:
    Graph();
    // default constructor.

    ~Graph();
    // deconstructor.

    void load(string filename);
    // creates a graph using input file.

    void display();
    // displays the graph's adjacency matrix

    void displayDFS(int vertex);
    // displays the result of a depth first search starting at the provided
    //  vertex. With a choice, picks the lower number.

    void displayBFS(int vertex);
    // displays the result of a breadth first search starting at the provided
    // vertex. With a choice, picks the lower number.
};
