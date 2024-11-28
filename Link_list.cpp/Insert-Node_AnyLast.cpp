// Insert_A_Node_AtLast
#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
  node(int newData){
    data = newData;
    next = nullptr;
  }
};

  node *insertAtLast(node *head,int data){
    node *curr = head;
    while(curr->next!=nullptr){
      curr=curr->next;
    }
    node *new_node = new node(data);
    curr->next = new_node;
    return head;
  }
  void printAll(node *curr){
    while(curr!=nullptr){
      cout<<curr->data<<" ";
      curr = curr->next;
    }
  }

int main(){
  node *head = new node(2);
  head->next = new node(3);
  int data = 1;
  head = insertAtLast(head,data);
  printAll(head);
}