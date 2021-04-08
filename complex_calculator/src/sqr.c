#include<stdio.h>
#include "header.h"
/**
 * @file sqr.c where the function for the square of complex number is defined
 * @param[in] num The complex number
 * @param[in] dum The return complex number
*/
 complex sqr(complex num)
{
  ///dummy variable to store the return data
  complex dum;
  dum.real=num.real*num.real-num.img*num.img;
  dum.img=2*num.real*num.img;
  return dum;
}