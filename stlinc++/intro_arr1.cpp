#include<bits/stdc++.h>
using namespace std;
void printarray(int ch[] , int size)
{
    cout<<size<<endl;
}
int main()
{
   int arr[11] = {2,7};
//    int n = sizeof(arr) / sizeof(int );


//    printarray(arr, n );
    
    char c[5] = {'a' , 'b' , 'c' , 'd' ,'e'};
    // cout<<max(c) << endl;
    cout<<*min_element(arr,arr+sizeof(arr)/sizeof(int)) << endl;
   
