#include<iostream>
using namespace std;

int getMaxArea(int a[], int n) {

    int res = 0;
    int left = 0;
    int right = n-1;

    while (left <= right) {
      int minHeight ;
      if(a[left]<a[right]){
        minHeight = a[left];
      }
      else{
        minHeight = a[right];
      }
      
      int temp = minHeight * (right - left);
       if (a[left] < a[right]) {
        left++;
      } else {
        right--;
      }  
      if (res < temp) {
        res = temp;
      }

     
    }
    return res;
}

//Do not edit this part of code
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << getMaxArea(a, n) << "\n";
    }
    return 0;
}