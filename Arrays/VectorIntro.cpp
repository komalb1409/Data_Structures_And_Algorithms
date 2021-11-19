#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,10,12,15};


    arr.pop_back(); //deletes element from back

    for(int i = 0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    arr.push_back(16); //insert element at back;


    for(int i = 0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}