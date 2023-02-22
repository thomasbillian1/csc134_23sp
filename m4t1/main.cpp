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
int square(int num){
  // input: num, an interger
  // output: num squared
  return num*num;
}

int main() {
  // call a function
  int times = 0;
  cout << "How many times should I say Hello? ";
  cin >> times;
  say_hello(times);

  // part 2 -- table of squares
  // the world's first "real program" running on a stored-program 
  // computer (David Wheeler, Cambridge, may 6, 1949)
  int i= 0;
  int max;
  //const int MAX = 10;
  cout << "How many numbers in the table of squares? ";
  cin >> max;
  cout << "Table of squares from 0 to " << max << endl;
  cout << "Number" << "\t" << "square" << endl;
  cout << "---------------------" << endl;
  while (i <= max){
    cout << i << "\t\t" << square(i) << endl;
    i++; // or i = i + 1
  }
}