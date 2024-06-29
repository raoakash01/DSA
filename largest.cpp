#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[]={8,3,4,6,1,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    cout<<pq.top();

    return 0;
}