#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr [] = {1,-2,3,4,4,-2};
    int currentSum = arr[0];
    int maxSum = arr[0];


    for(int i = 1 ; i<6 ;i++)
    {
        currentSum = max(arr[i], currentSum+arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout<<maxSum<<endl;

    return 0;
}