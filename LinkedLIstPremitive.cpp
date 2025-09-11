#include<iostream>
using namespace std;
struct node{
    int info;
    node *next;
    node():next(nullptr){};
    node(int x): info(x),next(nullptr){};
};
void InsBeg(node*& head, int val) {
        node* newNode = new node(val); 
        newNode->next = head;
        head = newNode;
    }
void InsEnd(node*& head, int val){
    node* newNode=new node(val);
    node* temp=head;
    while(temp->next!=nullptr)
     temp=temp->next;
    temp->next=newNode;
}
 int DeleteFirstNode(node*& head) {
    if (head == nullptr) {
      return -1;
     }
        node* temp = head; 
        head = head->next; 
        int item=temp->info;
        delete temp; 
        return item;
    }
 int DeleteLastNode(node*& head) {
    if (head == nullptr) 
      return -1;

    node* temp1, *temp2 = head; 
    while(temp2->next!=nullptr)
     {
        temp1=temp2;
        temp2=temp2->next;
     }
        temp1->next=nullptr;
        int item=temp2->info;
        delete temp2; 
        return item;
    }
 void Traverse(node* head)
 {
    if(head==nullptr)
    return;
    node * temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->info<<" ";
        temp=temp->next;
    }
    cout<<endl;
 }
int main()
{
node * start=nullptr;

InsBeg(start,1);
InsEnd(start,2);
InsEnd(start,3);
InsEnd(start,4);
Traverse(start);
cout<<DeleteFirstNode(start)<< " Deleted Successfully"<<endl;
cout<<DeleteLastNode(start)<< " Deleted Successfully"<<endl;
 Traverse(start);
  return 0;

}