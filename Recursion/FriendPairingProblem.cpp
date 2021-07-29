#include<bits/stdc++.h>
using namespace std;

int FriendPair( int n)
{
    if(n == 0 || n == 1 || n == 2)
    return n;

    return FriendPair(n-1) + FriendPair(n-2)* (n-1);
}

int main()
{
    int ans ;
    ans  = FriendPair(4);
    cout<<ans<<endl;
}