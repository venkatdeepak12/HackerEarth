/*
You are given a 1 x n  grid and k colors. 
Your task is to determine the number of ways to color each cell by adhering to the following condition:

For any vertical line that divides the grid into two non-empty parts, 
the number of distinct colors on the right side must be equal to the number of distinct colors on the left side.
Note that you can only divide the grid so that every cell either completely belongs to the left or right.

Sample input 

189232688 48695377

Sample output 

48695377

*/

//Code:

#include <iostream>
#include<math.h>
using namespace std;

int main() {
	long n,m;
	cin >> n>>m;
     if(n!=2)   {
        
        cout<<m<<endl;
    }
    if(n==2){
        cout<<m*m<<endl;
    }
       
	
}

