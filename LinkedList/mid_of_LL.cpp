#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        cout<<sizeof(Node*)<<" bytes of memory freed"<<endl;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* getMid(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow = slow->next;
        
    }
    return slow;
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth =new Node(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(head);
    cout<<getMid(head)->data<<endl;

}