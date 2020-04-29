#include "doctest.h"
#include <iostream>
#include <complex>
#include "solver.hpp"
#include <stdlib.h> 

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;


TEST_CASE("real")
{
    RealVariable x;
    CHECK_THROWS(abs(solve(34 * (x ^ 2) + 37 * x + 28 == 0.0)));
    CHECK(abs(solve(-34 * (x ^ 2) + 44 * x - 14 == 0.0)) - 0.56387 < 0.0001);
    CHECK_THROWS(abs(solve(-28 * (x ^ 2) + 13 * x - 22 == 0.0)));
    CHECK_THROWS(abs(solve(41 * (x ^ 2) + 10 * x + 14 == 0.0)));
    CHECK_THROWS(abs(solve(-23 * (x ^ 2) - 9 * x - 23 == 0.0)));
    CHECK(abs(solve(23 * (x ^ 2) - 13 * x - 38 == 0.0)) - 1.59868 < 0.0001);
    CHECK(abs(solve(19 * (x ^ 2) + 18 * x - 20 == 0.0)) - 0.656364 < 0.0001);
    CHECK_THROWS(abs(solve(33 * (x ^ 2) - 19 * x + 13 == 0.0)));
    CHECK_THROWS(abs(solve(-26 * (x ^ 2) + 18 * x - 14 == 0.0)));
    CHECK(abs(solve(-20 * (x ^ 2) - 47 * x - 27 == 0.0)) - 1.35 < 0.0001);
    CHECK_THROWS(abs(solve(9 * (x ^ 2) + 20 * x + 18 == 0.0)));
    CHECK(abs(solve(44 * (x ^ 2) + 7 * x - 38 == 0.0)) - 0.853173 < 0.0001);
    CHECK(abs(solve(-7 * (x ^ 2) - 20 * x + 24 == 0.0)) - 3.76724 < 0.0001);
    CHECK(abs(solve(-28 * (x ^ 2) - 30 * x + 35 == 0.0)) - 1.77547 < 0.0001);
    CHECK(abs(solve(-12 * (x ^ 2) + 49 * x - 25 == 0.0)) - 0.59769 < 0.0001);
    CHECK_THROWS(abs(solve(-34 * (x ^ 2) + 21 * x - 36 == 0.0)));
    CHECK(abs(solve(-23 * (x ^ 2) + 42 * x + 31 == 0.0)) - 0.563938 < 0.0001);
    CHECK(abs(solve(7 * (x ^ 2) + 24 * x + 13 == 0.0)) - 0.67427 < 0.0001);
    CHECK_THROWS(abs(solve(21 * (x ^ 2) + 47 * x + 32 == 0.0)));
    CHECK_THROWS(abs(solve(34 * (x ^ 2) + 37 * x + 28 == 0.0)));
    CHECK(abs(solve(-34 * (x ^ 2) + 44 * x - 14 == 0.0)) - 0.56387 < 0.0001);
    CHECK(abs(solve(37 * (x ^ 2) + 43 * x + 0 == 0.0)) - 0 < 0.0001);
    CHECK_THROWS(abs(solve(-28 * (x ^ 2) + 13 * x - 22 == 0.0)));
    CHECK_THROWS(abs(solve(41 * (x ^ 2) + 10 * x + 14 == 0.0)));
    CHECK_THROWS(abs(solve(-23 * (x ^ 2) - 9 * x - 23 == 0.0)));
    CHECK(abs(solve(23 * (x ^ 2) - 13 * x - 38 == 0.0)) - 1.59868 < 0.0001);
    CHECK(abs(solve(19 * (x ^ 2) + 18 * x - 20 == 0.0)) - 0.656364 < 0.0001);
    CHECK_THROWS(abs(solve(33 * (x ^ 2) - 19 * x + 13 == 0.0)));
    CHECK_THROWS(abs(solve(-26 * (x ^ 2) + 18 * x - 14 == 0.0)));
    CHECK(abs(solve(-20 * (x ^ 2) - 47 * x - 27 == 0.0)) - 1.35 < 0.0001);
    CHECK_THROWS(abs(solve(9 * (x ^ 2) + 20 * x + 18 == 0.0)));
    CHECK(abs(solve(44 * (x ^ 2) + 7 * x - 38 == 0.0)) - 0.853173 < 0.0001);
    CHECK(abs(solve(-7 * (x ^ 2) - 20 * x + 24 == 0.0)) - 3.76724 < 0.0001);
    CHECK(abs(solve(-28 * (x ^ 2) - 30 * x + 35 == 0.0)) - 1.77547 < 0.0001);
    CHECK(abs(solve(-12 * (x ^ 2) + 49 * x - 25 == 0.0)) - 0.59769 < 0.0001);
    CHECK_THROWS(abs(solve(-34 * (x ^ 2) + 21 * x - 36 == 0.0)));
    CHECK(abs(solve(-23 * (x ^ 2) + 42 * x + 31 == 0.0)) - 0.563938 < 0.0001);
    CHECK(abs(solve(7 * (x ^ 2) + 24 * x + 13 == 0.0)) - 0.67427 < 0.0001);
    CHECK_THROWS(abs(solve(21 * (x ^ 2) + 47 * x + 32 == 0.0)));
    CHECK_THROWS(abs(solve(34 * (x ^ 2) + 37 * x + 28 == 0.0)));
    CHECK(abs(solve(-34 * (x ^ 2) + 44 * x - 14 == 0.0)) - 0.56387 < 0.0001);
    CHECK(abs(solve(37 * (x ^ 2) + 43 * x + 0 == 0.0)) - 0 < 0.0001);
    CHECK_THROWS(abs(solve(-28 * (x ^ 2) + 13 * x - 22 == 0.0)));
    CHECK_THROWS(abs(solve(41 * (x ^ 2) + 10 * x + 14 == 0.0)));
    CHECK_THROWS(abs(solve(-23 * (x ^ 2) - 9 * x - 23 == 0.0)));
    CHECK(abs(solve(23 * (x ^ 2) - 13 * x - 38 == 0.0)) - 1.59868 < 0.0001);
    CHECK(abs(solve(19 * (x ^ 2) + 18 * x - 20 == 0.0)) - 0.656364 < 0.0001);
    CHECK_THROWS(abs(solve(33 * (x ^ 2) - 19 * x + 13 == 0.0)));
    CHECK_THROWS(abs(solve(-26 * (x ^ 2) + 18 * x - 14 == 0.0)));
    CHECK(abs(solve(-20 * (x ^ 2) - 47 * x - 27 == 0.0)) - 1.35 < 0.0001);
    CHECK_THROWS(abs(solve(9 * (x ^ 2) + 20 * x + 18 == 0.0)));
    CHECK(abs(solve(44 * (x ^ 2) + 7 * x - 38 == 0.0)) - 0.853173 < 0.0001);
    CHECK(abs(solve(-7 * (x ^ 2) - 20 * x + 24 == 0.0)) - 3.76724 < 0.0001);
    CHECK(abs(solve(-28 * (x ^ 2) - 30 * x + 35 == 0.0)) - 1.77547 < 0.0001);
    CHECK(abs(solve(-12 * (x ^ 2) + 49 * x - 25 == 0.0)) - 0.59769 < 0.0001);
    CHECK_THROWS(abs(solve(-34 * (x ^ 2) + 21 * x - 36 == 0.0)));
    CHECK(abs(solve(-23 * (x ^ 2) + 42 * x + 31 == 0.0)) - 0.563938 < 0.0001);
    CHECK(abs(solve(7 * (x ^ 2) + 24 * x + 13 == 0.0)) - 0.67427 < 0.0001);
    CHECK_THROWS(abs(solve(21 * (x ^ 2) + 47 * x + 32 == 0.0)));

}

TEST_CASE("complex")
{
    ComplexVariable y;
    CHECK(solve(y + y - 2 == 10) == complex(6.0, 0.0));
    CHECK(solve(4 * y - 8 == 10 * y + complex(4.0, -12.0)) == complex(-2.0, 2.0));
    CHECK(solve(3 * y * 7 + 21 == complex(0.0, -21.0)) == complex(-1.0, -1.0));
    CHECK(solve(7 + 5 - 4 * 3 * y == 18) == complex(-0.5, 0.0));
    CHECK(solve(y + 13 == 7) == complex(-6.0, 0.0));
    CHECK(solve(2 * y - y * 3 == 15) == complex(-15.0, 0.0));
    CHECK(solve(y + 2 - y - 2 == y) == complex(0.0, 0.0));
    CHECK(solve(56 * y + 8 == complex(8.0, -56.0)) == complex(0.0, -1.0));
    CHECK(solve(5 * y == 6 * y) == complex(0.0, 0.0));
    CHECK(solve(4 * y + 12 == 0) == complex(-3.0, 0.0));
    CHECK(solve(y + y - 2 == 10) == complex(6.0, 0.0));
    CHECK(solve(4 * y - 8 == 10 * y + complex(4.0, -12.0)) == complex(-2.0, 2.0));
    CHECK(solve(3 * y * 7 + 21 == complex(0.0, -21.0)) == complex(-1.0, -1.0));
    CHECK(solve(7 + 5 - 4 * 3 * y == 18) == complex(-0.5, 0.0));
    CHECK(solve(y + 13 == 7) == complex(-6.0, 0.0));
    CHECK(solve(2 * y - y * 3 == 15) == complex(-15.0, 0.0));
    CHECK(solve(y + 2 - y - 2 == y) == complex(0.0, 0.0));
    CHECK(solve(56 * y + 8 == complex(8.0, -56.0)) == complex(0.0, -1.0));
    CHECK(solve(5 * y == 6 * y) == complex(0.0, 0.0));
    CHECK(solve(4 * y + 12 == 0) == complex(-3.0, 0.0));
    CHECK(solve(y + y - 2 == 10) == complex(6.0, 0.0));
    CHECK(solve(4 * y - 8 == 10 * y + complex(4.0, -12.0)) == complex(-2.0, 2.0));
    CHECK(solve(3 * y * 7 + 21 == complex(0.0, -21.0)) == complex(-1.0, -1.0));
    CHECK(solve(7 + 5 - 4 * 3 * y == 18) == complex(-0.5, 0.0));
    CHECK(solve(y + 13 == 7) == complex(-6.0, 0.0));
    CHECK(solve(2 * y - y * 3 == 15) == complex(-15.0, 0.0));
    CHECK(solve(y + 2 - y - 2 == y) == complex(0.0, 0.0));
    CHECK(solve(56 * y + 8 == complex(8.0, -56.0)) == complex(0.0, -1.0));
    CHECK(solve(5 * y == 6 * y) == complex(0.0, 0.0));
    CHECK(solve(4 * y + 12 == 0) == complex(-3.0, 0.0));
    CHECK(solve(y + y - 2 == 10) == complex(6.0, 0.0));
    CHECK(solve(4 * y - 8 == 10 * y + complex(4.0, -12.0)) == complex(-2.0, 2.0));
    CHECK(solve(3 * y * 7 + 21 == complex(0.0, -21.0)) == complex(-1.0, -1.0));
    CHECK(solve(7 + 5 - 4 * 3 * y == 18) == complex(-0.5, 0.0));
    CHECK(solve(y + 13 == 7) == complex(-6.0, 0.0));
    CHECK(solve(2 * y - y * 3 == 15) == complex(-15.0, 0.0));
    CHECK(solve(y + 2 - y - 2 == y) == complex(0.0, 0.0));
    CHECK(solve(56 * y + 8 == complex(8.0, -56.0)) == complex(0.0, -1.0));
    CHECK(solve(5 * y == 6 * y) == complex(0.0, 0.0));
    CHECK(solve(4 * y + 12 == 0) == complex(-3.0, 0.0));
    CHECK(solve(y + y - 2 == 10) == complex(6.0, 0.0));
    CHECK(solve(4 * y - 8 == 10 * y + complex(4.0, -12.0)) == complex(-2.0, 2.0));
    CHECK(solve(3 * y * 7 + 21 == complex(0.0, -21.0)) == complex(-1.0, -1.0));
    CHECK(solve(7 + 5 - 4 * 3 * y == 18) == complex(-0.5, 0.0));
    CHECK(solve(y + 13 == 7) == complex(-6.0, 0.0));
    CHECK(solve(2 * y - y * 3 == 15) == complex(-15.0, 0.0));
    CHECK(solve(y + 2 - y - 2 == y) == complex(0.0, 0.0));
    CHECK(solve(56 * y + 8 == complex(8.0, -56.0)) == complex(0.0, -1.0));
    CHECK(solve(5 * y == 6 * y) == complex(0.0, 0.0));
    CHECK(solve(4 * y + 12 == 0) == complex(-3.0, 0.0));
}