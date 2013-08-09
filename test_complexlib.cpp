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
