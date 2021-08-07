/**
 * Program to swap to numbers without using third variable.
 *
 * Compilation: gcc -o ques_1 ques_1.c
 * Execution:./ques_1
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */

#include<stdio.h>
int main()
{
    //First number
    int a;
    //Second Number
    int b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    //taking sum of two numbers and storing it in first number
    a=a+b;
    //subtracting second number from the sum and storing it in second number 
    b=a-b;
    //subtracting first number from the sum and storing it in first number
    a=a-b;
    //Numbers are swaped
    printf("a = %d, b = %d",a,b);
}
