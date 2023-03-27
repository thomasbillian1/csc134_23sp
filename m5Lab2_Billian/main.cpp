// CSC 134
// M5Lab2
// Thomas Billian, Laura Jackson
// 3/27/2023

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength(){ // This asks user for length, & returns length
  double length;
  cout << "Enter the length of the rectangle: " << endl;
  cin  >> length;
  return length;
}

double getWidth(){  // This asks user for width, & returns width
  double width;
  cout << "Enter the width of the rectangle: " << endl;
  cin  >> width;
  return width;
}

double getArea(double length, double width){  // This function calculates area of a rectangle
  double area;
  area = length * width;
  cout << "Enter the area of the rectangle: " << endl;
  cout << area << endl;
  return area;
}
double displayData(double length, double width, double area){  // Displays length, width, & area of rectangle
  cout << "The length is " << length 
  << ", width is " << width 
  << ", and the area is " << area << "." << endl;
  return 0;
}
  
int main() {
  // This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length, width, area;     // The rectangle's width
// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
          
   // Get the rectangle's length.
    length = getLength();
   
   // Get the rectangle's width.
    width = getWidth();
   
   // Get the rectangle's area.
    area = getArea(length, width);
   // area = getArea(getLength(), getWidth());
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}
