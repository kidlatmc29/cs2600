// Ovalles, Isabel
// CPSC 2600 - hw3

#include <iostream> 
using namespace std;

const int U = 1111111111;
// Universal set U =  {0,1,2,3,4,5,6,7,8,9}
const int STOP = -1; 

int main()
{
  int setA, setB = 0; 
  int userInput;

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
  cout << "this is set A " << setA << endl;

  cout << "this is set B " << setB << endl;

 // find union of a and b 
 // find interesction of a and b
 // find difference of a and b


  return 0;
}
