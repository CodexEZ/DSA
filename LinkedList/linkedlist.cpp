#include<iostream>
#include<cmath>
#include<map>
using namespace std;
//CREATING NODES FOR THE LINKED LIST
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data"<<endl;
    }
};
//INSERT AT THE BEGINNING OF LL
void InsertAtHead(Node* &head, int val){
    if (head==NULL){
        Node* temp = new  Node(val);
        head = temp;

    }
    else{
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }
}
//INSERT AT THE END OF LL
void InsertAtTail(Node* &head, int d){
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* end = new Node(d);
    
    temp->next = end;
}
//INSERT AT ANY POSITION OF LL
void InsertAtIndex(Node* &head, int pos, int d){
    Node* temp = head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    Node* mid = new Node(d);
    Node* next = temp->next;
    temp->next = mid;
    mid->next = next;
}

//DELETE ANY ELEMENT OF LL
void del(Node* &head, int pos){
    if(pos==1&&head!=NULL){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else if(head==NULL){
        cout<<"Empty list"<<endl;

    }
    else{
        int cnt=1;
        Node* temp = head;
        while(cnt<pos-1){
            temp= temp->next;
            cnt++;
        }
        Node* mid = temp->next;
        Node* next = mid->next;
        temp->next = next;
        mid->next = NULL;
        delete mid;
        
    }
    
}

//DISPLAY THE ELEMENTS IN LL
void print(Node* head){
    if (head==NULL){
        cout<<"Empty list"<<endl;
    }
    else{
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

//REVERSE LL USING RECURSION
void recursive_reverse(Node* &head, Node* curr, Node* prev){
    if(curr==NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    recursive_reverse(head,forward,curr);
    curr->next=prev;
}

//REVERSE USING ITERATIVE METHOD
void reverse(Node* &head, char method = '\0'){
    Node* prev = NULL;
    Node* curr = head;
    if(method == 'R'){
    recursive_reverse(head,curr,prev);
    }
    while(curr!=NULL){
        Node* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head = prev;
}

//GET THE NUMBER OF ELEMENTS IN LL
int getLength(Node* &head){
    int cnt = 0;
    while(head!=NULL){
        head=head->next;
        cnt++;
    }
    return cnt;
}
// DETECT LOOP IN LINKED LIST
bool detectloop(Node* head){
    if (head==NULL){
        return false;
    }
    map <Node*, bool> visited;
    Node* temp =head;
    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"loop detected at element "<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;

}
//FLOYD LOOP DETECTION
Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow!=NULL&&fast!=NULL){
    fast = fast->next;
    if(fast!=NULL){
        fast=fast->next;
    }
    slow = slow->next;

    if(slow==fast){
        return slow;
    }
    }
    return NULL;
}
//GET STARTING LOOP NODE
Node* getStartingNode(Node* head){
    if (head==NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
//REMOVING LOOP IN LINKEDLIST
void removeloop(Node* head){
    if(head==NULL)
        return;
    Node* startOfloop = getStartingNode(head);
    Node* temp = startOfloop;
    while(temp->next != startOfloop){
        temp=temp->next;
        
    }
    
    temp->next=NULL;
}
//FIND THE MIDDLE ELEMENT OF LL
int mid(Node* &head){
    Node* temp = head;
    int len = getLength(head);
    int mid;
    len%2==0?mid=ceil((len+1)/2)+1:mid = (len+1)/2;
    int cnt=1;
    while(cnt!=mid){
        cnt++;
        temp=temp->next;
    }
    return temp->data;
    
}
int main(){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node3;
    cout<<"Detect loop"<<endl;
    cout<<detectloop(node1)<<endl;
    cout<<"Get node where loop starts"<<endl;
    cout<<getStartingNode(node1)->data<<endl;
    removeloop(node1);
    cout<<"Again detect loop"<<endl;
    cout<<detectloop(node1)<<endl;
    print(node1);
}
