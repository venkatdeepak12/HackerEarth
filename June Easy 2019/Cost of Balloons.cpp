/*
You are conducting a contest at your college. This contest consists of two problems and  participants. 
You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. 
There are only green and purple-colored balloons available in a market. 
Each problem must have a balloon associated with it as a prize for solving that specific problem. 
You can distribute balloons to each participant by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons for the second problem
Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve.
Your task is to print the minimum price that you have to pay while purchasing balloons.

Sample Input:

2
9 6
10
1 1
1 1
0 1
0 0
0 1
0 0
0 1
0 1
1 1
0 0
1 9
10
0 1
0 0
0 0
0 1
1 0
0 1
0 1
0 0
0 1
0 0

Sample Output:

69
14

*/

//Code:


#include <iostream>

using namespace std;

int main() {
    long t,g,p,n,p1,p2,sum1,sum2,sum,min,max;
    cin>>t;
    while(t--)
    {
        cin>>g>>p>>n;
        max=(g>=p)?g:p;
        min=(g<=p)?g:p;
        sum1=sum2=0;
        while(n--)
        {
            cin>>p1>>p2;
            sum1+=p1;
            sum2+=p2;
        }
        if(sum1>=sum2)
        {
            sum=(sum1*min)+(sum2*max);
        }
        else{
            
            sum=(sum2*min)+(sum1*max);
        }
       cout<<sum<<endl; 
    }
    
}


