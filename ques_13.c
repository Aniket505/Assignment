/**
 * Program which returns 1 if the second string occurs at the end of first string
 *
 * Compilation: gcc -o ques_13 ques_13.c
 * Execution:./ques_13
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */

#include<stdio.h>
#include<string.h>
#define MAXSIZE  1000

/** 
 * Function to return the position of the rightmost occurence of string 2 in string 1
 *  
 * Parameters:
 *  *s : base address of string 1 
 *  *t : base address of string 2
 *      
 *       
 */ 
int strend(char *s , char *t)
{   
    int i=0 , j=0;
    int n1 = strlen(s);
    int n2 = strlen(t);
    int x = n1 - n2 ;
    
    for( i = 0  ; i < n2; i++ )
    {
        if( s[x] != t[i] )
	{
	    return 0;
	}
	x++;
    }
    return 1;
}

int main() {
    char str1[MAXSIZE];
    char str2[MAXSIZE];
    printf("Enter First String : ");
    fgets(str1,MAXSIZE,stdin);
    printf("Enter Second String : ");
    fgets(str2,MAXSIZE,stdin);  
    printf("%d",strend(str1,str2));
}
