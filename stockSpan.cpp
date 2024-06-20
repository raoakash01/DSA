#include <iostream>
using namespace std;

void calculateB(int n, int a[], int b[]) {
    b[0] = 1;
    for (int i = 1; i < n; i++) {
        b[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j] && b[i] < b[j] + 1) {
                b[i] = b[j] + 1;
            }
        }
    }
    
}

//Do not edit this part of code 
 int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        calculateB(n, a, b);
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}