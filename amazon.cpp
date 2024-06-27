#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void solution(queue<int> &q){
    stack<int> s;
    int x=q.size()/2;
    for(int i=0; i<x; i++){
        q.push(q.front());
        q.pop();
    }
    for(int i=0; i<x; i++){
        s.push(q.front());
        q.pop();
    }
    for(int i=0; i<x; i++){
        q.push(s.top());
        s.pop();
    }
    for(int i=0; i<x; i++){
        q.push(q.front());
        q.pop();
    }
    for(int i=0; i<x; i++){
        s.push(q.front());
        q.pop();
    }
    for(int i=0; i<x; i++){
        q.push(q.front());
        q.pop();
        q.push(s.top());
        s.pop();
    }
    
    for(int i=0; i<6; i++ ){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    
}

int main(){
        queue<int> q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        q.push(6);
        solution(q);
        return 0;
}