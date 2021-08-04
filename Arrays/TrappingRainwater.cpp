#include<bits/stdc++.h>
using namespace std;


    // Function to find the trapped water between the blocks.
    int trappingWater(int arr[], int n){
     
      
    int water = 0;
    int start = 0, end = n - 1;
    int leftmax = 0, rightmax = 0;

    while(start < end)
    {
            
        leftmax = max(leftmax, arr[start]);
        rightmax = max(rightmax, arr[end]);

        if(leftmax < rightmax)
            water += leftmax - arr[start++];
        
        else
            water += rightmax - arr[end--];
    }

    return water;
        
    }


int main(){
    
    int arr[12] ={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappingWater(arr, 12);
    
    return 0;
}  