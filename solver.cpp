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
RealVariable solver::operator +(const RealVariable &x, const RealVariable &y)
{
    return RealVariable(x.getA()+y.getA(), x.getB()+y.getB(), x.getC()+y.getC());
}
RealVariable solver::operator +(const RealVariable &x, const double y)
{
    return RealVariable(x.getA(), x.getB(), x.getC()+y);
}
RealVariable solver::operator +(const double y, const RealVariable &x)
{
    return RealVariable(x.getA(), x.getB(), x.getC()+y);
}
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
RealVariable solver::operator /( const RealVariable &x ,const double y)
{
    return RealVariable(x.getA()/y, x.getB()/y, x.getC()/y);
}
RealVariable solver::operator/(const double y, const RealVariable& x)
{
    if(x.getC()!=0)
        return RealVariable(x.getA(), x.getB(), y / x.getC());
    else
        throw std::invalid_argument("Cant divide by zero!");
}
// Operator ^ power
RealVariable solver::operator ^(RealVariable const &x, const double power)
{
    if ((power>2) || (power<0) ){
        throw std::invalid_argument("The power violates the task condition!");
    }
    //Trivial cases
    if(power==0)
        return RealVariable(0,0,1);
    if(power==1)
        return x;
    //power equal to 2 cases:
    if( power==2&& x.getC()!=0 &&x.getB()!=0 )
        return RealVariable(pow(x.getB(),power),x.getB()*x.getC()*power,pow(x.getC(),power));
    if( power==2&& x.getC()==0 && x.getB()!=0 )
        return RealVariable(pow(x.getB(),power),0,0);
}
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
ComplexVariable::ComplexVariable(std::complex<double> a, std::complex<double> b, std::complex<double> c) {
    this->a = a;
    this->b = b;
    this->c = c;
}
//operator +
ComplexVariable solver::operator +(const ComplexVariable &x, const ComplexVariable &y){
    return ComplexVariable(x.getA() + y.getA(), x.getB() + y.getB(), x.getC() + y.getC());
}
ComplexVariable solver::operator +(const ComplexVariable &x, std::complex<double> y){
    return ComplexVariable(x.getA(), x.getB(), x.getC() + y);
}
ComplexVariable solver::operator +(std::complex<double> y, const ComplexVariable &x){
    return ComplexVariable(x.getA(), x.getB() , x.getC()+y);
}
//operator -
ComplexVariable solver::operator -(const ComplexVariable &x, const ComplexVariable &y){
    return ComplexVariable(x.getA() - y.getA() , x.getB() - y.getB() , x.getC() - y.getC());
}
ComplexVariable solver::operator -(const ComplexVariable &x, const complex<double> n){
    return ComplexVariable(x.getA(), x.getB() , x.getC()-n);
}
ComplexVariable operator- (const complex<double> n , const ComplexVariable& x) {
    return ComplexVariable(-x.getA(), -x.getB() , -x.getC()+n);
}
//operator *
ComplexVariable solver::operator*(const complex<double> n, ComplexVariable const &x) {
    return ComplexVariable(x.getA()*n, x.getB()*n, x.getC()*n);
}
//operator /
ComplexVariable solver::operator /(ComplexVariable const &x, const complex<double> n){
    return ComplexVariable(x.getA() / n, x.getB() / n, x.getC()/n);
}
//operator ^ (power)
ComplexVariable solver::operator^(ComplexVariable const & x, const complex<double> power) {
    if (power.real() == 0) {
        return ComplexVariable(std::complex<double>(1.0, 0.0), std::complex<double>(0.0, 0.0),
                               std::complex<double>(0.0, 0.0));
    }
    if (power.real() == 1) {
        return ComplexVariable(std::complex<double>(0.0, 0.0), std::complex<double>(1.0, 0.0),
                               std::complex<double>(0.0, 0.0));
    }
    //power equal to 2 cases:
    if (power.real() == 2) {
        return ComplexVariable(x.getA() + x.getB(), 0, x.getC());
    }
    else if(power.real()>2)
        throw std::invalid_argument("The power violates the task condition!");
}
//operator ==
ComplexVariable solver::operator ==(const ComplexVariable &x, const int y){
    return x-y;
}
ComplexVariable solver::operator ==(const ComplexVariable &x, const ComplexVariable &y){
    return x-y;
}
complex<double> solver::solve(const ComplexVariable &x) {
    complex<double> a = x.getA();
    complex<double> b = x.getB();
    complex<double> c = x.getC();
    if(a == std::complex<double>(0.0,0.0)) {
        if(b == std::complex<double>(0.0,0.0) && c != std::complex<double>(0.0,0.0))
            __throw_runtime_error("No solution");
        if(b == std::complex<double>(0.0,0.0) && c == std::complex<double>(0.0,0.0))
            return complex<double>(0,0);
        else return c/-b;
    }
    return ( (-b + sqrt(b*b -std::complex<double>(4.0,0.0)*a*c)) / (std::complex<double>(2.0,0.0)*a) );
}
