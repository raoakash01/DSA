#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node *next;
    Node(int data): data(data), next(nullptr) {}
};

class ll{
    public:
    Node* head;
    Node* tail;

    void insert(int data){
        Node *n= new Node(data);
        if(head==nullptr){
            head=tail=n;
        }else{
            tail->next=n;
            tail=n;
        }
    }

    void print(){
        Node *temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        
        cout<<"end";
    }
    void findlast(int k){
        Node *temp=head;
        Node *temp2=head;
        while(--k)
        {
            temp2=temp2->next;
            
        }
        // for(int i=1;i<k;i++)
        // {
        //     temp2=temp2->next;
        // }
        while(temp2->next!=nullptr){
            temp=temp->next;
            temp2=temp2->next;
        }
        cout<<temp->data;

    }

    void reverse(){
        Node *curr=head;
        Node *prev=nullptr;
        Node *next;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
};

int main()
{
    ll list1;
    list1.insert(11);
    list1.insert(12);
    list1.insert(13);
    list1.insert(14);
    list1.insert(15);
    list1.insert(16);
    list1.insert(17);
    list1.insert(18);
    list1.insert(19);
    list1.insert(20);
    list1.print();
    cout<<endl;
    list1.reverse();
    list1.print();

    return 0;
}