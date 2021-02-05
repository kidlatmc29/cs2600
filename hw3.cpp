// Ovalles, Isabel
// CPSC 2600 - hw3

#include <iostream> 
using namespace std;

const int U = 1111111111;
const int CARDINALITY = 10;
// Universal set U =  {0,1,2,3,4,5,6,7,8,9}
const int STOP = -1; 

void printSet(int bitstring);

int main()
{
  int setA, setB = 0; 
  int userInput, ABunion, ABint, ABdiff, notB;

  while(userInput != STOP) {
    cout << "Please enter values in set A or -1 to stop: ";
    cin >> userInput;
    for(int i = 0; i < userInput; i++) {
      setA |= (1 << userInput);
    }
  }

  userInput = 0; 
  cout << endl << endl;

  while(userInput != STOP) {
    cout << "Please enter values in set B or -1 to stop: ";
    cin >> userInput;
    for(int i = 0; i < userInput; i++) {
      setB |= (1 << userInput);
    }
  }

  cout << endl << endl;
  cout << "set A: ";
  printSet(setA);
  cout << endl;

  cout << "set B: ";
  printSet(setB);
  cout << endl << endl;

  cout << "Union of A and B: ";
  ABunion = setA | setB;
  printSet(ABunion);

  cout << "Intersection of A and B: ";
  ABint = setA & setB;
  printSet(ABint);

  cout << "Difference of A and B: ";
  notB = ~setB;
  ABdiff = setA & notB; 
  printSet(ABdiff);
  cout << endl << endl;
  
}

void printSet(int bitstring)
{
  string set = "{";

  for(int i = 0; i < CARDINALITY; i++) {
    if (1 << i & bitstring) {
      set += i + ", ";
    }
  }
  set += "}";
  cout << set << endl;
}