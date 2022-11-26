#include<bits/stdc++.h>


using namespace std;
/*In vector we can also make a pair of two any data_type


*/
int main(){
    //declaration 
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    // cout<<v[1]<<endl;
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    // cout<< v[2] << endl;
    //creation of vector in c++ 
    vector<pair<int , int >> vec;
    vec.push_back({1,4});
    vec.emplace_back(5,4);
    // cout<< vec[1].first<<endl;
    //declare with size
    vector<int> v1(4,1);
    // cout<< v1.at(1);
    // cout<< v1[1] <<endl;
    //coping 
    vector <int> v2(v1);
    // cout<< v2[3] <<endl;

    //accessing of vector
    //using the iterator method 
    vector<int>:: iterator it = v.begin();
    it++;
    // cout<< *(it) << endl;
    it++;
    // cout<<*(it)<<endl;
    vector<int> :: iterator yt = v.end();
    // yt--;
    // yt--;
    // yt--;
    // yt--;
    // cout<<(*(yt))<< endl;
    // cout<<v.back()<<endl;

    // how to print vector arr
    for(vector<int>::iterator it = v.begin() ; it!=v.end();it++)
    {
        // cout<<*(it) << " ";
    }
    // for(auto i=v.begin() ; i !=v.end();i++)
    // cout<<*(i) <<" ";

    for(auto j:v)
    {
        // cout<<j<<" ";
    }
    // cout<<"\n"<<endl;
    
    // deletion in a vector 
    // v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);
    for(auto j:v)
    {
        // cout<<j<<" ";
    }

    vector<int> newvec(5,100);
    for(auto i:newvec)
    {
        cout<< i<<" ";
    }
    cout<<"\n";
    // newvec.insert(newvec.begin(), 500);
    //  for(auto i:newvec)
    // {
    //     // cout<< i<<" ";
    // }
    // cout<<"\n"<<endl;
    // newvec.insert(newvec.begin()+1,2,10);
    // for(auto i:newvec)
    // {
    //     // cout<< i<<" "; 
    // }
    // cout<<"\n"<<endl;
    // // cout<<newvec.size()<<endl;
    // // newvec.erase(newvec.begin()+1,newvec.end());
    // // for(auto i:newvec)
    // // {
    // //     cout<< i<<" ";
    // // }
    // // cout<<"\n"<<endl;
    vector<int> copy(2,50);
    newvec.insert(newvec.begin(),copy.begin(),copy.end());
    // for(auto i:newvec)
    // {
    //     // cout<< i<<" ";
    // }
    // cout<<"\n"<<endl;newvec.insert(newvec.begin()+5,copy.begin(),copy.end());
    // for(auto i:newvec)
    // {
    //     // cout<< i<<" ";
    // }
    // cout<<"\n"<<endl;
    newvec.pop_back();
    for(auto i:newvec)
    {
        cout<< i<<" ";   
    }
    cout<<"\n"<<endl;

    // newconcept for swapping 
    




    }
