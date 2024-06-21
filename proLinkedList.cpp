#include<iostream>
using namespace std;
class Node 

{ 

    public: 

    int data; 

    Node *next; 

    Node(int d):data(d),next(nullptr) 

    { 

    } 

}; 

Node *insert(Node *root, int d) 

{ 

    if(root==nullptr) 

    { 

        root = new Node(d); 

    } 

    else 

    { 

        Node *temp = root; 

        while(temp->next) 

        { 

            temp = temp->next; 

        } 

        temp->next = new Node(d); 

    } 

    return root; 

} 

void print(Node *root) 

{ 

    while(root) 

    { 

        cout << root->data << "---> "; 

        root = root->next; 

    } 

    cout << endl; 

}

Node *merge(Node *root1, Node *root2, Node *root3){
    while(root1!=nullptr && root2!=nullptr){
        if(root1->data > root2->data){
            root3= insert(root3,root2->data);
            root2=root2->next;
        }else{
            root3= insert(root3,root1->data);
            root1=root1->next;
        }
    }
    while(root1!=nullptr){
        root3= insert(root3,root1->data);
        root1=root1->next;
    }
    while (root2!=nullptr)
    {
        root3=  insert(root3,root2->data);
        root2=root2->next;
    }
    
    return root3;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    Node *root1 = nullptr;
    Node *root2 = nullptr;
    Node *root3 = nullptr;
    for (int i = 0; i < n1; i++)
    {
        int data;
        cin>>data;
        root1= insert(root1,data);
    }
    for (int i = 0; i < n2; i++)
    {
        int data;
        cin>>data;
        root2= insert(root2,data);
    }
    root3= merge(root1,root2,root3);
    print(root3);


    

}