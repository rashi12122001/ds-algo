#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void print_list(struct node * ptr){
    while(ptr!=NULL){
    cout<<ptr->data;
     ptr=ptr->next;
    }
}
int main() {
   struct node * head=new struct node;
   struct node * second=new struct node;
   struct node * third=new struct node;
   head->data=7;
   head->next=second;
   second->data=8;
   second->next=third;
   third->data=7;
   third->next=NULL;
  print_list(head);
    return 0;
}
