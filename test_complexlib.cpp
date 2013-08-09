#include "complex.h"
#include <gtest/gtest.h>

Complex j = Complex(0.0,1.0);

TEST (CreateComplexNumber, InitReToZero) {
  Complex z;
  EXPECT_EQ(0, z.re());
}


TEST (CreateComplexNumber, InitImToZero) {
  Complex z;
  EXPECT_EQ(0, z.im());
}


TEST (CreateComplexNumber, SetInitValues1) {
  Complex z = Complex(5,-2);
  EXPECT_EQ(5, z.re());
  EXPECT_EQ(-2, z.im());
}


TEST (CreateComplexNumber, SetInitValues2) {
  Complex z;
  z = 3+3*j;
  EXPECT_EQ(3, z.re());
  EXPECT_EQ(3, z.im());
}


TEST (Conjugate, CheckReal) {
  Complex z = 1 + 2*j;
  Complex c = z.conj();
  EXPECT_EQ(1, c.re());
}

TEST (Conjugate, CheckImag) {
  Complex z = 1 + 2*j;
  Complex c = z.conj();
  EXPECT_EQ(-2, c.im());
}


TEST (Magnitude, CheckAbs) {
  Complex z = 3 + 4*j;
  EXPECT_EQ(5,z.abs());
}


TEST (Phase, CheckArg) {
  Complex z = 3 + 3*j;
  EXPECT_GT(z.arg(), 0.78);
}


TEST (Norm, CheckNorm) {
  Complex z = 3 + 3*j;
  EXPECT_EQ(18, z.norm());
}


TEST (Addition, AddComplex) {
  Complex z1 = 1 + 1*j;
  Complex z2 = 2 - 1*j;
  Complex z3 = z1 + z2;
  EXPECT_EQ(3, z3.re());
  EXPECT_EQ(0, z3.im());
}


TEST (Addition, PlusEqual) {
  Complex z1 = 1 + 1*j;
  Complex z2 = 2 - 1*j;
  z2 += z1;
  EXPECT_EQ(3, z2.re());
  EXPECT_EQ(0, z2.im());
}


TEST (Addition, AddDouble) {
  Complex z1 = 1 + 1*j;
  double d = 5.0;
  Complex z2 = z1 + d;
  EXPECT_EQ(6, z2.re());
  EXPECT_EQ(1, z2.im());
}


TEST (Subtraction, SubtractComplex) {
  Complex z1 = 1 + 1*j;
  Complex z2 = 2 - 1*j;
  Complex z3 = z1 - z2;
  EXPECT_EQ(-1, z3.re());
  EXPECT_EQ(2, z3.im());
}


TEST (Subtraction, MinusEqual) {
  Complex z1 = 1 + 1*j;
  Complex z2 = 2 - 1*j;
  z2 -= z1;
  EXPECT_EQ(1, z2.re());
  EXPECT_EQ(-2, z2.im());
}


TEST (Subtraction, SubtractDouble) {
  Complex z1 = 1 + 1*j;
  double d = 5.0;
  Complex z2 = z1 - d;
  EXPECT_EQ(-4, z2.re());
  EXPECT_EQ(1, z2.im());
}


TEST (Negative, CheckNegative) {
  Complex z1 = 1 + 1*j;
  Complex z2 = -z1;
  EXPECT_EQ(-1, z2.re());
  EXPECT_EQ(-1, z2.im());
}


TEST (Multiplication, MultiplyComplex) {
  Complex z1 = 2 + 3*j;
  Complex z2 = 2 - 2*j;
  Complex z3 = z1*z2;
  EXPECT_EQ(10,z3.re());
  EXPECT_EQ(2, z3.im());
}


TEST (Multiplication, MultiplyDouble) {
  Complex z1 = 2 + 3*j;
  double d = 3.0;
  Complex z3 = z1*d;
  EXPECT_EQ(6,z3.re());
  EXPECT_EQ(9, z3.im());
}


TEST (Division, DivideComplex) {
  Complex z1 = 20 - 6*j;
  Complex z2 = 2 + 2*j;
  Complex z3 = z1/z2;
  EXPECT_EQ(3.5,z3.re());
  EXPECT_EQ(-6.5, z3.im());
}


TEST (Division, DivideDouble) {
  Complex z1 = 20 - 6*j;
  double d = 2.0;
  Complex z3 = z1/d;
  EXPECT_EQ(10,z3.re());
  EXPECT_EQ(-3, z3.im());
}


TEST (Division, DivideDoubleByComplex) {
  Complex z1 = 1 + j;
  double d = 5.0;
  Complex z3 = d/z1;
  EXPECT_EQ(2.5,z3.re());
  EXPECT_EQ(-2.5, z3.im());
}


TEST (Comparison, Equal) {
  Complex z1 = 1 + 2*j;
  Complex z2 = 1 + 2*j;
  EXPECT_TRUE(z1 == z2);
}


TEST (Comparison, NotEqual) {
  Complex z1 = 1 + 2*j;
  Complex z2 = 1 - 2*j;
  EXPECT_FALSE(z1 == z2);
}


TEST (SqureRoot, CheckSquareRootPos) {
  Complex z1 = 3 + 4*j;
  Complex z2 = sqrt(z1);
  EXPECT_EQ(2, z2.re());
  EXPECT_EQ(1, z2.im());
}


TEST (SqureRoot, CheckSquareRootNeg) {
  Complex z1 = 3 - 4*j;
  Complex z2 = sqrt(z1);
  EXPECT_EQ(2, z2.re());
  EXPECT_EQ(-1, z2.im());
}


TEST (NaturalLog, CheckLog) {
  Complex z1 = -1 + 0*j;
  Complex z2 = log(z1);
  EXPECT_EQ(0, z2.re());
  EXPECT_GT(z2.im(),3.1415);

  z1 = 1 + 0*j;
  z2 = log(z1);
  EXPECT_EQ(0, z2.re());
  EXPECT_EQ(0, z2.im());

  z1 = 1 + j;
  z2 = log(z1);
  EXPECT_GT(z2.re(),0.346);
  EXPECT_GT(z2.im(), 0.785);
}


TEST (Exponent, CheckExp) {
  Complex z1;
  Complex z2 = exp(z1);
  EXPECT_EQ(1, z2.re());
  EXPECT_EQ(0, z2.im());

  z1 = 1 + j;
  z2 = exp(z1);
  EXPECT_LT(1.46, z2.re());
  EXPECT_LT(2.28, z2.im());
}




