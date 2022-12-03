
#include<bits/stdc++.h>
using namespace std;

void  swapfun(int arr[] , int low , int high)
{
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;

}

void dnfsort(int arr[], int n)
{
    int high = n- 1;

    int low = 0;
    int mid = 0;

    while(mid<=high)
    {
        if(arr[mid]==0)
    {
        swapfun(arr,low,mid);
        low++;
        mid++;
    }
    else if (arr[mid]==1)
    {
        mid++;
    }
    else{
        swapfun(arr,mid,high);
        high--;
    }
    
    }

}
int main()
{
    int arr[] = {1,2,1,0,0,2};
    int n = sizeof(arr) / sizeof(int);
    dnfsort(arr , n);
    for(auto i:arr){
        cout<<i<<" ";
    }

}