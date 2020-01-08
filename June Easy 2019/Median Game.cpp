/*

You are given an array A of N integers. You perform this operation N-2 times: 
For each contiguous subarray of odd size greater than 2, you find the median of each subarray
(Say medians obtained in a move are M1,M2,M2.... ). 
In each move, you remove the first occurrence of value min(M1,M2.M3,...) from the original array.
After removing the element the array size reduces by 1 and no void spaces are left. 
For example, if we remove element 2 from the array {1,2,3,4}, the new array will be {1,3,4}.

Print a single integer denoting the sum of numbers that are left in the array after performing the operations.
You need to do this for T test cases.

Sample Input:

2
4
2 5 3 2
4
1 1 1 1

Sample Output:

7
2

*/

//Code:


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long t,n,i;
	cin>>t;
	while(t--)
	{
	   cin>>n;
	   long a[n];
	   for(i=0;i<n;i++)
	   {
	       
	       cin>>a[i];
	   }
	   sort(a,a+n);
	   cout<<a[0]+a[n-1]<<endl;
	    
	}
}


