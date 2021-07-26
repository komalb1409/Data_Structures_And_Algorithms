#include<bits/stdc++.h>
using namespace std;

int main()
{


    int a[8] = {5,2,8,3,5,8,3,5};

    const int N = 1e6+2;
    int idx[N];
    for(int i = 0 ; i<N ;i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for(int i = 0; i<8 ;i++);
    {
        if(idx[a[i]] != -1)
        {
            minidx  = min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }
    if(minidx == INT_MAX)
    {
        cout<<-1;
    }
    else
    {
        cout<<minidx + 1 <<endl;
    }


    return 0;
}