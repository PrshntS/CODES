#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int x;
  Node* next;
};
Node* head=NULL;
 
void front(int d)
{
  Node *p=new Node;
  p->x=d;
  p->next=head;
  head=p;
}


void end(int d)
{
Node *ptr=new Node;
 ptr->x=d;
 ptr->next=NULL;
 if(head==NULL)
 {
   head=ptr;
 }
 else{
  Node *p=head;
  while(p->next!=NULL)
  {
    p=p->next;
  }
  p->next=ptr;
 }
}



void print()
{
  Node *p=head;
  while(p!=NULL)
  {
    cout<<p->x<<" ";
    p=p->next;
  }
}

void mid()
{
  Node* fast=head,*slow=head;
  while(fast!=NULL&&fast->next!=NULL)
  {
    fast=fast->next->next;
    slow=slow->next;
  }
  cout<<slow->x;
}

void rev()
{
  Node *curr=head,*prev=NULL,*newt=NULL;
  while(curr!=NULL)
  {
    newt=curr->next;
    curr->next=prev;
    prev=curr;
    curr=newt;
  }
  head=prev;
}

void partrev(int x,int y)
{int i=1;
  Node *curr=head,*pre=NULL,*newt=NULL,*st1=head,*st2=head;
  
 while(i!=x-1) //first save point.
 {
   st1=st1->next;
   i++;
 }
 

 
 Node *save=st1->next; //resuming after revesing
 pre=st1->next;
 curr=pre->next;
 newt=curr->next;
 
 int r=y-x;
 while((r)--)
 {
   curr->next=pre;
   pre=curr;
   curr=newt;
   newt=newt->next;
  
 }

 st1->next=pre; //connecting first save point to the begng of reversed sub list.
 st2=curr; //second save point,

 save->next=st2; //connecting end of reversed sublist to the second save point.







} 

int main(void) {
  
int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    front(i);
  }
  
 /* int b;
  cin>>b;
  for(int i=1;i<=b;i++)
  {
    
        end(i);
  }
  */
  
  print();
  cout<<endl;
  rev();
  cout<<endl;
  print();
  cout<<endl;
  mid();
  cout<<endl;
  partrev(3,5);
  cout<<endl;
  print();
}