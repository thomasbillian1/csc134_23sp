#include <iostream>
#include <iomanip>
using namespace std;

/* This program should take the price of a meal, which is $5.99, and print out a simple text receipt. 
It should include:
The price before tax
The amount of tax owed (8%)
The total including tax

possible extra features:
-name of menu item
- pretty-printing the prices as $xx.yy
*/


int main() {

  // variables
  double price;  // dollars
  double tax_pct; // example: 8% (0.08)
  double tax_amount; // dollar 
  double total;  // dollars
  double subtotal;
  string item_name = "cheeseburgers";
  int item_count = 1;
  // TODO: set price and tax_pct

  // TODI: calculate total
  price = 4.99;
  tax_pct = 0.08;
  subtotal = price * item_count;
  tax_amount = subtotal * tax_pct;
  total = tax_amount + subtotal;


  
  cout << "welcome to our restaurant." << endl;
  cout << "your ordered 1 " << item_name << endl;
  // set numbers to 2 decimal laces
  cout << fixed << setprecision(2); // from #include <iomanip>

  cout << "RECEIPT" << endl << "-----------------------" << endl;
  // in order: item count and name, subtotal, tax, total
  cout << item_count << " " << item_name << " " << "$" << price << endl;
  cout << endl;
  cout << "subtotal " << "\t\t" <<"$" << subtotal << endl;
  cout << endl;
  cout << "tax" << "\t\t\t\t" << "$" << tax_amount << endl;
  cout << endl;
  cout << "RECEIPT" << endl << "-----------------------" << endl;
  cout << "total" << "\t\t\t" << "$" << total << endl;
  
  
  // tax in $ is price * tax_pct


  return 0;






  
}