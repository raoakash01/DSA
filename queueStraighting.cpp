#include<iostream>
#include<queue>

using namespace std;
class Node{
    public:
    int data;
    Node *right;
    Node *down;
    Node(int d):data(d),right(nullptr),down(nullptr){

    }
}

void flatten(Node *head){
    queue<Node> q;
    Node *temp =head;
    while(temp->right!=nullptr || q.empty()){
        if(temp->down != nullptr){
            q.push(temp->down)
        }
        if(temp->right != nullptr){
        temp = temp->right;
        }else{
            temp->right = q.front();
            q.pop();
        }
    }
    while (head->right != nullptr)
    {
        cout<<head->data;
        head=head->right;
    }
    
}

int main(){
    Node *head = new Node(1);
    head->right = new Node(2);
    head->down = new Node(4);
    head->right->right = new Node(3);
    head->right->down = new Node(5);
    head->right->right->down = new Node(6);

    flatten(head);
    

    return 0;
}