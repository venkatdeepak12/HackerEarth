/*

You are given two strings  S and T  of the same length N. 
Your task is to convert the string  S into T by doing some operations. 
In an operation, you can delete the first character of the string S and append any character at the end of the string.
You are required to determine the minimum number of operations to convert S into T .

Sample Input:

7
aaxaabc
aabcaax

Sample Output:

3

*/

//Code:

#include <iostream>
#include<string>
using namespace std;

int main() {
	long n,i,j,count,r,f;
    string str1,str2;
    cin>>n;
    cin>>str1>>str2;
    
    count=0;
    r=0;
    for(i=0;i<n;i++)
    {
        if(str1[n-1]==str2[i])
        {
            for(j=1;j<=i;j++)
            {
                if(str1[n-j-1]==str2[i-j])
                {
                    r++;
                  if(count<r)
                  {
                      count=r;
                  }
                  
                }
                else
                {
                    break;
                }
            }
        }
        r=0;
    }
    if(count==0)
    {
        cout<<n<<endl;
    }
	     
	 else
	 {
	     cout<<(n-count-1)<<endl;
	 }
	
return 0;	
}
