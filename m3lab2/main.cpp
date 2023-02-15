// CSC 134
// m3lab2
// Thomas Billian
// 2/13/2023
#include <iostream>
using namespace std;

// beginning of the main() method
// functions are blocks of code -- think of them as making new verbs
// (like how to making varibles is making nouns)
// declare the functions first, define them later.
void choose_door1();
void choose_door2();

int main() {
  int choice;

  // ask the question
  cout << "Do you chose door 1 or door 2" << endl;
  cout << "Type 1 or 2: ";
  cin >> choice;

  // using if, make a decision ase on the user's choice
  // todo
  cout << "DEBUG: picked " << choice << endl;
  if (choice == 1){
    choose_door1();
  }
  else if (choice == 2) {
    choose_door2();
  }
  else {
    cout << "You didn't pick any door at all!" << endl;
  }
  cout << "Thank you for playing!" << endl;
  return 0;
} // run this code if user choises door #1
void choose_door1(){
  cout << "You picked Door Number One!" << endl;
  cout << "You won -- A NEW CAR!" << endl;
  cout << "but..." << endl;
  cout << "You have to pick the right key!" << endl;
  cout << "Will you pick the red key or the blue key? ";
  string key;
  string winner = "red";
  cin >> key;
  if (key == winner){
    cout << "Yes! the car starts!" << endl;
  }
  else{
    cout << "You can have the car if you can carry it home!" << endl;
  }
  return; // this is optional
}

// rune this code if user chooses door #2
void choose_door2(){
  cout << "You picked Door Number Two!" << endl;
  cout << "Congrats, you won $3.50!" << endl; 
}
