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
        int x=temp->info;
        delete temp; 
        return x;
    }
 int DeleteLastNode(node*& head) {
    if (head == nullptr) 
      return -1;

    node* temp2, *temp1 = head; 
    while(temp1->next!=nullptr)
     {
        temp2=temp1;
        temp1=temp1->next;
     }
        temp2->next=nullptr;
        int x=temp1->info;
        delete temp1; 
        return x;
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