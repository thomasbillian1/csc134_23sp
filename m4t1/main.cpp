// csc 134
// M4T1 loops
//thomas billian
// 2/22/23
// purpose of the program is to demonstrate varios uses of whiles

#include <iostream>
using namespace std;


// define some functions we use in main
void say_hello(int count){
  // repeat count times
  int i=0; // "index"
  while (i < count) {
  cout << "hello #" << i+1 << endl;
    i++; // count up
    }
  return; // for void functions, return is optional (implied) 
}

int main() {
  // call a function
  int times = 0;
  cout << "How many times should I say Hello? " << endl;
  cin >> times;
  say_hello(times);
}