/*

Arpa and Dishant are playing a game with a pile of N cards. 
Both the players taketheir turns alternately starting from Arpa. 
In each turn, a player can remove at least 1 and at most K cards from the pile.
If a player cannot make the next move, then the player loses the game. 
If both the players play optimally, your task is to determine the winner. 
You need to determine the winners for T independent games.

Sample INput:

2
5 2
2 1

Sample Output:

Arpa
Dishant

Explanation:

For the first test case, Arpa chooses 2 cards. Now there are 3 cards left in the pile. It does not matter how many cards Dishant chooses from the pile, he'll always lose. 

For the second test case, both the players need to choose exactly 1 card from the pile. Hence, Dishant wins this game!

*/

//Code:


#include <iostream>

using namespace std;

int main() {
long long n,k,t;
cin>>t;
while(t--)
{
    cin>>n>>k;
    if(n%(k+1)==0)
    {
        cout<<"Dishant"<<endl;
    }
    else
    {
        cout<<"Arpa"<<endl;
    }
}
}




