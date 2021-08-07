/**
 * Program to execute strcat ,strcpy and strcmp string functions.
 *
 * Compilation: gcc -o ques_14 ques_14.c
 * Execution:./ques_14
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */ 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100

/**
 * Function to find length of the string
 *
 * Parameters:
 *  *s : base address of string 1
 *  
 * returns length of the string
 */
int strnlen1(char *s)
{
    int i = 0;
    while( s[i] != '\0' )
    {
        i++;
    }
    return i;
}

/** 
 * Function to execute strcat function
 *  
 * Parameters:
 *  *str1 : base address of string 1 
 *  *str2 : base address of string 2
 *  n : number of characters on which operation is to be performed
 *       
 */
char *strncat_fun (char *str1, char *str2, int n) {
    int i = 0;
    while( *str1 )
    {
        str1++;
    }
    while(n > 0 && *str2)
    {
        *str1 = *str2;
	str1++;
	str2++;
	n--;
    }
    *str1 = '\0';
    return str1;
}

/**
 * Function to execute strcpy function
 *
 * Parameters:
 *  *str1 : base address of string 1
 *  *str2 : base address of string 2
 *  n : number of characters on which operation is to be performed
 *
 */
char *strncpy_fun(char *s , char *t, int n)
{
    while( *s )
    {
	if(n != 0)
	{
            *s = *t;
	    n--;
	}
	s++,t++;
    }
	*s = '\0';
    return s;
}

/**
 * Function to execute strcmp function
 *
 * Parameters:
 *  *str1 : base address of string 1
 *  *str2 : base address of string 2
 *  n : number of characters on which operation is to be performed
 *
 * returns 0 : When strings are same
 * returns > 0 : When String 1 is bigger than String 2
 * returns < 0 : When String 1 is smaller than String 2
 */
int strncmp_fun(char *s , char *t, int n)
{
    if(strnlen1(s) == strnlen1(t))
    {
        while( *s == *t && n )
	{
            s++,t++,n--;
	}
	if( n == 0 )
	    return 0;
	else
            return 1;
    }  
    else
	return strnlen1(s) -strnlen1(t);
}

int main ()
{
    int n;   // For number of characters on which operation is to be performed
    char str1[N];
    printf("For strcat function\n");
    printf("Enter String 1 : ");
    gets(str1);
    char str2[N];
    printf("Enter String 2 : ");
    gets(str2);
    printf("Enter number of characters on which operation is to be performed : ");
    scanf("%d", &n);
    strncat_fun(str1, str2, n);
    printf("Resultant String : %s",str1);
    printf("\n");
    printf("\n");
    
    char str3[N];
    printf("\nFor strcpy function\n");
    printf("Enter String 1 : ");
    gets();
    gets(str3);
    char str4[N];
    printf("Enter String 2 : ");
    gets(str4);
    printf("Enter number of characters on which operation is to be performed : ");
    scanf("%d", &n);
    strncpy_fun(str3, str4, n);
    printf("Resultant String : %s",str3);
    printf("\n");
    printf("\n");

    char str5[N];
    printf("\nFor strcmp function\n Result = 0 : When strings are same\n Result > 0 When String 1 is bigger than String 2\n Result < 0 : When string 1 is smaller then string 2\n");
    printf("Enter String 1 : ");
    gets();
    gets(str5);
    char str6[N];
    printf("Enter String 2 : ");
    gets(str6);
    printf("Enter number of characters on which operation is to be performed : ");
    scanf("%d", &n);
    printf("Result : %d",strncmp_fun(str5, str6, n));

}
