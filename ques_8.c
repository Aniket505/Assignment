/**
 * Program to reverse a string
 *
 * Compilation: gcc -o ques_8 ques_8.c
 * Execution:./ques_8
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */
#include<stdio.h>
#include<stdio.h>
#include<string.h>

/**
 * Function to reverse string
 *
 * Parameters:
 * *str : base address of string
 *
 */
void reverse( char* str )
{
    int n = 0;
    int i = 0;
    while( str[i++] != 0 )
    {
        n++;
    }
    int l=0;
    int h=n-1;
    while(l<h){
        
	char temp;
	temp=str[h];
	str[h]=str[l];
	str[l]=temp;
        l++;
	h--;
    }
}

int main ()
{
    
    //Intializing string
    char str[1000];
    printf("Enter A String : ");
    //getting string as input
    fgets( str , 1000 , stdin);
    reverse(str);
    printf("%s",str);
  
}
