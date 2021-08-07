/**
 * Program which returns the first location in string 1 where any character from string 2 occurs
 *
 * Compilation: gcc -o ques_11 ques_11.c
 * Execution:./ques_11 
 *  
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1 
 *  
 */

#include<stdio.h>
#include<string.h>
#define MAXSIZE 1000

/**
 * Function to squeeze string 1
 *  
 * Parameters:
 *  *s : base address of string 1 
 *  *t : base address of string 2
 *      
 *  
 */ 
int any(char s[], char t[]){
    int i = 0;
    int j = 0;
    for( i = 0; i < strlen(s) - 1 ; i++ )
    {
        for( j = 0; j < strlen(t) - 1 ; j++ )
	{
            if( s[i] == t[j] )
		    return i;   //location of first character which is in string 1 and string 2 both
	}
	j = 0;
    }
    return -1;   //no character of string 2 is in string 1
}

int main()
{
    char str1[MAXSIZE];
    printf("Enter String 1 : ");
    fgets( str1, MAXSIZE, stdin);
    char str2[MAXSIZE];
    printf("Enter String 2 : ");
    fgets( str2, MAXSIZE, stdin);
    printf("%d", any(str1,str2));
    
}
