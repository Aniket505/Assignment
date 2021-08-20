/*
 * Program to find the mth smallest element from an array
 *
 * Compilation: gcc mth_smallest_no.c
 * Execution: ./a.out
 * @Aniket Thakur,1910990836,19/08/2021
 * Assignement 8
 */
#include<stdio.h>
#include<assert.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int a[], int l, int h, int pivot)
{
    int i = l, j = l;
   
    while (i <= h)
    {
        if (a[i] > pivot)
        {
            i++;
        }
        else
        {
            swap(&a[i], &a[j]);
           
            i++;
            j++;
        }
    }
    return j-1;
}

int mth_smallest (int arr[], int l, int h, int m)
{
    int pivot = arr[h];
   
    int pi = partition(arr, l, h, pivot);
   
    if (pi == m - 1)
    {
        return arr[pi];
    }
    else if (pi < m)
    {
        return  mth_smallest(arr, pi + 1, h, m);
    }
    else
    {
        return mth_smallest(arr, l, pi - 1, m);  
    }
}

int main()
{
    int n;
    printf("Enter Number of elements in array : ");
    scanf("%d",&n);
    int k;
    printf("Enter value of k : ");
    scanf("%d",&k);
    int a[n];
    printf("Enter elements of array : ");
    for(int i = 0 ; i < n ; i++ )
	scanf("%d",&a[i]);
    printf("%dth smallest element : %d", k,mth_smallest(a, 0, n-1, k));
}
