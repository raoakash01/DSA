#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;
    int arr[] = {1,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr1[] = {3,2,3};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    
    int count = 0;

    for(int i=0; i<n; i++){
        
        s.insert(arr[i]);
    }

    for(int i=0; i<n1; i++){

        if(s.find(arr1[i]) != s.end()){
            count++;
            s.erase(arr1[i]);
        }
    }
    cout<<count<<endl;

     return 0;
}