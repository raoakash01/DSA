#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int p=3;
    int arr[]={3,3,3,3};
    
    for(int i=0 ; i<n; i++){
        if(arr[i]>0){
            if(arr[arr[i]-1]>0){
                p=arr[arr[i]-1];
                arr[arr[i]-1]=-1;
                arr[i]=0;
            }else{
                arr[arr[i]-1]--;
                arr[i]=0;
                
            }
        }
    }
    
    for(int i=0 ; i<n; i++){
        cout<<-1*arr[i];
    }


    return 0;
}