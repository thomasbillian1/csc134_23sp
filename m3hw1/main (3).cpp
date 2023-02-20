// CSC 134
// M3HW1 
// Thomas Billian
// 2/18/2023

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main() {
//Question 1 Write a very simple chatbot. 
string Answer1;
cout << "Hello, I'm a C++ program!" << endl;
cout << "Do you like me? Please type yes or no." << endl;
  cin >> Answer1;
  
  if (Answer1 == "yes"){
    cout << "That’s great! I’m sure we’ll get along." << endl;
    } else if (Answer1 == "no"){
    cout << "Well, maybe you’ll learn to like me later." << endl;
  } else {
    cout << "If you’re not sure… that’s OK." << endl;
  } 
  cout << endl;
  cout << endl;

  
  // question 2 Updated RECEIPT change. 
  // variables
  double price;  // dollars
  double tax_pct; // example: 8% (0.8)
  double tax_amount; // dollar 
  double total;  // dollars
  double subtotal;
  string item_name = "bourbon steak";
  int item_count = 1;
  int dineIn;
  double dineInTip;
  double tip_Amount;
  double dineInTotal;
  
  // TODO: set price and tax_pct

  // TODI: calculate total
  price = 16.99;
  tax_pct = 0.08;
  subtotal = price * item_count;
  tax_amount = subtotal * tax_pct;
  total = tax_amount + subtotal;
  dineInTip  = .15;
  tip_Amount = dineInTip * total;
  dineInTotal = tip_Amount + total;
  
  cout << fixed << setprecision(2); // from #include <iomanip>
  cout << "welcome to our restaurant." << endl;
  cout << "Enter the price of your meal." << endl;
  cout << price << endl;
  cout << "Please enter 1 if the order is dine-in or 2 if it's to go." << endl;
  cin >> dineIn;
    if (dineIn == 1) {
  cout << "RECEIPT" << endl << "-----------------------" << endl;
  cout << item_count << " " << item_name << " " << "$" << price << endl;
  cout << endl;
  cout << "subtotal " << "\t\t" <<"$" << subtotal << endl;
  cout << endl;
  cout << "tax" << "\t\t\t\t" << "$" << tax_amount << endl;
  cout << endl;
  cout << "Tip" << "\t\t\t\t" << "$" << tip_Amount << endl;
  cout << endl;
  cout << "RECEIPT" << endl << "-----------------------" << endl;
  cout << "total" << "\t\t\t" << "$" << dineInTotal << endl;
  
    } else if (dineIn == 2){
  cout << "RECEIPT" << endl << "-----------------------" << endl;
  cout << item_count << " " << item_name << " " << "$" << price << endl;
  cout << endl;
  cout << "subtotal " << "\t\t" <<"$" << subtotal << endl;
  cout << endl;
  cout << "tax" << "\t\t\t\t" << "$" << tax_amount << endl;
  cout << endl;
  cout << "RECEIPT" << endl << "-----------------------" << endl;
  cout << "total" << "\t\t\t" << "$" << total << endl; 
      }
  cout << endl;
  cout << endl;
  // I NEED HELP WITH QUESTION 2/It's about the first part of the question. 

  
  // Question 3: Create your adventure.
  int Class;
  int Choice;

  cout << "Welcome to Billian's Bizzare adventure."  << endl;
  cout << "Please select your class!" << endl;
  cout << "The four classes are Mage, Archer, Warrior, Paladin." << endl;
  cin >> Class;
    if (Class == 1) { 
    cout << "You have selected to be a Mage!" << endl;
    } else if (Class == 2) {
    cout << "You have selected to be an archer!" << endl;
    } else if (Class == 3) {
    cout << "You have selected to be a warrior!" << endl;
    } else if (Class == 4) {
    cout << "You have selected to be a Paladin!" << endl;
    } else {
    cout << "Please select a class to continue." << endl;
    }
  cout << endl;
  cout << endl;
   cout << "Now that we have a class, we can begin our adventure." << endl;
   cout << "You start your quest by wondering in a hollow forest where you encounter " << endl;
   cout << "a goblin. What will you do?" << endl;
   cout << endl;
  cout << "press 1 to fight, or press any key to run." << endl;
  cin >> Choice;
  if (Choice == 1){
    if (Class == 2)
       cout << "You aim your bow and take a steady shot toward the goblin. You win!";
  } if (Choice == 1) {
    if (Class == 1)
      cout << "You cast a Firebolt at the Goblin, which burns him into ashes. You win!" << endl;
  } if (Choice == 1) {
    if (Class == 3)
    cout << "You swing your mighty battleaxe towards the goblin, and he stands no chance. You Win!" << endl;
      } if (Choice == 1) {
    if (Class == 4) 
      cout << "You used Thunderous Smite on the goblin. You Win!" << endl;
      } else {
      cout << "You decided not to fight the enemy. You lose!" << endl;
      }
  cout << endl;
  cout << endl;

 // question 4: Create a Math practice Sheet
  int question1;
  int digit1;
  int digit2;
  srand(time(0));
  cout << "What is 4 + 5?";
  question1 = ((rand() % 10) + 1);
  cout << endl;
  cout << question1;
  cout << endl;
  if (question1 == 9){
    cout << "Correct!" << endl;
  } else {
    cout << "Incorrect!" << endl;
  }
    
  
  
 

    
}