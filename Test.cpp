
#include "doctest.h"
#include "solver.hpp"
#include <string>

using namespace std;
using namespace solver;

TEST_CASE("Tests") {
    RealVariable x;

    CHECK(solve(5 * x - 6 = 3 * x - 8) == -1);
   // CHECK((solve((x ^ 2) == 64) == 8) || solve((x ^ 2) == 64) == -8);
    // CHECK((solve((y ^ 2) == -64) == eight);
    CHECK(solve(12 * x - 18 == -6 + 8 * x) == 3);
    CHECK(solve(3 * x + 3 + 10 - 5 * x == 8) == 2.5);
    CHECK(solve(17 * x + 12 == 54 - 4 * x) == 2);
    CHECK(solve(6 * x - 16 == 5 * x - 9) == 7);
    CHECK(solve(4 * x - 4 == 3 * x + 2) == 6);
    CHECK(solve(5 * x - 3 * x == 36 - 1 * x) == 12);
    CHECK(solve(7 * x - 12 + 5 == 8 * x - 24) == 17);
    CHECK(solve(30 - 1 * x + 12 == 3 * x + 2) == 10);
    CHECK(solve(6 * x - 30 == 60 - 8 * x) == 45 / 7);
    CHECK(solve(9 * x - 16 == 3 * x - x + 5) == 3);
    CHECK(solve(5 * x - 10 + 2 * x == 6 * x + 6 - 1 * x) == 8);
    CHECK(solve(10 * x + 2 == 1 * x + 2) == 0);
    CHECK(solve(5 * x + 5 == 2 * x - 10 + 6) == -3);

    /* complex test
    CHECK(solve((y ^ 2) == 16) == four);
    CHECK(solve((y ^ 2) == -16) == four_i);
    CHECK((solve((x ^ 2) +4*x+1 == 10+4*x) == 3) || (solve((x ^ 2) + 4 * x + 1 == 10 + 4 * x) == -3));
    CHECK(solve(y + 5i == 2 * y + 3i) == two_i);
    */
    CHECK(solve(1 * x + 150 == 4 * x - 30) == 60);
    CHECK(solve(1 + 1 * x == -8 - 8 * x) == -1);
    CHECK(solve(2 * x + 7 - 5 * x - 12 == -1 * x + 3) == -4);
    CHECK(solve(3 * x + 21 == 10 * x) == 3);
    CHECK(solve(12 * x + 7 - 5 * x - 10 == -1 * x + 3) == 0.75);
    CHECK(solve(13 * x - 8 * x - 4 * x == 66 - 32 - 18) == 16);
    CHECK(solve(3 * x == 9) == 3);
    CHECK(solve(7 * x == 28) == 4);
    CHECK(solve(10 * x == -60) == -6);
    CHECK(solve(-4 * x == -36) == 9);
    CHECK(solve(1 * x + 4 * x == 6 + 3 + 1) == 2);
    CHECK(solve(3 * x - 1 * x == 10) == 2);
    CHECK(solve(17 * x + 4 * x == 65 - 2) == 3);
    CHECK(solve(5 * x + 1 * x == 45 - 3) == 7);
    CHECK(solve(11 * x + 4 * x == 10 + 10 + 25) == 3);
    CHECK(solve(8 * x + 4 * x - 2 * x == 37 - 7 + 10) == 4);

    CHECK(solve(7 * x + 6 * x + 3 * x == 17 + 9 + 6) == 2);
    CHECK(solve(5 * x - 2 * x - 1 * x == 11 - 2 + 15) == 12);
    CHECK(solve(20 * x + 7 * x - 3 * x == 55 + 32 - 15) == 3);
    CHECK(solve(-2 * x + 7 * x - 4 * x == 10 - 5) == 5);
    CHECK(solve(-11 * x + 6 * x - 3 * x == -20 - 3 - 9) == 4);
    CHECK(solve(-13 * x + 16 * x + 1 * x == -4 - 8 + 44) == 8);
    CHECK(solve(-1 * x - 21 * x + 2 * x == 75 - 6 + 31) == -5);
    CHECK(solve(-1 * x + 6 == 3 * x - 2) == 2);
    CHECK(solve(10 * x + 8 == 4 * x + 44) == 6);
    CHECK(solve(-7 * x - 10 == 2 - 3 * x) == -3);
    CHECK(solve(35 - 13 * x == 19 - 5 * x) == 2);
    CHECK(solve(-17 * x + 8 == x + 44) == -2);
    CHECK(solve(-10 * x + 5 + 1 * x == 6 * x - 9 + 29) == -1);
    CHECK(solve(22 + 6 * x + 2 == 3 * x + 14 + 5 * x) == 5);
    CHECK(solve(-45 * x + 30 + 31 * x == 32 + 16 * x + 28) == -1);
    CHECK(solve(-115 * +44 - 1 * x + 21 == -4 + 13 * x + 8 - 9 * x + 1) == 0.5);

    /* quadratic equation test
    CHECK((solve((x ^ 2) - 5 * x == 6) == 6) || (solve((x ^ 2) - 5 * x == 6) == -1));
    CHECK((solve((4 * x) ^ 2) - 5 * x == 6) == 2) || (solve(((4 * x) ^ 2) - 5 * x == 6) == -0.75));
    CHECK((solve(((4 * x) ^ 2) + 2 * x == 6) == 1) || (solve(((4 * x) ^ 2) + 2 * x == 6) == -1.5));
    CHECK((solve((4 * x) ^ 2) + 10 * x == 6) == 0.5) || (solve(((4 * x) ^ 2) + 10 * x == 6) == -3));
    */
    CHECK(solve(1 * x - 4 == 12) == 16);
    CHECK(solve(7 + 1 * x == 9) == 2);
    CHECK(solve(3 == 1 * x - 5) == 8);
    CHECK(solve(-11 == -2 + 1 * x) == -9);
    CHECK(solve(0.5 * x == 2) == 4);
    CHECK(solve(2 + 1 * x == 1) == -1);
    CHECK(solve(8 == 1 * x - 5) == 13);
    CHECK(solve(2 == -2 + 1 * x) == 4);
    CHECK(solve(0.5 * x == 6) == 12);
    CHECK(solve(43 + 1 * x == 1) == 42);
    CHECK(solve(8 - 2 + 3 == 1 * x - 5) == 14);
    CHECK(solve(21 == -2 + 1 * x) == 23);
    CHECK(solve(2 * x + 4 == 6) == 1);
    CHECK(solve(3 * x + 1 * x == 8) == 2);
    CHECK(solve(4 * x == 1 * x - 15) == -5);
    CHECK(solve(50 == -2 + 2 + 1 * x) == 50);

    CHECK(solve(2 * x + 4 * x == 60) == 10);
    CHECK(solve(1 * x + 1 * x == 20 + 40) == 30);
    CHECK(solve(7 * x == 1 * x + 48) == 8);
    CHECK(solve(230 == -2 + 2 + 1 * x) == 230);
    CHECK(solve(4 * x + 4 * x + 3 * x == 22 + 22) == 4);
    CHECK(solve(1 * x + 7 * x == 20 + 40 + 20) == 10);
    CHECK(solve(4 * x == 2 * x + 32) == 16);
    CHECK(solve(3400 == -4 + 2 + 2 + 1 * x) == 3400);
    CHECK(solve(23 * x + 8 * x == 217) == 7);
    CHECK(solve(1 * x + 1 * x == 20 * x - 90) == 5);
    CHECK(solve(9 * x == 6 * x + 63) == 21);
    CHECK(solve(555 == -20 + 20 + 1 * x) == 555);
    CHECK(solve(90 * x + 4 * x + 3 * x == 190 + 4) == 2);
    CHECK(solve(150 * x + 7 * x == 20 + 40 + 20 + 77) == 1);
    CHECK(solve(41 * x == 22 * x + 47.5) == 2.5);
    CHECK(solve(23432 == -8 + 2 + 2 + 4 + 1 * x) == 23432);

    CHECK(solve(54 * x + 4 * x == 348) == 6);
    CHECK(solve(4 * x + 3 * x == 9 * x + 9 + 9) == -9);
    CHECK(solve(23 * x == 2 * x + 1600 + 80) == 80);
    CHECK(solve(6754 == -200 + 200 + 1 * x) == 6754);
    CHECK(solve(244 * x + 4 * x + 3 * x - 1 * x == 100 + 100 + 800) == 4);
    CHECK(solve(2 * x + 7 * x == 80 + 9 + 1) == 10);
    CHECK(solve(72 * x == 22 * x + 50) == 1);
    CHECK(solve(999999 == -8 + 2 + 2 + 4 - 13 + 10 + 3 + 1 * x) == 999999);
    CHECK(solve(23 * x + 2 * x == 112 + 0.5) == 4.5);
    CHECK(solve(2 * x + 1 * x == 9 * x + 40 + 2) == -7);
    CHECK(solve(40 * x == 2 * x + 275.5) == 7.25);
    CHECK(solve(8787 == -300 + 300 + 1 * x) == 8787);
    CHECK(solve(23 * x + 4 * x + 3 * x - 1 * x == 50 + 8) == 2);
    CHECK(solve(3 * x + 7 * x == 100 + 50) == 15);
    CHECK(solve(1 * x == 2 * x + 21) == -21);
    CHECK(solve(777 == -8 + 2 + 2 + 4 - 13 + 10 + 3 + 1 * x - 1 * x + 1 * x) == 777);

    // g
    CHECK(solve(54 * x + 4 * x == 348) == 6);
    CHECK(solve(4 * x + 3 * x == 9 * x + 9 + 9) == -9);
    CHECK(solve(23 * x == 2 * x + 1600 + 80) == 80);
    CHECK(solve(6754 == -200 + 200 + 1 * x) == 6754);
    CHECK(solve(244 * x + 4 * x + 3 * x - 1 * x == 100 + 100 + 800) == 4);
    CHECK(solve(2 * x + 7 * x == 80 + 9 + 1) == 10);
    CHECK(solve(72 * x == 22 * x + 50) == 1);
    CHECK(solve(999999 == -8 + 2 + 2 + 4 - 13 + 10 + 3 + 1 * x) == 999999);
    CHECK(solve(23 * x + 2 * x == 112 + 0.5) == 4.5);
    CHECK(solve(2 * x + 1 * x == 9 * x + 40 + 2) == -7);
    CHECK(solve(40 * x == 2 * x + 275.5) == 7.25);
    CHECK(solve(8787 == -300 + 300 + 1 * x) == 8787);
    CHECK(solve(23 * x + 4 * x + 3 * x - 1 * x == 50 + 8) == 2);
    CHECK(solve(3 * x + 7 * x == 100 + 50) == 15);
    CHECK(solve(1 * x == 2 * x + 21) == -21);
    CHECK(solve(777 == -8 + 2 + 2 + 4 - 13 + 10 + 3 + 1 * x - 1 * x + 1 * x) == 777);


    CHECK(solve(0.5 * x == 6) == 12);
    CHECK(solve(43 + 1 * x == 1) == 42);
    CHECK(solve(8 - 2 + 3 == 1 * x - 5) == 14);
    CHECK(solve(21 == -2 + 1 * x) == 23);
    CHECK(solve(2 * x + 4 == 6) == 1);
}