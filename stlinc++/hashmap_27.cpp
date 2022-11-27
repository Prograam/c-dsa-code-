#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string , int > m;
    // insert 
    // using comparator algorithms ;
    //1
    pair<string , int > p = make_pair("rohan" , 2);
    m.insert(p);
    //again insert 
    //2
    pair<string , int > pair1("ankit", 2);
    m.insert(pair1);
    //3
    // creation of list
    m["mera"] = 1;
    //updation of list
    m["ankit"] = 3;
    m["mera"] = 2;
    cout<<m["mera"] << endl;
    cout<<m["ameesh"] << endl;
    //using at funtion
    cout<<m.at("rohan")<<endl;
    cout<<m.at("ameesh")<<endl;

    //SIZE
    cout<<m.size()<<endl;

    //count
    // cout<<m.count("rohan")<<endl;

    //erase;
    cout<<m.erase("rohan")<< endl;
    cout<<m.size() << endl;
    //acsseing whoel map

    //1
    for(auto i : m)
    {
        cout<<i.first << " " << i.second << endl;
    }
    //using iterator 
    map<string , int >:: iterator it = m.begin();
    while(it!=m.end()){
        cout<< it->first << " " << it->second << endl;
        it++;
    }
    return 0;


    




}