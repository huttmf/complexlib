/*
 * t.cpp - test file for complex library
 * Michael F. Hutt
 * hutt@ieee.org
 * Jan. 14, 2004
 * 
 */


#include <iostream>
#include "complex.h"

using std::cout;
using std::endl;

int main()
{
  Complex j = Complex(0.0,1.0);
  
  Complex z1 = 1+2*j;
  Complex z2 = 2+3*j;
  
  z1 += z2;
  
  cout << z1 << endl;

  return 0;
}
