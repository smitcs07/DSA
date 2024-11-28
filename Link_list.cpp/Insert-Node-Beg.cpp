// Insert_A_Node_At_First
#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;

  node(int newdata){
   data = newdata;
  next = nullptr;
}
};

node *insert_new(node *head, int data){
  node *new_node = new node(data);
  new_node->next=head;
  return new_node;
}

void printData(node *head){
  node *curr = head;
  while(curr!= nullptr){
    cout<<curr->data<<" ";
    curr=curr->next;
  }
}

int main(){
  node *head = new node(2);
  head->next = new node(3);
  int data = 1;
  head = insert_new(head,data);
  printData(head);
}