#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, string> m;
    m[23]="Ankit";
    m[25]="Neeraj";
    m[28]="Rafat";

    int roll;
    cin>>roll;
    string name;
    cin>>name;
    m[roll]=name;

    cout<<m[roll]<<endl;

    return 0;
}