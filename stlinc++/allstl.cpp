#include<bits/stdc++.h>
using namespace std;
// int main()
// {
    // list<int> ls;
    // ls.push_back(5);
    // ls.emplace_back(55);
    // ls.emplace_front(66);

    // for(auto i:ls){
    //     cout<< i<<endl;
    // }
    // rest function are also work in list
    // begin , end ,rbegin , rend , clear , insert , size , swap

    

// }

// stack 
int main()
{
    stack<int > st1;
    st1.push(13);
    st1.push(13);
    st1.push(31);
    st1.push(13);
    st1.push(33);
    st1.pop();
    st1.pop();
    while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }


   



}