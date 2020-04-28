//
// Created by shaharnik on 24/04/2020.
//

#include "solver.hpp"
#include <complex>
#include <iostream>

using namespace std;
using namespace solver;
RealVariable::RealVariable(double a ,double b, double c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}
//Operator +
RealVariable solver::operator +(const RealVariable &x, const RealVariable &y){return RealVariable();}
RealVariable solver::operator +(const RealVariable &x, const double){return RealVariable();}
RealVariable solver::operator +(const double y, const RealVariable &x){return RealVariable();}
// Operator -
RealVariable solver::operator -(const RealVariable &x, const RealVariable& y)
{return RealVariable(x.getA()-y.getA(), x.getB()-y.getB(), x.getC()-y.getC());}
RealVariable solver::operator -(const RealVariable & x, const double y)
{return RealVariable(x.getA(), x.getB(), x.getC()-y);}
RealVariable solver::operator-(const double y, const RealVariable& x){
    return RealVariable(x.getA(), x.getB(), y-x.getC());}
// Operator *
RealVariable solver::operator *(const double y, const RealVariable& x)
{return RealVariable(x.getA()*y, x.getB()*y, x.getC()*y);}
// Operator /
RealVariable solver::operator /( const RealVariable & ,const double){return RealVariable();}
// Operator ^
RealVariable solver::operator ^(RealVariable const &, const double){return RealVariable();}
// Operator ==
RealVariable solver::operator ==(const RealVariable& x, const RealVariable& y){return x-y;}
RealVariable solver::operator ==(const RealVariable& x, const double y){return x-y;}
RealVariable solver::operator ==(const double y, const RealVariable& x){return y-x;}

// Solve Function for RealVariable
double solver::solve(const RealVariable x) {
    double a = x.getA();
    double b = x.getB();
    double c = x.getC();
    // need throw error about power>2
    if(a==0) {
        if(b==0 && c!=0)
            throw std::out_of_range {" there is no result "};
        else return c/-b;
    }

    if ((b * b - 4 * a * c) > 0)
        return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        //  return(-x.b + sqrt(x.b * x.b - 4 * x.a * x.c)) / (2 * x.a); need to check this case

    else if ((b * b - 4 * a * c) == 0)
        return ((-b + sqrt(b * b - 4 * a * c)) / (2 * a));

    throw std::out_of_range {"There is no a real solution !"};
}




// -----======== Part 2 ========------

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

