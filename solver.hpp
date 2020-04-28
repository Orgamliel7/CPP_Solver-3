//
// Created by shaharnik on 24/04/2020.
//

#pragma once
#include <complex>
namespace solver
{
    class RealVariable
    {
        double a,b,c;

        //Constructor
    public:
        RealVariable(double a ,double b, double c);
        RealVariable(): a(0), b(1), c(0){}

        //getters
        const double& getA () const{ return a; }
        const double& getB () const{ return b; }
        const double& getC () const{ return c; }

        // Operators overloading
        friend RealVariable operator +(const RealVariable &, const RealVariable &);
        friend RealVariable operator +(const RealVariable &, const double);
        friend RealVariable operator +(const double, const RealVariable &);
        friend RealVariable operator -(const RealVariable &, const RealVariable &);
        friend RealVariable operator -(const RealVariable &, const double);
        friend RealVariable operator-(const double y, const RealVariable& x);
        friend RealVariable operator *(const double, const RealVariable &);
        friend RealVariable operator /(const RealVariable &, const double);
        friend RealVariable operator ^(RealVariable const &, const double);
        friend RealVariable operator ==(const RealVariable &, const RealVariable &);
        friend RealVariable operator ==(const RealVariable &, const double);
        friend RealVariable operator ==(const double y, const RealVariable& x);
    };
    double solve(RealVariable );




    // COMPLEX

    class ComplexVariable{
    //public:
        std::complex<double> c;

    public:
        ComplexVariable(): c(0,0){};

    friend ComplexVariable operator +(const ComplexVariable &, const ComplexVariable &);
    friend ComplexVariable operator +(const ComplexVariable &, const int);
    friend ComplexVariable operator +(const int, const ComplexVariable &);
    friend ComplexVariable operator +(const ComplexVariable &, std::complex<double>);
    friend ComplexVariable operator -(const ComplexVariable &, const ComplexVariable &);
    friend ComplexVariable operator -(const ComplexVariable &, const int);
    friend ComplexVariable operator *(const int, ComplexVariable const &);
    friend ComplexVariable operator /(ComplexVariable const &, const int);
    friend ComplexVariable operator^(ComplexVariable const &, const int);
    friend ComplexVariable operator ==(const ComplexVariable &, const int);
    friend ComplexVariable operator ==(const ComplexVariable &, const ComplexVariable &);
};
    std::complex<double> solve(ComplexVariable);

}

