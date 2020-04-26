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
    };

    class ComplexVariable{
    public:
        complex<double> c;

    public:
        ComplexVariable(): c(0){};
    };

    double solve();
}

