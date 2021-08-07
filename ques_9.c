/**
 * Program to convert hexadecimal to decimal
 *
 * Compilation: gcc -o ques_9 ques_9.c
 * Execution:./ques_9
 *  
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1 
 */ 

#include<stdio.h>
#include<string.h>
#define MAXSIZE 1000

/**
 * Function to convert hexadecimal to decimal
 *
 * Parameters:
 * *str : base address of string
 *  
 * returns equivalent decimal number of the given  hexadecimal
 */ 

int htoi(char *s)
{
    int i = 0;
    int ans = 0;
    if( s[0] == '0' && ( s[1] == 'x' || s[1] == 'X' ) ) 
    {
	    i = 2;
    }
    for(; i < strlen(s) - 1 ; i++) 
    {
        ans = ans * 16;
        if(s[i] >= '0' && s[i] <= '9')
       	{
            ans = ans + s[i] - '0';
        }
	else if(s[i] >= 'a' && s[i] <= 'f')
       	{
            ans = ans + s[i] - 'a' + 10;
        } 
	else if(s[i] >= 'A' && s[i] <= 'F') 
	{
            ans = ans + s[i] - 'A' + 10;
        }
    }
    return ans;
}

int main()
{
    char str[MAXSIZE];
    printf("Enter hexadecimal number : ");
    fgets(str, MAXSIZE, stdin);

    printf("In Decimal : ");
    printf("%d", htoi(str));
}
