#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    string s = "ababaddd";
    queue<char> q;
    int letters[26]= {0};
    for (int i = 0; i < s.size(); i++) {
        q.push(s[i]);
        letters[s[i] - 'a']++;
        while(!q.empty() && letters[q.front() - 'a'] > 1) {
            q.pop();
        }
        if(q.empty()) {
            cout << 0 << " ";
        }else{
            cout << q.front() << " ";
        }
    }
    

    return 0;
}
