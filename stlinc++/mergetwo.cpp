// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1,3,8};
//     vector<int> arr1 = {2,4,6};
//     vector<int>ans;
//     int i=0;
//     int j =0;

//     while( i < arr.size() && j <arr1.size())
//     {
//       if (arr[i] < arr1[j])
//       {
//         ans.push_back(arr[i]);
//         i++;
//       }
//       else if ( arr[i] > arr1[j])
//       {
//         ans.push_back(arr1[j]);
//         j++;
//       }
//       else{
//         ans.push_back(arr[i]);
//         ans.push_back(arr1[j]);
//         i++;
//         j++;
//       }
      
      
//     }
//     while(i < arr.size())
//       {
//          ans.push_back(arr[i]);
//          i++;
//       }
//       while( j < arr1.size())
//       {
//         ans.push_back(arr1[j]);
//         j++;
//       }
//     for(auto i:ans)
//     {
//         cout<< i << " ";   
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(10);
    for(auto i:arr)
    {
        cout << i << " ";
    }

    
}