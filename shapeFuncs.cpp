#include <iostream>
#include <string>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision
#include <cmath> //for calculations
#include "utility.h"

using namespace std;


#include "shapes.h"
#include "shapeFuncs.h"
#include "utility.h"

// Compute distance between two points

double distanceBetween(Point p, Point q) {
  double distance;
  distance = sqrt(pow(p.x-q.x, 2)+pow(p.y-q.y, 2));
  return distance; 
}

 
// The function initPoint below illustrates passing a struct by pointer.
// Inside this function:
//  p   is the address of the struct Point
// (*p) refers to the struct Point itself (we dereference the pointer)
// (*p).x refers to the x member of the point
// (*p).y refers to the y member of the point
// p->x is a shortcut for (*p).x ( -> means deference AND THEN go inside the struct)
// p->y is a shortcut for (*p).y ( -> means deference AND THEN go inside the struct)


void initPoint(struct Point *p, double xVal, double yVal) {
  // Precondition: structure p has two double values, a x and y value, 
  // and xVal and yVal have double values. 
  // Postcondition: structure p has x value equal to xVal and y value
  // equal to yVal.
  (p->x) = xVal;
  (p->y) = yVal;
  return;
}


string pointToString(Point p, int precision) {
  ostringstream oss;
  oss << setprecision(precision); // set precision to 3 decimal places
  oss << "(" << p.x << "," << p.y << ")";
  return oss.str();
}

string boxToString(Box b, int precision) {
  
  // SAMPLE FORMAT: [ul=(3.4,-5),w=5,h=7] (without the []s)
  
  return "stub!"; // TODO: Delete this line and comment and replace with appropriate code
}
 


bool pointsApproxEqual(Point p1, 
		       Point p2, 
		       double tolerance) {
  // Two points are approximately equal if the distance between them
  // is less than our tolerance.  (If we want to test for 
  // exact equality, we can pass in a value of zero.)

  return distanceBetween(p1,p2) < tolerance;

}

bool boxesApproxEqual(Box b1, Box b2, double tolerance) {
  bool ulApproxEqual, widthApproxEqual, heightApproxEqual;
  // Two boxes are approximately equal if their upper left corners are approximately 
  // equal, and if their corresponding widths and height are approx equal.

  if(approxEqual(b1.ul.x, b2.ul.x, tolerance) && approxEqual(b1.ul.y, b2.ul.y, tolerance)){
    ulApproxEqual = true;
  }
  else ulApproxEqual = false;
  widthApproxEqual = approxEqual(b1.width, b2.width, tolerance);
  heightApproxEqual = approxEqual(b1.height, b2.height, tolerance);
  
  // You may find it helpful to abstract out an "approxEqual" function that takes
  // two parameters of type "double".  Put the prototype in your utility.h 
  // and the definition in your utility.cpp file.

  if(ulApproxEqual && widthApproxEqual && heightApproxEqual){
    return true;
  }
  
  return false; 
}


// Now write a function to initialize a box.
// You'll need to initialize the upper left x and y,
// the width and the height.
// Note: there is a struct Point inside the struct Box.
// So here's a clue: For the x value, use (*b).ul.x or (b->ul).x 
//  The y value is similar.
// There is also a way to "reuse" initPoint, if you are feeling 
//  confident in your understanding of pointers and structs.

void initBox(struct Box *b, double ulx, double uly, double w, double h)
{
  return; // @@@ For a void function a "naked return" is a "do nothing" stub
}


double areaOfBox(Box b) {
  return -42.0;  /* stub---make sure all tests fail initially */
  // you can use b.width to access width, and b.height to access height
}
