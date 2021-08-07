/**
 * Program to multiply two given matrices.
 *
 * Compilation: gcc -o ques_5 ques_5.c
 * Execution:./ques_5
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */

#include<stdio.h>
int main()
{   
    //Variable for size of matrix
    int n;
    printf("Size : ");
    scanf( "%d" , &n);
    //Matrix1
    int arr1[n][n];
    //Matrix2
    int arr2[n][n];
    //Input Matrix1
    printf( "Matrix1 = ");
    for(int i = 0; i < n ; i++ )
    {
        for(int j = 0; j < n; j++ )
	{
	    scanf( "%d" , &arr1[i][j] );
	}
    }
    
    //Input Matrix2
    printf( "Matrix2 = ");
    for(int i = 0; i < n ; i++ )
    {
        for(int j = 0; j < n; j++ )
	{
	    scanf( "%d" , &arr2[i][j] ) ; 
	}
    }

    //Multipilcation of the Matrices
    
    //resultant matrix
    int result[n][n];

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ;j++ )
	{
	    result[i][j] = 0;
	    for(int k = 0; k < n ; k++ )
	    {
	        result[i][j] += arr1[i][k] * arr2[k][j];
	    }
	}
    }

    //Printing the resultant Matrix
    for(int i = 0; i < n ;i++)
    {
	for(int j = 0; j < n; j++)
	{
		printf("%d  ", result[i][j] ) ;
	}
	printf("\n");
    }

}
