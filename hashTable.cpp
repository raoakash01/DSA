#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(10);
    s.insert(2);
    s.insert(0);
    s.insert(4);
    s.insert(50);

    for(auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i = s.begin(); i != s.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    s.erase(2);
    int key = 2;
 
    if(s.find(key) != s.end())
    {
        cout<<"Key is present"<<endl;
    }
    else
    {
        cout<<"Key is not present"<<endl;
    }
    cout<<s.size()<<endl;
    s.clear();
    cout<<s.size()<<endl;
    
    return 0;
}