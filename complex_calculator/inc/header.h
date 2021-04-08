#ifndef HEADER_H
#define HEADER_H
/**
 *  strucure to store the real and imaginary values of a complex number
*/
typedef struct complex
{
    float real;
    float img;
}complex;
/**
 * sum function declaration that calculates the sum of two complex numbers
*/ 
complex sum(complex , complex);
/**
 *  sqr function declaration that calculates the square of a complex number
*/ 
complex sqr(complex);
/**
 *  mul function declaration that calculates the multiplication of two complex numbers
*/ 
complex mul(complex , complex);
/**
 *  div function declaration that calculates the divison of two complex numbers
*/ 
complex div(complex , complex);

void test_sum(void);

void test_mul(void);

#endif