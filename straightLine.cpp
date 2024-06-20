#include<iostream>
using namespace std;

bool straightLine(int arr[][2], int n){
    int slope = (arr[1][1] - arr[0][1])/(arr[1][0] - arr[0][0]);

    for(int i=1; i<n; i++){
        if(slope != (arr[i+1][1] - arr[i][1])/(arr[i+1][0] - arr[i][0])){
            return false;
        }
    }
    return true;
}

int main(){
    int 5;
    int arr[5][2]={{1,2},{3,4},{5,6},{7,8},{9,10}};

    cout<<straightLine(arr, 5);

    return 0;
}