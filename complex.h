/*
 * complex.h
 * Author: Michael F. Hutt
 * hutt@ieee.org
 * Jan. 1999
 *
 * Copyright (c) 1999-2013 <Michael F. Hutt>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *
 * Reference: Advanced Engineering Mathematics, by Erwin Kreyszig
 * Seventh Edition, 1993, John Wiley & Sons, Inc.
 *
 * Jan. 9, 2004 - ported to std c++ on linux.
 *
 * Sep. 18, 2000
 * =============
 * Compiled as a library.
 *
 * Jan. 15, 1999
 * =============
 * Changed mag() to abs(), and phase() to arg()
 * for consistency
 * Also fixed problem with sqrt() and log()
 * Needed to use atan2 for arg()
 *
 * Jan. 14, 1999
 * =============
 * Added support for trig functions, exp, and log
 *
 * This class currently supports the following
 * functions for complex numbers:
 *
 * re(), im()
 * conj()
 * abs(), arg()
 * norm()
 * +,-,*,/, in any order
 * +=, -=
 * sqrt()
 * log()
 * to take the log of a negative number, define it as complex first
 * exp()
 * pow()
 * sin(), cos(), tan(), sec(), csc(), cot()
 * sinh(), cosh(), tanh(), sech(), csch(), coth()
 * asin(), acos(), atan(), asinh(), acosh(), atanh()
 * <<, used with cout
 * rnd()
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
