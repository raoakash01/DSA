#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

vector<int> nse(int arr[], int n){
    vector<int> ns;
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            s.pop();
        }
        if (s.empty())
        {
            ns.push_back(n);
        }else{
            ns.push_back(s.top());
        }
        s.push(i);
        
    }
    reverse(ns.begin(),ns.end());
    return ns;
}

vector<int> pse(int arr[], int n){
    vector<int> ps;
    stack<int> s;
    
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            s.pop();
            
        }
        if(s.empty()){
            ps.push_back(-1);
        }
        else{
            ps.push_back(s.top());
            
        }
        s.push(i);
       
    }
    return ps;
}

int area(vector<int> ps, vector<int> ns ,int arr[]){
    int max = 0;
    for(int i=0;i<ps.size();i++){
        int ar = (ns[i]-ps[i]-1)*arr[i];
        if(ar>max){
            max = ar;
        }
    }
    return max;
}

int main(){
    int n = 9;
    
    int arr[n] = {4,2,1,5,6,3,2,4,2};
    
    vector<int> ps;
    ps=pse(arr,n);
    for(int i=0;i<n;i++){
        cout<<ps[i]<<" ";
    }
    cout<<endl;
    vector<int> ns;
    ns=nse(arr,n);
    for(int i=0;i<n;i++){
        cout<<ns[i]<<" ";
    }
    cout<<endl;
    int ar = area(ps,ns,arr);
    cout<<ar<<endl;
    
    return 0;
}
