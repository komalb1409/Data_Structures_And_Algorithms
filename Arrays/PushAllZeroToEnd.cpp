#include<bits/stdc++.h>
using namespace std;
#define n 11

void pushZero(int arr[])
{
    int count = 0 ;
    for(int  i = 0 ; i< n ;i++)
    {
        if(arr[i] != 0)
            arr[count++] = arr[i];
    }

    while(count < n)
        arr[count++] = 0;
    
}

int main()
{
    int arr[n] = {2,0,1,0,0,8,6,4,0,5,0};
    pushZero(arr);
    for(int i = 0 ; i< 11 ;i++)
    cout<<arr[i]<<" ";

}