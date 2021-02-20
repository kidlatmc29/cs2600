// hw4.cpp
// Ovalles, Isabel
// 2-19-2021

#include <iostream>

using namespace std;

void mergesort(int *list[], int l, int r);
// sorting here

void merge(int *list[], int l, int m, int r);
// merges two sequences of list[]

int main()
{
  int* list;
  int userInput = 0;
  int listLength = 0;
  
  cout << endl << endl<<  "HW 4" << endl << endl;
  cout << "How many integers in your list?: ";
  cin >> listLength;

  list = new int[userInput];
  for(int i = 0; i < listLength; i++) {
    cout << "Enter a value in the list: ";
    cin >> userInput;
    list[i] = userInput;
  }

  // merge sort goes here

  cout << endl << "Printing out list..." << endl;
  for(int i = 0; i < listLength; i++) {
    cout << list[i] << " ";
  }

  cout << endl << endl << "HW4 complete." << endl << endl;
  return 0; 
}