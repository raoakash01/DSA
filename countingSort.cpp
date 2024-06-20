#include<iostream>
using namespace std;


void coutingSort(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    int frequecy[max] = {0};
    
    for (int i = 0; i < max; i++)
    {
        frequecy[arr[i]]++;
    }

    for (int i = 0; i < max; i++)
    {
        while (frequecy[i] > 0)
        {
            arr[i] = i;
            frequecy[i]--;
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1, 4, 1, 2, 7, 5, 2 ,8 ,9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
     
    coutingSort(arr, n);
    return 0;
}