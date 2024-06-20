#include<iostream>
using namespace std;

int tileDistribution(int n){
    if(n<4){
        return 1;
    }
    return tileDistribution(n-1) + tileDistribution(n-4);
}

int main(){
    int n;
    cin>>n;
    cout<< tileDistribution(n);
    return 0;
}