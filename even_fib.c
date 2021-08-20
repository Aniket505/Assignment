/*
 *Program to print n even numbers in fibonacci series
 *
 * Aniket Thakur , Roll No. : 1910990836
 *
 */

#include<stdio.h>

/*
 *Function To print even numbers in fibonacci series.
 */
void even_fib(int n)
{
    int a = 2, b = 8;   //a is first even number , b is second even number
    printf("%d ",a);  // first number
    while(n > 1)
    {
	printf("%d ",b);
        b = 4*b + a;    // by finding a pattern i.e. fib(i) = 4*fib(i - 3) + fib(i - 6) 
        a = b;
        n--;	
    }
}

int main()
{
    int n;
    printf("Enter Number Of Even Terms To Be printed : ");
    scanf("%d",&n);
    even_fib(n);
}
