#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 ListNode* listBuilder (vector<int> v){
    if(v.size() == 0){
        return NULL;
    }
    ListNode* head = new ListNode(v[0]);
    ListNode* newnode = head;
    for(int i=1;i<v.size();i++){
        ListNode* temp = new ListNode(v[i]);
        newnode -> next = temp;
        newnode = newnode->next;
    }
    return head;
 }
  ListNode* rotate(ListNode* head){
        ListNode* curr = head;
        ListNode* pre = NULL;
        while(curr->next != NULL){
            pre = curr;
            curr = curr->next;
        }
        curr->next = head;
        pre->next = NULL;

        head = curr;

        return head;
    }
void print(ListNode* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head =head->next;
    }
}
 int main(){
    vector<int> v = {1,2,3,4,5,6};
    ListNode* head = listBuilder(v);
    head = rotate(rotate(head));
    print(head);

 }