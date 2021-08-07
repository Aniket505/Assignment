/**
 * Program to check string is  palindrone or not.
 *
 * Compilation: gcc -o ques_6 ques_6.c
 * Execution:./ques_6
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */
#include<stdio.h>
#include<stdio.h>
#include<string.h>
#define MAXSIZE 1000

/**
 * Function to check string is palindrone or not
 *
 * Parameters:
 * *str : base address of string
 * 
 *return 1 : When string is palindrone 
 *return -1 : When string is not palindrone
 */
int palindrone(char *str)
{   
    int i;
    int len = strlen(str);

    for( i=0 ; i < len; i++)
    {
        if( str[i]>=65 && str[i]<=90 )
            str[i] = str[i] + 32;
    }
    // l : starting index
    int l = 0;
    // h : ending index
    int h = strlen(str) - 1 ;

    while( l <= h )
    {
        if( !( str[l] >= 'a' && str[i] <= 'z' ) )
        {
            l++;
        }

        else  if( !( str[h] >= 'a' && str[h] <= 'z') ) 
        {
            h--;
        }

        else if ( str[l] == str[h] )
        {
            l++;
            h--;
        }

        else
            return -1;
    }
    return 1;
}

int main()
{
    char str[MAXSIZE];

    printf("Enter A String : ");
    fgets(str, MAXSIZE, stdin);

    int flag = palindrone(str);
    if(flag == -1)
        printf("false");
    else
        printf("true");
}
