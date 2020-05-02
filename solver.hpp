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
        double power = 1;

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
        friend RealVariable operator /(const double y, const RealVariable& x);
        friend RealVariable operator ^(RealVariable const &x, const double power);
        friend RealVariable operator ==(const RealVariable &, const RealVariable &);
        friend RealVariable operator ==(const RealVariable &, const double);
        friend RealVariable operator ==(const double y, const RealVariable& x);
    };
    double solve(RealVariable );


    // COMPLEX

    class ComplexVariable{
    private:
        std::complex<double> a;
        std::complex<double> b;
        std::complex<double> c;
    public:
        ComplexVariable(): a(0),b(1),c(0){}
        ComplexVariable(std::complex<double> a, std::complex<double> b, std::complex<double> c);
        // getters
        std::complex<double> const &getA() const{return this->a;};
        std::complex<double> const &getB() const{return this->b;};
        std::complex<double> const &getC() const{return this->c;};

        friend ComplexVariable operator +(const ComplexVariable &x, const ComplexVariable &y);
        friend ComplexVariable operator +(const ComplexVariable &x, std::complex<double> y);
        friend ComplexVariable operator +(std::complex<double> y, const ComplexVariable &);
        friend ComplexVariable operator +(const ComplexVariable &, std::complex<double>);
        friend ComplexVariable operator -(const ComplexVariable &, const ComplexVariable &);
        friend ComplexVariable operator -(const ComplexVariable &, const std::complex<double> n);
        friend ComplexVariable operator- (const std::complex<double> n , const ComplexVariable& x);
        friend ComplexVariable operator *(const std::complex<double> n, ComplexVariable const &);
        friend ComplexVariable operator /(ComplexVariable const &x, const std::complex<double> n);
        friend ComplexVariable operator^(ComplexVariable const &x, const std::complex<double> power);
        friend ComplexVariable operator ==(const ComplexVariable &, const int);
        friend ComplexVariable operator ==(const ComplexVariable &, const ComplexVariable &);
    };
    std::complex<double> solve(const ComplexVariable &x);
}
