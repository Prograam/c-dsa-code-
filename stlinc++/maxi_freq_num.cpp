#include<bits/stdc++.h>
using namespace std;

int maximumfreq(vector<int> &arr , int n)
{
    unordered_map<int , int > count;
    int maxfreq = 0;
    int maxans = 0;
    for(int i = 0; i < arr.size() ;i++)
    {
        count[arr[i]]++;
        maxfreq = max(maxfreq , count[arr[i]]);
        cout<<maxfreq<<endl;
    }
    for(auto i:count)
    {
        cout << i.first  << " " << i.second<< endl;

    }
    // for(int i =0 ; i< arr.size();i ++)
    // {
    //     if(maxfreq == count[arr[i]])
    //     {
    //         maxans = arr[i];
    //         break;
    //     }
    // }
    // return maxans;
}
int main()
{
     vector<int> arr= { 1 ,2 ,3 ,1 ,2 };
    int n = arr.size();
    cout<< maximumfreq(arr, n ) <<endl;
}