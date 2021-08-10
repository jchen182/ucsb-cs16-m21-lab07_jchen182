#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1,b2;

  initBox(&b1,3.0,4.0,5.0,6.0);  
  assertEquals("(3,4)", boxToString(b1), "boxToString(p1)");

  initBox(&b2,3.14159,6.2831853071, 4.5678, 2.556);
  assertEquals("(3.14,6.28)", boxToString(b2), "boxToString(b2)");
  assertEquals("(3,6)", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("(3.142,6.283)", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("(3.1416,6.2832)", boxToString(b2,5), "boxToString(b2,5)");

		   
  return 0;
}
