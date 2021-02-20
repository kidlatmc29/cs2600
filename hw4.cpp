// hw4.cpp
// Ovalles, Isabel
// 2-19-2021

#include <iostream>

using namespace std;

void mergesort(int *list, int low, int high);
// halfs array then calls merge fxn

void merge(int *list, int low, int high, int middle);
// merges two sequences sorted in an array

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

void merge(int* list, int low, int high, int middle)
{
  int temp[high - low + 1], i, j, k;
  i = low; 
  j = 0;
  k = middle + 1; 

  while (i <= middle && k <= high) {
    if (list[i] < list[k]) {
      temp[j] = list[i];
      i++;
      k++;
    } else {
      temp[k] = list[j];
      k++;
      j++;
    }
  } 

  while (i <= middle) {
    temp[k] = list[i];
    k++;
    i++;
  }
  while (j <= high) {
    temp[k] = list[j];
    k++;
    j++;
  }

  // copying values from temp[] into list[]

  for (int i = low; i <= high; i++) {
    list[i] = temp[i - low];
  }
}

void mergesort(int* list, int low, int high)
{

}
