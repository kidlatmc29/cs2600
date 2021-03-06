// hw5.cpp
// Isabel Ovalles

#include <iostream>
#include "Graph.h"

using namespace std;

int main()
{
  string filename; 
  Graph myGraph;
  
  cout << endl
       << "HW 5 - Graphs" << endl << endl
       << "Please enter a file name to create a graph: ";
  cin >> filename;

  // 2.) Load info into graph from input file
  myGraph.load(filename);

  // 3.) Display adjacency matrix
  cout << endl;
  myGraph.display();

  // 4.) Display depth first search
  cout << "DFS at vertex 0: ";
  myGraph.displayDFS(0);
  cout << endl;
  // 5.) Display breadth first search
  cout << "BFS at vertex 0: ";
  myGraph.displayBFS(0);
  cout << endl << endl;

  cout << "HW 5 completed. Exiting program....." << endl << endl;
  return 0; 
}
