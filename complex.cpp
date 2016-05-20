/* 
 * complex.cpp
 * Implementation file for complex number class
 * Michael F. Hutt
 * hutt@ieee.org
 * Jan. 1999
 *
 * Copyright (c) 1999 Michael F. Hutt
 * Released under the MIT License
 *
 */

#include "complex.h"

static Complex j = Complex(0.0,1.0);
static Complex i = Complex(0.0,1.0);

// default constructor
Complex::Complex(void) {real=0.0; imag=0.0;}

// constructor
Complex::Complex(double r) {real=r; imag=0.0;}

// constructor
Complex::Complex(double r,double i) {real=r; imag=i;}

// return the real part
double Complex::re(void) { return(this->real); }
double re(Complex z) { return z.re(); };

// return the imagimary part
double Complex::im(void) { return(this->imag); }
double im(Complex z) { return z.im(); }

// return the complex conjugate
Complex Complex::conj(void) { return Complex(this->real,-this->imag); }
Complex conj(Complex z) { return Complex(z.re(),-z.im()); }

// return the magnitude
double Complex::abs(void) { return sqrt(real*real+imag*imag); }
double abs(Complex z) { return sqrt(z.re()*z.re()+z.im()*z.im()); }

// return the phase argument
double Complex::arg(void) { return atan2(this->imag,this->real); }
double arg(Complex z) { return atan2(z.im(),z.re()); }

// return the norm
double Complex::norm(void) { return real*real+imag*imag; }
double norm(Complex z) { return z.re()*z.re()+z.im()*z.im(); }

// overload the + operator to add 2 complex numbers
Complex Complex::operator+(Complex z)
{
  return Complex(this->real+z.real,this->imag+z.imag);
}

// overload the + operator to add complex and a double
Complex Complex::operator+(double a)
{
  return Complex(this->real+a,this->imag);
}

// This is a friend function
// overload the + operator to add a double and a complex
Complex operator+(double a, Complex z)
{
  return Complex(a+z.re(),z.im());
}

// overload the - operator to subtract 2 complex numbers
Complex Complex::operator-(Complex z)
{
  return Complex(this->real-z.real,this->imag-z.imag);
}

// overload the - operator to subtract a double from a complex
Complex Complex::operator-(double a)
{
  return Complex(this->real-a,this->imag);
}

// overload the - operator to subtract a complex from a double
Complex operator-(double a, Complex z)
{
  return Complex(a-z.re(),-z.im());
}

// overload the - operator to take the negative of a complex
Complex operator-(Complex z)
{
  return Complex(-z.real,-z.imag);
}

// overload the * operator to multiply two complex numbers
Complex Complex::operator*(Complex z)
{
  return Complex(this->real*z.real-this->imag*z.imag,
		 this->real*z.imag+this->imag*z.real);
}

// overload the * operator to multiply a complex by a double
Complex Complex::operator*(double a)
{
  return Complex(real*a,imag*a);
}

// overload the * operator to multiply a double by a complex
Complex operator*(double a, Complex z)
{
  return Complex(a*z.re(),a*z.im());
}

// overload the / operator to divide two complex numbers
Complex Complex::operator/(Complex z)
{
  Complex top((*this)*z.conj());
  double bottom(z.norm());
  Complex quo(top/bottom);
  return quo;
}

// overload the / operator to divide a complex number by a double
Complex Complex::operator/(double a)
{
  return Complex(this->real/a,this->imag/a);
}

// overload the / operator to divide a double by a complex
Complex operator/(double a, Complex z)
{
  Complex top((a)*z.conj());
  double bottom(z.norm());
  Complex quo(top/bottom);
  return quo;
}

// overload the += operator
const Complex& Complex::operator+=(const Complex& z)
{
  this->real+=z.real;
  this->imag+=z.imag;
  return *this;
}

// overload the -= operator
const Complex& Complex::operator-=(const Complex& z)
{
  this->real-=z.real;
  this->imag-=z.imag;
  return *this;
}

// overload the == operator
int Complex::operator==(Complex z)
{
  if (this->real == z.re() && this->imag == z.im()) {
    return 1;
  }
  else {
    return 0;
  }
}

// take the square root of a complex number
Complex sqrt(Complex z)
{
  double zsqre,zsqim;

  zsqre = sqrt(0.5*(z.abs()+z.re()));
  zsqim = sqrt(0.5*(z.abs()-z.re()));

  if (z.im() >= 0.0) {
    return Complex(zsqre,zsqim);
  }
  else {
    return Complex(zsqre,-zsqim);
  }
}

// take the natural log of a complex number
Complex log(Complex z)
{
  if (z.re() < 0 && z.im() == 0.0) {
    return log(z.abs())+j*PI;
  }
  else {
    return log(z.abs())+j*z.arg();
  }
}

// raise e to a complex number
Complex exp(Complex z)
{
  return exp(z.re())*(cos(z.im())+j*sin(z.im()));
}

// raise a complex number to a double
Complex pow(Complex z, double c)
{
  return exp(c*log(z));
}

// take the sin of a complex number
Complex sin(Complex z)
{
  return 0.5*(-j)*exp(j*z)-0.5*(-j)*exp(-j*z);
}

// take the cos of a complex number
Complex cos(Complex z)
{
  return 0.5*exp(j*z)+0.5*exp(-j*z);
}

// take the tan of a complex number
Complex tan(Complex z) { return sin(z)/cos(z); }

// take the sec of a complex number
Complex sec(Complex z) { return 1/cos(z); }

// take the csc of a complex number
Complex csc(Complex z) { return 1/sin(z); }

// take the cot of a complex number
Complex cot(Complex z) { return cos(z)/sin(z); }

// take the sinh of a complex number
Complex sinh(Complex z) { return (exp(z)-exp(-z))/2.0; }

// take the cosh of a complex number
Complex cosh(Complex z) { return (exp(z)+exp(-z))/2.0; }

// take the tanh of a complex number
Complex tanh(Complex z) { return sinh(z)/cosh(z); }

// take the sech of a complex number
Complex sech(Complex z) { return 1/cosh(z); }

// take the csch of a complex number
Complex csch(Complex z) { return 1/sinh(z); }

// take the coth of a complex number
Complex coth(Complex z) { return cosh(z)/sinh(z); }

// take the asin of a complex number
Complex asin(Complex z) { return -j*log(j*z+sqrt(1.0-z*z)); }

// take the acos of a complex number
Complex acos(Complex z) { return -j*log(z+sqrt(z*z-1.0)); }

// take the atan of a complex number
Complex atan(Complex z) { return (0.5*j)*log((j+z)/(j-z)); }

// take the asinh of a complex number
Complex asinh(Complex z) { return log(z+sqrt(z*z+1.0)); }

// take the acosh of a complex number
Complex acosh(Complex z) { return log(z+sqrt(z*z-1.0)); }

// take the atanh of a complex number
Complex atanh(Complex z) { return 0.5*log((1.0+z)/(1.0-z)); }

// create an inserter function so 
// complex types work with cout
std::ostream& operator<<(std::ostream& stream, Complex z)
{
  if (z.im() < 0) {
    stream << z.re();
    stream << z.im() <<"j";
  }
  else {
    stream << z.re() <<"+";
    stream << z.im() <<"j";
  }
  return stream;
}

// round a complex number
Complex Complex::rnd(int precision)
{
  double rnum,inum;
  int tnum;

  rnum = this->real*pow(10,precision);
  tnum = (int)(rnum < 0 ? rnum-0.5 : rnum + 0.5);
  rnum = tnum/pow(10,precision);

  inum = this->imag*pow(10,precision);
  tnum = (int)(inum < 0 ? inum-0.5 : inum + 0.5);
  inum = tnum/pow(10,precision);

	
  return Complex(rnum,inum);
}

Complex rnd(Complex z, int precision)
{
  double rnum,inum;
  int tnum;

  rnum = z.re()*pow(10,precision);
  tnum = (int)(rnum < 0 ? rnum-0.5 : rnum + 0.5);
  rnum = tnum/pow(10,precision);

  inum = z.im()*pow(10,precision);
  tnum = (int)(inum < 0 ? inum-0.5 : inum + 0.5);
  inum = tnum/pow(10,precision);

	
  return Complex(rnum,inum);
}




// end of Complex class
//=========================================================================

// round a number
double rnd(double num, int precision)
{
  double rnum;
  int tnum;

  rnum = num*pow(10,precision);
  tnum = (int)(rnum < 0 ? rnum-0.5 : rnum + 0.5);
  rnum = tnum/pow(10,precision);
	
  return rnum;
}
