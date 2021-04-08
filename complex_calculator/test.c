/**
 * @mainpage The testing of complex calculator is done here.
 * This file contains the main() function for the entire project
*/
#include<stdio.h>
#include"header.h"
int main(){
    ///<Two complex numbers declared are going to be used for testing
    complex num1,num2;
    num1.real=3;
    num1.img=4;
    num2.real=5;
    num2.img=6;
    sum(num1,num2);
    sqr(num1);
    mul(num1,num2);
    div(num1,num2);
    return 0;
}