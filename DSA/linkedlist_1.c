#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void linkedListTraversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }

}
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;

    return head;
}
struct Node * insertAtIndex(struct Node * head, int data , int index){
    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    struct Node * p= head;
    int i=0;
    while(i!=index){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node * insertAfterNode(struct Node * head,struct Node * prevNode, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    //head node
    head->data=7;
    head->next=second;
    //second node
    second->data=11;
    second->next=third;
    //third node
    third->data=66;
    third->next=fourth;
    //Fourth node
    fourth->data=69;
    fourth->next=NULL;
    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    printf("\n");
    // head = insertAtIndex(head,56,1);
    //head = insertAtEnd(head,71);
    head=insertAfterNode(head ,second,45);
    printf("Linked list after insertion\n");
    linkedListTraversal(head);


}