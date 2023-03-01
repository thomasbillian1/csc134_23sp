#include <iostream>
#include <cstdlib> // enables rand() srand()
#include <ctime>   // enables random numbers (rand()) at a given time

using namespace std;
//CSC 134
// M4T2 - menus
// Thomas Billian
// 2/27/2023
// Verson 2 -- started our character creator
// for Thudd

// menu functions
void option_one(){
    //count from 0 to 9
    cout << "Using while() to count" << endl;
    int num = 0;
    while (num < 10){
        cout << num << ",";
        num++;
    }
    cout << endl;
    cout << "Using for() to count" << endl;
    for (int i=0; i<10; i++) {
        cout << i << " ";
    }
    cout << endl;

}
void option_two(){
    // dice roller
    int d6_1, d6_2, d6_3; // 3 dice (6 sided)
    int total; // 3d6
    int seed = time(0);
    srand(seed);
    //roll the dice
    d6_1 = (rand() % 6) + 1; // 0-5, then add one
    d6_2 = (rand() % 6) + 1;
    d6_3 = (rand() % 6) + 1;
    total = d6_1 + d6_2 + d6_3;
    cout << "Rolling 3d6: ";
    cout << d6_1 << " + " << d6_2 << " + " << d6_3;
    cout << " = " << total << endl;
}
void option_three(){
    // sum and average of dice

    // there is no option 4 function
}
int main()
{
    // display a menu
    // have the user choose 1, 2, 3 ,4.
    // do something based on the choice

    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to roll dice" << endl;
    cout << "Press 3 to roll a character" << endl; // not implemented yet
    cout << "Choice: ";
    // print three line menu
    //press 1 to blah etc
    // cin an interger
    // input validation
    int choice;
    cin >> choice;
    // user must pick 1, 2, or 3
    while (choice < 1 || choice > 3){
        cout << "Please choose 1, 2, 3, 4: ";
        cin >> choice;
    }
    if (choice == 1){
        option_one(); // function call
    }
    if (choice == 2){
        option_two();
    }
    if (choice == 3){
        option_three();
    }
    if (choice == 4){
        cout << "Quitting time!" << endl;
    }

    cout << "Thanks for using the menu." << endl;


    return 0;
}
