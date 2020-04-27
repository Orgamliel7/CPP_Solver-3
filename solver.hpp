//
// Created by shaharnik on 24/04/2020.
//

#pragma once
#include <complex>
namespace solver {
    class RealVariable{
    public:
        double x;

    public:
        RealVariable(): x(0){};

    friend RealVariable operator +(const RealVariable &, const RealVariable &);
    friend RealVariable operator +(const RealVariable &, const int);
    friend RealVariable operator +(const int, const RealVariable &);
    friend RealVariable operator -(const RealVariable &, const RealVariable &);
    friend RealVariable operator -(const RealVariable &, const int);
    friend RealVariable operator *(const int, const RealVariable &);
    friend RealVariable operator /(const RealVariable &, const int);
    friend RealVariable operator ^(RealVariable const &, const int);
    friend RealVariable operator ==(const RealVariable &, const RealVariable &);
    friend RealVariable operator ==(const RealVariable &, const int);
};

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

    double solve(RealVariable);//Function has to clear the varables of the reference
    std::complex<double> solve(ComplexVariable);

}

