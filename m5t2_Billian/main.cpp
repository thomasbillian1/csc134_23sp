#include <iostream>
using namespace std;
/*
 csc134
 m5t2
 thomas billian 
 3/15/2023
  */

int square(int num);
void print_answer(int num, int num_squared); // one line of the table

int main() {
  cout << "This program prints a squares table." << endl;
  int num, num_squared;
  int i;
  const int size = 10;
  for (int i =1; i <= 10; i++){
  print_answer(i, square(i));
  }

}

// definitons
int square(int num){
// returns the square of a given int
    return num * num;
  }
  
void print_answer(int num, int num_squared) {
  int i; 
  cout << num << "\t\t" << num_squared << endl;
  
  // prints one line of the squares table with tabs
  // for example: "5   25\n"

  // return is implied
}