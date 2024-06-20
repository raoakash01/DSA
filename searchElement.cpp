#include<iostream>
using namespace std;


bool search(int arr[], int n, int key){
    int freqency[2][100]={0};
    int i=0;
    while(n--){
       if(arr[i]>=0){
            freqency[0][arr[i]]=1;
        }
        else{
            freqency[1][-arr[i]]=1;
        }
        i++;

    }
    if(freqency[0][key]==1 || freqency[1][-key]==1 ){
        return true;
    }
    else{
        return false;
    }
    
    
    
}
int main(){
    int arr[] = {1 ,3 ,5 ,-2, -4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<search(arr, n, key);
    return 0;
}