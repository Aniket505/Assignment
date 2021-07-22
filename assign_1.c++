/**
 * Program which computes square root of an integer without using inbuild functions
 *
 * Compilation: g++ -o assign_1 assign_1.c++
 * Execution:./assign_1
 *
 * @Aniket , (1910990836) , 19/07/2021
 * Assignment 1
 */
#include<bits/stdc++.h>
using namespace std;

/**
 * Function computes square root using binary search
 *
 * Parameters:
 * n:integer number whose square root to compute
 * p:int precision
 * Returns square root in double type
 */
double square_root(int n,int p)
{
	int mid,start=0;
	int end=n;
	double result;
	//Finding the integer part by binary search
	while(start<=end)
	{
		mid=(start+end)/2;
		if(mid*mid==n)
		{
			result=mid;
			break;
		}
		else if(mid*mid<n)
		{
			start=mid+1;
		        result=mid;
		}
		else
			end=mid-1;
	}
	//Finding the fractional part by linear search
        double frac=0.1;
	for(int i=0;i<p;i++)
	{
		while(result*result<=n)
		{
			result+=frac;
		}
		result=result-frac;
		frac/=10;
	}
	return result;
}

int main()
{      
       int n=0;
       int p=0;

       cout<<"Enter Number"<<endl;
       cin>>n;
       cout<<"Enter precision value"<<endl;
       cin>>p;

       //
       cout<<square_root(n,p);
}

