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

  mergesort(list, 0, listLength - 1);

  cout << endl << "Printing out list..." << endl;
  for(int i = 0; i < listLength; i++) {
    cout << list[i] << " ";
  }

  cout << endl << endl << "HW4 complete." << endl << endl;
  return 0; 
}

void merge(int* list, int low, int high, int middle)
{
  int* temp = new int[(high - low) + 1];
  // counter vars for the least, greatest vals
  int i = low;
  int j = middle + 1;
  int k = 0;

  while (i <= middle && j <= high) {
    if (list[i] < list[j]) {
      temp[k] = list[i];
      k++;
      i++;
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
    temp[k] = list[i];
    k++;
    j++;
  }

  // copying values from temp[] into list[]
  for (int index = low; index <= high; index++) {
    list[index] = temp[index - low];
  }

  delete[] temp;
 }

void mergesort(int* list, int low, int high)
{
  int middle = 0;

  if (low < high) {
    middle = (low + high) / 2;
    mergesort(list, low, middle);
    mergesort(list, middle + 1, high);

    merge(list, low, high, middle);
  }
}
