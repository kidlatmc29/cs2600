// Ovalles, Isabel
// CPSC 2600 - hw3

#include <iostream> 
using namespace std;

const int U = 1111111111;
// Universal set U =  {0,1,2,3,4,5,6,7,8,9}
// decimal form - 1023
const int STOP = -1; 

int main()
{
  int setA, setB = 0; 
  int userInput;
  int setTemp;

  while(userInput != STOP) {
    cout << "Please enter values in set A or -1 to stop: ";
    cin >> userInput;
    // build the binary string here
    for(int i = 0; i < userInput; i++) {
      setA |= (1 << userInput);
    }
  }

  userInput = 0; 
  cout << endl << endl;


  while(userInput != STOP) {
    cout << "Please enter values in set B or -1 to stop: ";
    cin >> userInput;
    // build the binary string here??? 
    for(int i = 0; i < userInput; i++) {
      setB |= (1 << userInput);
    }
  }

 // print set a and b 
  cout << "set A: " << setA << endl;
  setTemp = setA; 
  cout << "{ "; 
  for(int i = 0; i < 10; i++) {
    if( 1 << i & setTemp) {
      cout << i << ", ";
    }
  }
  cout << "}" << endl;
 
  cout << "set B: " << setB << endl;
  setTemp = setB; 
  cout << "{ "; 
  for(int i = 0; i < 10; i++) {
    if( 1 << i & setTemp) {
      cout << i << ", ";
    }
  }
  cout << "}" << endl;
 // find union of a and b 
 // find interesction of a and b
 // find difference of a and b


  return 0;
}
