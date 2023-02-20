// CSC 134
// m3lab3
// thomas billian
// 2/15/23

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main() {
  int die1, die2, roll; // roll is 2d6
  int seed;             // will use time(0) later
  char any_key;         // for cin.get()
  bool winner = false;
cout << "welcome to the craps table!\n";

  //cout << "What's your lucky number? ";
  //cin >> seed;
  // seed is truly random
  seed = time(0);
  // cout << "DEBUG: time(0) = " << seed << endl;
  srand(seed);

  // start game
  cout << "Let's roll! (press Enter)" << endl; // TODO 'press any key'
  die1 = (rand() % 6) + 1;
  die2 = (rand() % 6) + 1;
  roll = die1 + die2;

  cout << "You rolled: (" << die1 << " + " << die2 << ") -> "; 
  cout << roll << endl;
  // DEBUG: just use lucky number as roll
  //roll = seed; // take this out!
  // ingore this, just looking for ENTER

  // dertermine outcome!
  switch (roll) {
    // instant losses
    case 2:
    cout << "Snake eyes!" << endl;
    winner = false;
    break;
    case 12:
    cout << "Twelve - Boxcars!" << endl;
    break;

    // instant wins
    case 7:
    cout << "Lucky Number Seven!" << endl;
    winner = true;
    break;
    case 11:
    cout << "Eleven! Eleven's a winner!" << endl;
    break;
    // todo: add 11

    // to be continued (point rolls)

    default:
    cout << "Rolled: " << roll << endl;
    cout << "Continue playing, point is "<< roll << endl;
    cout << "But we'll just call it a draw." << endl;
    // we should have a subroutine (function) for this
  }
  if (winner) {
    cout << "You won!" << endl;
  } else {
    cout << "sorry -- you didn't win." << endl;
  }

 // end game
  cout << "Thank you for plaing!" << endl;
  
  return 0;
}