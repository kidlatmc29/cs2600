// Graph.cpp
// Isabel Ovalles
// 3-4-2021

#include "Graph.h"

Graph::Graph()
{
  numOfVertices = 0; 
  adjMatrix = new int*[0]; // makes an empty 2-D array
}

Graph::~Graph()
{
  for(int i = 0; i < numOfVertices; i++) {
    delete[] adjMatrix[i];
  }
  delete adjMatrix;
  adjMatrix = nullptr;
}

void Graph::load(string filename)
{
  ifstream input; 
  string line; 

  input.open(filename);

  if(!input.fail()) {
    cin >> numOfVertices; // first num in file is numOfVertices
  }

}

void Graph::display()
{
  cout << "The number of verticies in this graph is " << numOfVertices << endl;
}
