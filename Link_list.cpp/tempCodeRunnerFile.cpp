#include<iostream>
// using namespace std;

// struct node{
//   int data;
//   node *next;
// };

// struct list{
//   node *start;
// };

// node *inser_node(list *l,int data){
//   node *new_node = new node;
//   new_node->data = data;
//   new_node->next = lp->start;
//   lp->start = new_node;
// }

// node *display_node(){
//   node *curr = lp.start;
//   while(curr!=nullptr){
//     cout<<curr->data<<endl;
//     curr = curr->next;
//   }
// }

// int main(){
//   list lp;
//   int data;
//   lp.start = nullptr;
//   int ch;
//   do{
//     cout<<"Press 1 for Insertion"<<endl<<"Press 2 for deletion"<<endl<<"Press 3 for display"<<endl<<"Press 0 for Exit"<<endl;
//     cout<<"Enter your choice";
//     cin>>ch;
//     switch(ch){
//       case 1: cout<<"Enter data";
//               cin>>data;
//               inser_node(&lp,data);
//               break;
//       // case 2: delete_node();
//       //         break;
//       case 3: display_node();
//               break;
//       case 0:return 0;
//     }
//   }while(ch!=0);
// }