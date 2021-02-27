#include<bits/stdc++.h>
#include<graphics.h>
#define sign(x) ((x>0)?1:((x<0)?-1:0))
void swapy(int &a,int &b) 
{
 a=a+b;
 b=a-b;
 a=a-b;
}
using namespace std;
int main()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"");
 int x1,y1,x2,y2,dx,dy,s1,s2,swap=0,pk;
 cout<<"X1 -> ";
 cin>>x1;
 cout<<"Y1 -> ";
 cin>>y1;
 cout<<"X2 -> ";
 cin>>x2;
 cout<<"Y2 -> ";
 cin>>y2;
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 s1=sign(x2-x1);
 s2=sign(y2-y1);
 if(dy>dx)
 { 
 swapy(dx,dy);
 swap=1;
 }
 pk=2*dx-dy;
 putpixel(x1,y1,BLUE);
 for(int i=0;i<dx;i++)
 {
 if(pk>0)
 {
 x1+=s1;
 y1+=s2;
 pk+=2*dy-2*dx;
 }
 else
 {
 if(swap)
 {
 y1+=s2;
 }
 else
 {
 x1+=s1;
 }
 pk+=2*dy;
 } 
 delay(100);
 putpixel(x1,y1,BLUE);
 }
 getch();
 closegraph();
 return 0;
} 

