#include<iostream>
using namespace std;

class Queue{
    public:
    int data;
    Queue* next;
    Queue(int d){
        this->data = d;
        this->next = NULL;
    }
    void isEmpty(Queue* head){
        if(head==NULL){
            cout<<"Queue is Empty"<<endl;
        }
    }
    void enQueue(Queue* &head, int d){
        if(head==NULL){
            Queue* temp = new Queue(d);
            head = temp;
            
        }
        
            Queue* temp = new Queue(d);
            temp->next=head;
            int tempo = head->data;
            head->data = temp->data;
            temp->data = tempo;

        
    }
    void print(Queue* head){
        Queue* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue* obj = NULL;
    obj->enQueue(obj,5);
    for(int i=0;i<5;i++){
        obj->enQueue(obj,i);
    }
    obj->print(obj);
}