#include <iostream>
using namespace std;

string name;
int year;
int cost;

int main() {
  // name of the movie 
  name = "harry potter, the order of the phoenix";
  // total income from the movie, in millions
  cost = 946;
  // year the movie came out
  year = 2007;
  
  cout << "The movie " << name << " came out in " << year << "." << endl;
  cout << "The movie had a worldwide gross income of " << cost << " million dollars." << endl;
  cout << endl;
  cout << "I loved the scene where dumbledore fights Voldemort and they cast insane spells." << endl;
  cout << "After that scene, Cornelius fudge said,\"He's back!\" and this was significant" << endl;
  cout << "because they realized that he is coming back." << endl;
  cout << "I also love when Umbridge gets taken by the centaurs then she says," << endl;
  cout << "\"No, enough! I  will have order!\".";

  
  return 0;
}