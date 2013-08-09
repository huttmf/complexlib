#include "complex.h"
#include "gtest/gtest.h"

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


