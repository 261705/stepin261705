#include<stdio.h>
#include "header.h"
/**
 * @file Sum.c where the function for the addition of two complex nummbers is defined
 * @param[in] num1 The first complex number
 * @param[in] num2 The second complex number
 * @param[out] dum addition of two complex numbers
 * Formula1=num1.real + num2.real
 * Formula2=num1.img + num2.img
*/
complex sum(complex num1,complex num2)
{
    ///dummy variable to store the return data
    complex dum;
    dum.real=num1.real+num2.real;
    dum.img=num1.img+num2.img;
    return dum;
}