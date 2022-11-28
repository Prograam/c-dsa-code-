#include<bits/stdc++.h>
using namespace std;
int sortcolors(vector<int>&arr , int n)
{
    int one=0;
    int two=0;
    int three=0;
    int flag =0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        {
            one++;
        }
        if(arr[i]==1)
        {
            two++;
        }
        if(arr[i]==1)
        {
            three++;
        }
    }
    for(int i=0;i<one;i++)
    {
        arr[flag] = 0;
        flag+=1;
    }
    for(int i=0 ;i < two;i++)
    {
        arr[flag] = 1;
        flag+=1;
    }
    for(int i = 0;i< three;i++){
        arr[flag] = 2;
        flag+=1;
    }
    for(auto i:arr)
    {
        cout<<  i  << " ";
    }


}



int main()
{
    vector<int > arr = {2,0,1,1,1,2,2};
    int n = arr.size();
    sortcolors(arr,n);
}