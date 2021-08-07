/**
 * Program to count number of vowels and consonants in a string.
 *
 * Compilation: gcc -o ques_3 ques_3.c
 * Execution:./ques_3
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */

#include<stdio.h>
#include<string.h>
int main()
{
    //Intializing string
    char str[1000];
    //variable to count vowels
    int vowels=0;
    //variable to count consonants
    int consonants=0;
    //getting string as input
    fgets(str, 1000, stdin);
    for(int i=0;str[i];i++)
    {
	if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
	{
	    if( str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U' )
	    {
                vowels++;
		continue;
	    }
	    consonants++;
	}
    }
    printf("Vowels= %d, Consonants=%d",vowels,consonants);
}
