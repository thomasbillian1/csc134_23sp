// CSC 134
// Thomas Billian
// M4LAB1
// 03/6/2023

#include <iostream>

using namespace std;

int main()
{
    // make a grid in ASCII text
    int rows, columns;
    cout << "How many rows? ";
    cin >> rows;
    cout << "How many columns? ";
    cin >> columns;
    cout << "step 1: Print one row" << endl;
    for (int i=0; i<rows; i++){
        cout << "*";
    }
    cout << endl; // entire loop is on the same line

    cout << "Step 2: print one column" << endl;
    // columns go up to down
    for (int i=0; i<columns; i++){
        cout << "*" << endl;
    }
    cout << "Step 3: nested loops to print the grid" << endl;
    for (int i=0; i<columns; i++){
        // print one row at a time
        for (int j=0; j<rows; j++){
            cout << "*" << " ";
        }
        cout << endl; // finish the row
    }






    return 0;
}
