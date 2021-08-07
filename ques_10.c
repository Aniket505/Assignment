/**
 * Program to delete the characters in string 1 which occurs in string 2
 *
 * Compilation: gcc -o ques_10 ques_10.c
 * Execution:./ques_10
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 *
 * reference from : http://www.learntosolveit.com/cprogramming/Ex_2.4_squeezess.html
 */

#include<stdio.h>
#include<string.h>
#define MAXSIZE 100

/**
 * Function to squeeze string 1
 *
 * Parameters:
 *  *s : base address of string 1
 *  *t : base address of string 2
 *  
 *  
 */ 
void squeeze(char *s,char *t)
{
    int i, j , k = 0;
    
    for(i = 0; s[i] != '\0' ; ++i )
    {
        for( j = 0 ; (s[i] != t[j]) && t[j] != '\0' ; ++j)
            ;
        if( t[j] == '\0' )
            s[k++] = s[i];
    }
   
    s[k] = '\0';
    puts(s);
}
int main()
{
	char s1[MAXSIZE];
	char s2[MAXSIZE];
	printf("Enter string 1 : ");
	gets(s1);
	printf("Enter string 2 : ");
	gets(s2);
        squeeze(s1, s2);
}
