/**
 * Program to reverse an array
 *
 * Compilation: gcc -o ques_4 ques_4.c
 * Execution:./ques_4
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */
#include<stdio.h>

/**
 * Function to reverse array
 *
 * Parameters:
 * *arr : base address of array
 * start : starting index of array
 * n: size of array
 *
 */
void reverse_array(int *arr, int start , int n)
{
    //variable intialized to the end of the array
    int j=n;
    while(start<j)
    {
	//swap element at first index and element at last index.
        arr[j]=arr[start]+arr[j];
	arr[start]=arr[j]-arr[start];
	arr[j]=arr[j]-arr[start];
        start++;
	j--;
    }
}
int main()
{
    // Size of Array
    int n;
    printf("Enter Size Of Array : ");
    scanf("%d", &n);
    int arr[n];
    // Input Array
    for(int i = 0 ; i < n ; i++)
    {
        scanf( "%d", &arr[i] );
    }
    reverse_array(arr,0,n-1);
    for(int i = 0 ;i < n; i++)
    {
	printf("%d ",arr[i]);
    } 
}
