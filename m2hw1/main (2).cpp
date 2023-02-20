#include <iostream>
#include <iomanip>
using namespace std; 

int main() { 
string accountName = "Thomas Billian"; 
double Deposit = 20.5;
double Withdraw = 50.1;
double accountBalance = 230.50;
long long int accountNumber = 1012234099;
double finalBalance;

cout << "question 1: Account Balance" << endl;
cout << "Name of the owner for this account? " << endl;
cout << accountName;
cout << endl;
cout << "Hello " << accountName << ". Your current account balance is " << accountBalance << "$" << endl;
cout << "How much would you want to deposit? " << endl;
cout << endl;
cout << "Deposit " << "\t\t\t" << Deposit << endl;
cout << "current Balance " << "\t" << accountBalance << endl;
cout << "-------------------------------" << endl;
cout << "Your ending balance is now " << accountBalance + Deposit << endl;
cout << endl;
cout << "How much would you like to withdraw? " << endl;
cout << endl;
cout << "Withdraw " << "\t\t\t" << Withdraw << endl;
cout << "Current balance " << "\t" << accountBalance + Deposit << endl;
cout << "-------------------------------" << endl;
cout << "Your Ending balance is now " << (accountBalance + Deposit) - Withdraw << endl; 
finalBalance = (accountBalance + Deposit) - Withdraw;
cout << endl;
cout << endl;
cout << accountName << "\t\t\t" << "Account Number" << "\t\t\t" << "Ending balance" << endl;
cout << "--------------------------------------------------------------" << endl;
cout << "\t\t\t\t\t\t" << accountNumber << "\t\t\t\t\t" << finalBalance << endl;
cout << endl;


// on to the next question 

  
  
  cout << "Question 2: Use the M2LAB1 program as a base for this question." << endl;
    // constants for cost and amount charged

    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // VARIBLES

     double length;
     double width;
     double height;
     double volume;
     double cost;
     double charge;
     double profit;

    // setprecision(2) to get desired output formatting for numbers

    cout << setprecision(2)<< fixed << showpoint;

    cout << "Enter the dimensions of the crate (in feet): " << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

// calculate the create's volume. the cost to produce it,
// the charge to the customer, and the profit

    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // display the calculated data

    cout << "The volume of the crate is: ";
    cout << volume << " cubic feet." << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customers: $" << charge << endl;
    cout << "Profit: $" << profit << endl; 

  cout << endl;
  cout << endl;

  cout << "question 3: You are throwing a pizza party. Each visitor should get three slices " << endl; 
  cout << "of pizza." << endl;
    int numPizzas = 3;
    int numSlicesPerPizza = 8;
    int numVisitors = 4; 
    int pizzaLeftover;
  cout << "How many pizzas were ordered?" << endl;
  cout << numPizzas << endl;
  cout << "How many slices per pizza?" << endl;
  cout << numSlicesPerPizza << endl;
  cout << "How many visitors?" << endl;
  cout << numVisitors << endl;
  pizzaLeftover = (numPizzas * numSlicesPerPizza) / (numVisitors * 3);
  cout << "There are " << pizzaLeftover << " pizza slices left over from the party." << endl;

  cout << endl;
  cout << endl; 

  string Letsgo = "Let's go";
  string FTCC = "FTCC";
  string Trojans = "Trojans";
  string cheerOne = Letsgo + " " + FTCC;
  cout << "Question 4: Since FTCC has sports teams, you've been hired to write a cheering " << endl; 
  cout << "program" << endl;
  cout << cheerOne << endl;
  cout << cheerOne << endl;
  cout << cheerOne << endl;
  
  string cheerTwo = Letsgo + " " + Trojans;
  cout << cheerTwo << endl;
  


 
}