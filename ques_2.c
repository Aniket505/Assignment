/**
 * Program to print a pyramid of #
 *
 * Compilation: gcc -o ques_2 ques_2.c
 * Execution:./ques_2
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */

#include<stdio.h>
int main()
{
    //variable for number of rows
    int rows;
    printf( "Number Of Rows = " );
    scanf("%d",&rows );
    //variable for number of spaces
    int blank;
    int i, j ;
    for( i = 1; i <= rows; i++ )
    {
	//Loop for creating spaces
        for( blank = 1; blank <= ( rows - i ); blank++ )
        {
            printf(" ");
        }
	//Loop for #'s
        for(j = 1; j <= 2*i - 1; j++ )
        {
            if( j % 2 == 0 )
	    {
	        printf(" ");
	    }
	    else
	        printf("#");
        }

        printf("\n");
    }
}
