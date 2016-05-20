## Synopsis

C++ Complex Number Library   
Version 1.0

## Code Example

     #include "complex.h"

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

Copyright (c) 1999 Michael F. Hutt, Released under the MIT License
