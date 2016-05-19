## Synopsis

C++ Complex Number Library 
Version 1.0

## Code Example

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

## Motivation

This complex number library for C++ was originally developed at a time
when the Standard C++ Library did not support hyperbolic trigonometric
functions with complex arguments.

The primary reference used in coding this library was: 

Advanced Engineering Mathematics, by Erwin Kreyszig Seventh Edition,
1993, John Wiley & Sons, Inc.

## Installation

./configure
make
make install

## Tests

Requires gtest

make check
./test_complexlib 

## License

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

