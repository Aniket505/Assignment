/**
 * Program which returns the position of the rightmost occurence of string 2 in string 1 
 *
 * Compilation: gcc -o ques_12 ques_12.c
 * Execution:./ques_12
 *  
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1 
 *  
 * reference from : https://learntosolveit.com/cprogramming/Ex_4.1_strindex_rightmost.html
 */ 
#include<stdio.h>
#include<string.h>
#define MAXSIZE 1000

/**
 * Function to return the position of the rightmost occurence of string 2 in string 1
 *  
 * Parameters:
 *  *s : base address of string 1 
 *  *t : base address of string 2
 *      
 *      
 */ 
int strindex(char *s, char *t){
    int index = -1;
    int j,k;
    for (int i = 0 ; s[i] != '\0' ; i++)
    {
        for( j = i , k = 0; t[k] != '\0' && s[j] == t[k] ; j++,k++);
        if(k > 0 && t[k] == '\0')
	    index = i;
    }
    return index;
}

int main()
{
    char str1[MAXSIZE];
    printf("Enter String 1 : ");
    gets(str1);
    char str2[MAXSIZE];
    printf("Enter String 2 : ");
    gets(str2);
    printf("%d",strindex(str1, str2));   

}
