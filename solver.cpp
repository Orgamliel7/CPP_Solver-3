//
// Created by shaharnik on 24/04/2020.
//

#include "solver.hpp"
#include <complex>
#include <iostream>

using namespace std;
using namespace solver;

RealVariable solver::operator +(const RealVariable &, const RealVariable &){return RealVariable();}
RealVariable solver::operator +(const RealVariable &, const int){return RealVariable();}
RealVariable solver::operator +(const int, const RealVariable &){return RealVariable();}
RealVariable solver::operator -(const RealVariable &, const RealVariable &){return RealVariable();}
RealVariable solver::operator -(const RealVariable &, const int){return RealVariable();}
RealVariable solver::operator *(const int, const RealVariable &) {return RealVariable();}
RealVariable solver::operator /( const RealVariable & ,const int){return RealVariable();}
RealVariable solver::operator ^(RealVariable const &, const int){return RealVariable();}
RealVariable solver::operator ==(const RealVariable &, const RealVariable &){return RealVariable();}
RealVariable solver::operator ==(const RealVariable &, const int){return RealVariable();}

double solver::solve(RealVariable) {return 0.0;}

//ComplexVariable class
ComplexVariable solver::operator +(const ComplexVariable &, const ComplexVariable &){return ComplexVariable();}
ComplexVariable solver::operator +(const ComplexVariable &, const int){return ComplexVariable();}
ComplexVariable solver::operator +(const int, const ComplexVariable &){return ComplexVariable();}
ComplexVariable solver::operator +(const ComplexVariable &, complex<double>){return ComplexVariable();}
ComplexVariable solver::operator -(const ComplexVariable &, const ComplexVariable &){return ComplexVariable();}
ComplexVariable solver::operator -(const ComplexVariable &, const int){return ComplexVariable();}
ComplexVariable solver::operator*(const int, ComplexVariable const &) {return ComplexVariable();}
ComplexVariable solver::operator /(ComplexVariable const &, const int){return ComplexVariable();}
ComplexVariable solver::operator^(ComplexVariable const &, const int) {return ComplexVariable();}
ComplexVariable solver::operator ==(const ComplexVariable &, const int){return ComplexVariable();}
ComplexVariable solver::operator ==(const ComplexVariable &, const ComplexVariable &){return ComplexVariable();}

complex<double> solver::solve(ComplexVariable) {return complex<double>();}

