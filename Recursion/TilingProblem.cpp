#include<bits/stdc++.h>
using namespace std;

int tilingWays(int n)
{
    if(n == 0)
    return 0;

    else if(n == 1)
    return 1;

    return tilingWays(n-1) + tilingWays(n-2);

}

int main()
{
    int ans;
    ans = tilingWays(4);
    cout<<ans<<endl;
    return 0;
}