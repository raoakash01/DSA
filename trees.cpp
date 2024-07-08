#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d):data(d),left(nullptr),right(nullptr){}
};

void print(Node* root){

    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";

    print(root->left);

    print(root->right);
}
int main(){

    Node* root = new Node(1);

    root->left = new Node(2);

    root->right = new Node(3);

    root->left->left = new Node(4);

    root->left->right = new Node(5);

    print(root);

    return 0;
}