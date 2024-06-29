#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[]={8,3,4,6,1,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }

    while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            pq.push(x+y);
        
    }
    cout<<pq.top();

    return 0;
}
