// Ovalles, Isabel
// CPSC 2600 - hw3

#include <iostream> 
#include <string>
using namespace std;

const int CARDINALITY = 10;
const int STOP = -1; 

void printSet(int bitstring);

void printSetString(int bitstring);

int main()
{
  int setA, setB = 0; 
  int userInput, ABunion, ABint, ABdiff, notB;

  cout << endl << endl << "Welcome to hw3...." << endl;

  while(userInput != STOP) { // Universal set =  {0,1,2,3,4,5,6,7,8,9}
    cout << "Please enter a value in set A (or -1 to stop): ";
    cin >> userInput;
    for(int i = 0; i <= userInput; i++) {
      setA |= (1 << userInput);
    }
  }

  userInput = 0; 
  cout << endl;

  while(userInput != STOP) {
    cout << "Please enter a value in set B (or -1 to stop): ";
    cin >> userInput;
    for(int i = 0; i <= userInput; i++) {
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
  cout << endl;
  
  cout << "Exiting hw3..." << endl << endl;
  return 0; 
}

void printSet(int bitstring)
{
  int setTemp = bitstring; 
  cout << "{ ";
  for(int i = 0; i < CARDINALITY; i++) {
    if(1 << i & setTemp) {
      cout << i << " ";
    }
  }
  cout << "}" << endl;
}