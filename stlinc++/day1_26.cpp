    #include<bits/stdc++.h>
    using namespace std;
    //pair<data_type , data_type> variable name = {};
    // pair we can also use the pair arr[i];
//pair in c++ how to we use them


    int main()
    {
        pair<int , pair<int ,int >> p = {1,{3,5}};
        cout<< p.first << " " << p.second.first <<  " "<< p.second.second << "\n";

        pair<int , int > p1 = {1,5};
        cout<<p1.first << " "<< p1.second<<"\n";

        pair<int , char> p2 = {1,'a'};
        cout<< p2.first << " " << p2.second<< endl;
        pair<int , char >arr[] = {{1,'a'} , {2,'b'} , {5,'c'}};
        cout<< arr[0].second <<" " <<arr[1].first<<endl;
        
        


    }