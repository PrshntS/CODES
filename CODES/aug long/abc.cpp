#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
#define xmin 150
#define xmax 500
#define ymin 100
#define ymax 370
unsigned int code(int x,int y)
{
	unsigned int c=0x0;
	enum{ABOVE=0x8, BELOW=0x4, RIGHT=0x2, LEFT=0x1};
	if(x<xmin)
	c=c|LEFT;
	if(x>xmax)
	c=c|RIGHT;
	if(y<ymin)
	c=c|BELOW;
	if(y>ymax)
	c=c|ABOVE;
	return c;
}
void check(unsigned c1,unsigned c2)
{
	if(!(c1|c2))
	cout<<"LINE IS COMPLETELY INSIDE";
	else if(c1&c2)
	cout<<"LINE IS COMPLETELY OUTSIDE";
	else
	cout<<"LINE REQUIRES CLIPPING";
}
void bin(unsigned int c)
{
	for(int i=8;i>0;i--)
	(c&i)?cout<<"1":cout<<"0";
	cout<<endl;
}
int main(void)
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"");
	int x1,x2,y1,y2;
	unsigned int code1,code2;
	cout<<"ENTER CORDINATES x1,y1";
	cin>>x1>>y1;
	cout<<"ENTER CORDINATES x2,y2";
	cin>>x2>>y2;
	line(xmin,0,xmin,getmaxy());
	line(xmax,0,xmax,getmaxy());
	line(0,ymin,getmaxx(),ymin);
	line(0,ymax,getmaxx(),ymax);
	code1=code(x1,y1);
	code2=code(x2,y2);
	line(x1,y1,x2,y2);
	cout<<"REGION CODE OF POINT 1 ";
	bin(code1);
	cout<<"REGION CODE OF POINT 2 ";
	bin(code2);
	check(code1,code2);
	getch();
	closegraph();
}
	

	

