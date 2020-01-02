/*
Suppose we have n cities with integer coordinate on a line.
First, we have to select a city to be the capital. 
Then in each operation, we have to choose a non-capital city and change it's coordinate by 1 ( -1 or +1 ).
We have to pick the capital and do the operations exactly  k time so that the sum of distances from cities to the capital is minimized.
Print the index of the selected capital and the desired sum after exactly k operations.
If there are multiple such choices, output the smallest index of an optimal capital. 

You are required to print the index of the selected capital and required sum after k operations. 
If there are multiple such choices, print the smallest index of an optimal capital.

Sample input 

5 47019
19912129 5 7138912 913 200134

Sample output 

5 27003104

Explanation

In the first sample we should choose the first city as the capital and move the other one four times.

Note that two or more cities may coincide before or after the operations.

In the second sample it's optimal to choose the last city as the capital.

*/

//Code:

#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n,k,i,ans,sum,mid;
	cin>>n>>k;
	long long a[n],d[n-1];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
    for(i=0;i<n;i++)
    {
        d[i]=a[i];
    }
    sort(a,a+n);
    mid=n/2;
    
    sum=0;
    for(i=0;i<n;i++)
    {
        if(a[mid]==d[i])
        {
            ans=i;
        }
        
        if(a[mid]>a[i])
        {
            
            sum+=a[mid]-a[i];
        }
        else{
            sum+=a[i]-a[mid];
        }
        
    }
    cout<<ans+1<<" "<<sum-k<<endl;
    
}


