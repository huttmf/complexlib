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
  
  cout << "Complex number example: " << z1 << endl;
  cout << "The conjugate is: " << z1.conj() << endl;
  cout << "The magnitude is: " << z1.abs() << endl;
  cout << "The phase in Radians is: " << z1.arg() << endl;
  cout << "The norm is: " << z1.norm() << endl;
  cout << "The sqrt is: " << sqrt(z1) << endl;
  cout << "The natural log is: " << log(z1) << endl;
  cout << "The sin is: " << sin(z1) << endl;
  cout << "The acosh is: " << acosh(z1) << endl;
  cout << "Rounded to 2 decimal places: " << acosh(z1).rnd(2) << endl;

  return 0;
}
