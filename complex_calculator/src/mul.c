#include<stdio.h>
#include "header.h"
/**
 * @file mul.c where the function for the multiplication of two complex nummbers is defined
 * @param[in] num1 The first complex number
 * @param[in] num2 The second complex number
 * @param[out] dum addition of two complex numbers
 * Formula1=num1.real * num2.real-num1.img*num2.img
 * Formula2=num1.img*num2.real + num2.img*num1.real
*/
complex mul(complex num1,complex num2)
{
    complex dum;
    dum.real=num1.real * num2.real-num1.img*num2.img;
    dum.img=num1.img*num2.real + num2.img*num1.real;
    return dum;
}