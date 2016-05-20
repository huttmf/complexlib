/*
 * complex.h
 * Author: Michael F. Hutt
 * hutt@ieee.org
 * Jan. 1999
 *
 * Copyright (c) 1999 Michael F. Hutt
 * Released under the MIT License
 *
 * Reference: Advanced Engineering Mathematics, by Erwin Kreyszig
 * Seventh Edition, 1993, John Wiley & Sons, Inc.
 *
 */


#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <iostream>
#include <cmath>

#define PI acos(-1)

// define Complex class
//=========================================================================
class Complex {
 private:
  double real,imag;
 public:
  Complex(void);			// default constructor
  Complex(double r);
  Complex(double r, double i);	

  double re(void);
  friend double re(Complex z);
  double im(void);
  friend double im(Complex z);

  Complex conj(void);
  friend Complex conj(Complex z);
  double abs(void);
  friend double abs(Complex z);
  double arg(void);
  friend double arg(Complex z);
  double norm(void);
  friend double norm(Complex z);

  Complex operator+(Complex z);
  Complex operator+(double a);
  friend Complex operator+(double a, Complex z);

  Complex operator-(Complex a);
  Complex operator-(double a);
  friend Complex operator-(double a, Complex z);
  friend Complex operator-(Complex z);

  Complex operator*(Complex z);
  Complex operator*(double a);
  friend Complex operator*(double a, Complex z);

  Complex operator/(Complex a);
  Complex operator/(double a);
  friend Complex operator/(double a, Complex z);

  const Complex& operator+=(const Complex& z);
  const Complex& operator-=(const Complex& z);
  int operator==(Complex z);

  friend Complex sqrt(Complex z);
  friend Complex log(Complex z);
  friend Complex exp(Complex z);
  friend Complex pow(Complex z, double c);

  friend Complex sin(Complex z);
  friend Complex cos(Complex z);
  friend Complex tan(Complex z);
  friend Complex sec(Complex z);
  friend Complex csc(Complex z);
  friend Complex cot(Complex z);

  friend Complex sinh(Complex z);
  friend Complex cosh(Complex z);
  friend Complex tanh(Complex z);
  friend Complex sech(Complex z);
  friend Complex csch(Complex z);
  friend Complex coth(Complex z);

  friend Complex asin(Complex z);
  friend Complex acos(Complex z);
  friend Complex atan(Complex z);
  friend Complex asinh(Complex z);
  friend Complex acosh(Complex z);
  friend Complex atanh(Complex z);

  friend std::ostream& operator<<(std::ostream& stream, Complex z);

  Complex rnd(int precision);
  friend Complex rnd(Complex z, int precision);

};

#endif
