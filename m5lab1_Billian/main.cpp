#include <iostream>
#include <cstdlib>  // Enables rand(), srand()
#include <ctime>    // Enables use of time() function
#include <fstream>  // file streams
using namespace std;
/*
CSC 134
M5Lab1B
Thomas Billian
3.20.23
*/

/*
Assignment: M5LAB1B
Based on M5LAB

See also the PDF in M5LAB1B

Our goal is to make a character, but right now we have
to pass six stats around:
STR, DEX, INT, WIS, CON, CHA

instead we'd like to pass an array of ints representing all six.
Progress: 
- M4T2 (basic menu)
- M4T3 (Character roller)
- M5LAB1 (For us, the same thing as M4T3)

Now we're adding some features.
Menu Item 1: Counting Test
Menu Item 2: Dice Roller
Menu Item 3: Running Total & Average
Menu Item 4: Quit Program
For Dice Roller, we'll start by rolling a six sided die (1d6) as before. Next, we'll roll 3d6 (add three dice together). This is the output of the dice roller.
For Running Total and Average, we'll do this:

    Roll 3d6 six times
    Add up the total (using the "running total" example)
    Find the average

BONUS: If the character is good enough, save to a file.
*/


/*

    CLASS NOTES GO HERE
you don't have to copy this (but you can if you want)
This repository: https://github.com/norrisaftcc/csc134_23sp
The latest version of this project: https://github.com/norrisaftcc/csc134_23sp/blob/main/M4T2_norris/main.cpp


*/
// constants
const int NUM_STATS = 6;  // STR, DEX, INT, WIS, CON, CHA
// This is used to avoid "magic numbers" (I might add more stats later)

// Utility function
// TODO: move save_stats to its own function

// menu functions
void option_one() {
    // count from 0 to 9
    cout << "Using while() to count" << endl;
    int num = 0;
    while (num < 10) {
        cout << num << " ";
        num++;
    }
    cout << endl;

    cout << "Using for() to count" << endl;
    for (int i=0; i<10; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void option_two() {
    // dice roller
    int d6_1, d6_2, d6_3; // 3 dice (6 sided)
    int total; // 3d6
    int seed = time(0);
    srand(seed);
    // roll the dice
    d6_1 = (rand() % 6) + 1; // 0-5, then add one
    d6_2 = (rand() % 6) + 1;
    d6_3 = (rand() % 6) + 1;
    total = d6_1 + d6_2 + d6_3;
    cout << "Rolling 3d6: ";
    cout << d6_1 << " + " << d6_2 << " + " << d6_3;
    cout << " = " << total << endl;
}


void option_three() {
    // sum and average of dice
    //  roll 3d6, six times
    //  find the sum and average
    //  reroll if it's not high enough (average <9)
    // For M5, we're storing these stats in an array
    int stats[NUM_STATS];           // STR, DEX, INT, WIS, CON, CHA
    int total = 0;          // the total of all stats
    int d6_1, d6_2, d6_3;   // 3 dice (6 sided)
    int roll;               // 3d6 (one stat roll)
    int seed = time(0);
    srand(seed);
    for (int i=0; i < NUM_STATS; i++) {
        // roll dice
        d6_1 = (rand() % 6) + 1; // 0-5, then add one
        d6_2 = (rand() % 6) + 1;
        d6_3 = (rand() % 6) + 1;
        roll = d6_1 + d6_2 + d6_3;
        // store the roll in the correct spot in the array
        stats[i] = roll;
        // show individual rolls
        // print result
        cout << "Roll #" << i << ": ";
        cout << d6_1 << " + " << d6_2 << " + " << d6_3;
        cout << " = " << roll << endl;
    }
    // now step back through the array
    // print them, and count the total
    // this is a "range based" for loop
    // (in python, "for stat in stats")
    // stat is an integer, stats is an array of integers
    for (int stat : stats) {
        // print result
        cout << "STAT"": ";
        cout << " = " << stat << endl;
        // add to the total
        total += stat;
    }
 // print the total
    cout << "total of all stats: " << total << endl;
    int average = total / 6; // note: we're dropping the decimal
    cout << "average roll = " << average << endl;
    if (average <= 9) {
        cout << "Low stats, you can reroll." << endl;
    } else {
        cout << "A playable character! good luck." << endl;
        cout << "Do you want to save this character to file? (y/n)";
        //save_character(stats); TODO
        char answer;
        cin >> answer;
        if (answer == 'y') {
          // we're going to try to save the character to file
          // TODO: make sure we write to the file, not the console
          // character is in the array stats
          ofstream output_file; 
          string filename = "char.txt"; // the filename

          // open the file to write 
          output_file.open(filename);
          // write each line one at a time
          for (int i=0; i < NUM_STATS; i++) {
            output_file << stats[i] << endl;
          }
          // close the file
          output_file.close();
        }
    }
}

void option_four() {
  // load a character from file
  ifstream input_file;
  string filename = "char.txt";
  int stat; // the current stat we're reading
  cout << "Reading file " << filename << endl;

  // open file
  input_file.open(filename);
  while (input_file >> stat) {
    cout << stat << endl; 
  } 
  input_file.close();
    cout << "Finished reading file." << endl;
}

// main menu
int main()
{
    // display a menu.
    // have the user choose 1, 2, 3, or 4.
    // do something based on the choice

    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to roll dice" << endl;
    cout << "Press 3 to roll a character" << endl; 
    cout << "Press 4 to load a character" << endl;
    cout << "Press 0 to quit" << endl;
    cout << "Choice: ";
    // input validation
    int choice;
    cin >> choice;
    // user must pick 1, 2, 3, or 4
    while (choice > 0 && choice < 4) {
        cout << "Please choose 0, 1, 2, 3, or 4: ";
        cin >> choice;
    
        // if we get here, we know choice is valid
        if (choice == 1) {
            option_one(); // function call to count
        }
        if (choice == 2) {
            option_two(); // the dice roller
        }
        if (choice ==3) {
            option_three();
        }
        if (choice ==4) {
            option_four();
        }
        if (choice == 0) {
          cout << "Goodbye" << endl;
        }
    }

    cout << "Thanks for using the menu." << endl;
    return 0;
}