#include<iostream>
using namespace std;
void towerOfHanoi(int n, char Source, char Destination, char B , int& count){
    if(n == 1){
        cout<<"Move disk 1 from rod "<<Source<<" to rod "<<Destination<<endl;
        count++;
        return;
    }
    towerOfHanoi(n-1, Source, B, Destination, count);
    cout<<"Move disk "<<n<<" from rod "<<Source<<" to rod "<<Destination<<endl;
    towerOfHanoi(n-1, B, Destination, Source , count);
    count++;
}
int main(){
    int n;
    cin>>n;
    int count=0;
    towerOfHanoi(n, 'A', 'C', 'B' , count);
    cout<<count;
    return 0;
}