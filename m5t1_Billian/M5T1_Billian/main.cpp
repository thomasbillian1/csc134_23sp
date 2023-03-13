
#include <iostream>
using namespace std;
/*
// CSC 134
// M5T1
// Thomas Billian
// 03/13/2025
purpose: to use a few void and value returning functions

*/
// we can either define our functions before we need them,
// or declare them all at the top.
// the second option is cleaner.
// so, we put all the "fucntions signitures' up top, above main.

void say_hello();             // prints hello
int double_a_number(int num); // returns number times 2
int add(int  num1, int num2); // returns sum of 2 ints
double add(double num1, double num2);
int main()
{
    //cout << "Hello world!" << endl;
    say_hello();
    int num = double_a_number(2);
    return 0;
}
 // define functtions. like dictionary, the definition is the
 // long version.
 void say_hello(){
     // just print hello to stdout
 cout << "Hello!" << endl;
 int my_num =3;
 cout << my_num << " doubled is: " << double_a_number(my_num) << endl;
 cout << "Give me two ints: ";
 int first, second;
 cin >> first >> second;


 int sum = add(first,second);
 cout << first << " + " << second << " = ";
 cout << sum << endl;

 double deci1, deci2;
 cout << "give me two doubles: ";
 cin >> deci1 >> deci2;

 cout << deci1 << "+" << deci2 << "=" << (deci1+deci2);
 return; // a void return is implied

 }
int double_a_number(int num){
   /*
      input: any interger
      output: the int times two
   */
   // either way is ok
   // return num*2;
    int answer = num*2;
    return answer;
}
int add(int num1, int num2){
    /*
    input two intergers
    output: their sum
    */
    int sum = num1+num2;
    return sum;
}
double add(double num1, double num2){
double sum = num1+num2;
return sum;
}
