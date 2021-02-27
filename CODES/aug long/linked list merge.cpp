#include <bits/stdc++.h>

using namespace std;

class Node
{
  public:
  int d;
  Node* next;

};

void insert(Node** a,int x)
{
  Node *p=new Node;
  p->d=x;
  p->next=*a;
  *a=p;
}

void print(Node *p)
{
  while(p!=NULL)
  {
    cout<<p->d<<" ";
    p=p->next;
  }
  cout<<endl;
}

Node* merge(Node* a,Node* b)
{
  if(a==NULL)
  {return b;
  
  }
  else if(b==NULL)
  {
    return a;
  }

  Node* merhead=NULL;
  if((a->d)<(b->d))
  {merhead=a;
  a=a->next;
  }
  else
  {
    merhead=b;
    b=b->next;
  }
  Node* mertail=merhead;
  while(a!=NULL &&b!=NULL)
  { Node* p=NULL;
    if(a->d<b->d)
    {
      p=a;
      a=a->next;
   }
    else
    {
      p=b;
      b=b->next;
    }
    mertail->next=p;
    mertail=p;
  }

  if(a!=NULL)
  {
    mertail->next=a;
  }
  else if(b!=NULL)
  {
    mertail->next=b;
  }



  return merhead;


  }




int main(void)
{
  Node* a=NULL;
  Node* b=NULL;
  for(int i=6;i>=1;i-=2)
  {
    insert(&a,i);
  }
  print(a);

  for(int i=7;i>=1;i-=2)
  {
    insert(&b,i);
  }
  print(b);

  Node* ans=merge(a,b);
  print(ans);
}
