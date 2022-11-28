#include<bits/stdc++.h>
using namespace std;


int sortcolors(vector<int>&arr , int n)
{
    // int one=0;
    // int two=0;
    // int three=0;
    // int flag =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0)
    //     {
    //         one++;
    //     }
    //     if(arr[i]==1)
    //     {
    //         two++;
    //     }
    //     if(arr[i]==1)
    //     {
    //         three++;
    //     }
    // }
    // for(int i=0;i<one;i++)
    // {
    //     arr[flag] = 0;
    //     flag+=1;
    // }
    // for(int i=0 ;i < two;i++)
    // {
    //     arr[flag] = 1;
    //     flag+=1;
    // }
    // for(int i = 0;i< three;i++){
    //     arr[flag] = 2;
    //     flag+=1;
    // }
    // for(auto i:arr)
    // {
    //     cout<<  i  << " ";
    // }

    // map< int,int> p;
    // for(int i=0; i < arr.size();i++)
    // {
    //     p[arr[i]]++;
    // }
    // int j=0;
    // for(auto i:p)
    // {
    //     while(i.second!=0)
    //     {
    //         arr[j] = i.first;
    //         j++;
    //         i.second--;
        
        
    //     }
    
    // }
    // for(auto i:arr)
    // {
    //  cout<<i <<" ";
    // }
    // Dutch algotithms
    int i=0;
    int zero = 0;
    int curr  = 0;
    int two = n-1;
    while(i<=two)
    {
        if(arr[i] == 2)
        {
            swap(arr[i],arr[two]);
            two--;
            
        }
        else if (arr[i]==0)
        {
           swap(arr[i],arr[zero]);
           zero++;
        }
        else
        {
            i++;
        }
    }
    for(auto i:arr)
    {
        cout<<i<< " ";
    }


}



int main()
{
    vector<int > arr = {2,0,1,0,1,2,2};
    int n = arr.size();
    sortcolors(arr,n);
}