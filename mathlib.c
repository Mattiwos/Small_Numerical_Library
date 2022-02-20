#include "mathlib.h"

#include <math.h>
#include <stdio.h>
#define EPSILON 1E-10

// Got it from Piazza posted by Prof. Long.
static inline double Abs(double x) {
    return (x < 0) ? -x : x;
}

// Got it from piazza posted by Prof. Long.
long double Sqrt(long double x) {
    long double new = 1.0;
    long double old = 0.0;
    while (Abs(new - old) > EPSILON / 1000) {
        old = new;
        new = 0.5 * (new + x / new);
    }
    return new;
}

///Got it from piazza posted by Prof. Long.
double Exp(double x) {
    double term = 1;
    double sum = 1;
    for (int k = 1; Abs(term) > EPSILON; k += 1) {
        term *= x / k;
        sum += term;
    }
    return sum;
}

double arcSin(double x) {
    if (Abs(1 - x) < EPSILON) {
        return arcCos(Sqrt(1 - (x * x)));
    } else if (Abs(-1 - x) < EPSILON) {
        return -arcCos(Sqrt(1 - (x * x)));
    }

    double sum = x;
    double numerator = 1;
    double denominator = 2;
    double term = 1.0;
    double powx = x;
    while (Abs(term * (powx / numerator)) > EPSILON / 1000) {
        //divided epsilon 1000 in order to get better accuracy
        term *= (numerator / denominator);
        numerator += 2;
        denominator += 2;
        powx *= x * x;
        sum += (term * (powx / numerator));
    }
    return sum;
}

double arcCos(double x) {
    double i = arcSin(x);
    return ((M_PI / 2) - i);
}

double arcTan(double x) {
    double d = Sqrt(((x * x) + 1));
    return arcSin(x / d);
}
//Inspired by Eric Hernandez piazza post pdf explaining Newton's Method
//  4/14 Tutoring Session
double Log(double x) {
    double y_k = 1.0;
    double f = Exp(y_k);
    while (Abs(x - f) > EPSILON) {
        y_k += ((x - f) / f);
        f = Exp(y_k);
        //printf("%lfGuess=",f);
    }
    return y_k;
}
