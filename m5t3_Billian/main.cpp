// CSC 134
// M5T3
// Thomas Billian
// 3/22/2023

/*
  M5T3 - array
  */
#include <iostream>
using namespace std;
int main() {
cout << "arrays in use\n";
  cout << "Part 1 - Print and Total" << endl;
  const int SIZE = 6;
  int stats[SIZE] = {18,12,6,3,2,10};
  int total = 0;
  // loop thought, find the total
  for (int i=0; i<SIZE; i++){
    cout << stats[i] << ", ";
    total += stats[i];
  }
  cout << endl;
  cout << "Total = " << total << endl;

  cout << "Part 2 - User input" << endl;
  // ask for values 
  // find: total, average, max, and min
  int values[SIZE]; // this leaves each value undifined 
  int total_values = 0;
  int average, min, max;
  // let user enter values
  for (int i=0; i<SIZE; i++){
    cout << "Enter value #" << i+1 << ": ";
    cin >> values[i];
  }
  // print values, find stats
  // initilizes max, min to the first element
  max = min = values[0];
  for (int value : values){
    cout << value << endl;
    total_values += value;
    if (value > max){
      max = value; // update max (so far)
    }
    if (value < min){
      min = value; // update min (so far)
    }
    //debug print
    // cout << " max so far= " << max << ", min so far=" << min << endl;
  }
  average = total_values / SIZE;
  cout << "Toatal = " << total_values << endl;
  cout << "average = " << average << endl;
  cout << "Min values = " << min << endl;
  cout << "Max values = " << max << endl;

// PART 3: TOTO
// Partially filled array -- allows user to choose size up to 20.




  
}