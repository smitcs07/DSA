// Insert_A_Node_After_key
#include<iostream>
using namespace std;

struct node {
  int data;
  node *next; 
  node(int newdata){
    data = newdata;
    next = nullptr;
  }
};

node *insert_At_Mid(node *head,int key,int data){
  node *curr = head;
  while(curr!=nullptr && curr->data != key){
    curr = curr->next;
  }

  if(curr == nullptr){
    cout<<"It is not in LL";
    return head;
  }
  node *new_node = new node(data);
  new_node->next = curr->next;
  curr->next = new_node;
  return head;
}
void printAll(node *pos){
  while(pos!=nullptr){
    cout<<pos->data<<" ";
    pos = pos->next;
  }
}

int main(){
  node *head = new node(2);
    head->next = new node(3);
      head->next->next = new node(4);
        head->next->next->next = new node(5);
        int data = 1 , key = 3;
    head = insert_At_Mid(head,key,data);  
    printAll(head);  
}

