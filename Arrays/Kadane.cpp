#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr [] = {2,5,-3,2,9,1};
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0 ; i<6 ;i++)
    {
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum = 0;
        }
        maxSum = max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;

    return 0;
}