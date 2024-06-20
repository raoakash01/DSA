#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> m;
    int arr[] = {1, 2, 3, 3, 3, 2, 1, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){

        m[arr[i]]++;

    }
    int i=0;
    while (n--)
    {
        if(m[arr[i]] > 1){
            cout<<i;
        }
        i++;
    }
    
    return 0;
}
