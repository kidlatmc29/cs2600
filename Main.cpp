// Main.cpp
// Isabel Ovalles

#include <iostream>
#include "Graph.h"

using namespace std;

int main()
{
  char *filename; 
  Graph myGraph;
  
  cout << endl << endl
       << "HW 5 - Graphs" << endl << endl
       << "Please enter a file name to create a graph: ";
  cin >> filename;

  cout << "The file you entered was: " << filename << endl;

  // 2.) Load info into graph from input file
  // 3.) Display adjacency matrix
  // 4.) Display depth first search
  // 5.) Display breadth first search

  cout << "HW 5 completed. Exiting program....." << endl << endl;
  return 0; 
}
