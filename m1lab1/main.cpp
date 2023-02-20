#include <iostream>
using namespace std;
  
int main() {
  // simulate an apple orchard
  // owner's name
  string name;
  // how many apples
  int apple_count;
  // cost each
  double apple_cost;
  // cost of all of them
  double total;

  // set our variables
  name = "Thomas"; // you name here
  apple_count = 20;
  apple_cost = .55;
  
  
  cout << "welcome to " << name;
  cout << "'s apple orchard." << endl;
  cout << endl;

  cout << "we have " << apple_count << " apples." << endl;
  cout << "they cost $" << apple_cost << " each." << endl;

  // calculate total cost
  total = apple_count * apple_cost;

  // print total
  cout << "total cost for all apples is: $";
  cout << total << endl;


  
  return 0; // success

}