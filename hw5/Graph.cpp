// Graph.cpp
// Isabel Ovalles
// 3-4-2021

#include "Graph.h"

Graph::Graph()
{
  numOfVertices = 0; 
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
  int x;
  int y; 

  input.open(filename);

  if(!input.fail()) {
    input >> numOfVertices; // first number is num of verticies
    adjMatrix = new int*[numOfVertices]; // makes an empty 2-D array
    for(int i = 0; i < numOfVertices; i++) {
      adjMatrix[i] = new int[numOfVertices];
    }

    while(input >> x) {
      input >> y;
      addEdge(x, y); // filling in adjMatrix
    }
  }
  input.close();
}

void Graph::addEdge(int x, int y)
{
  adjMatrix[x][y] = 1; 
  adjMatrix[y][x] = 1;
}

void Graph::display()
{
  cout << "Adjacency Matrix:" << endl;
  for(int row = 0; row < numOfVertices; row++) {
    for(int col = 0; col < numOfVertices; col++) {
      cout << adjMatrix[row][col] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void Graph::displayDFS(int vertex)
{
  bool *visited = new bool[numOfVertices];
  for(int i = 0; i < numOfVertices; i++) {
    visited[i] = false; 
  }
  displayDFS(vertex, visited);
  delete[] visited;
}

void Graph::displayDFS(int vertex, bool visited[])
{
  cout << vertex << " ";
  visited[vertex] = true;
  for(int i = 0; i < vertex; i++) {
    if(adjMatrix[vertex][i] == 1 && (!visited[i])) {
      displayDFS(i, visited);
    }
  }
}

