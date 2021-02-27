#include<iostream>
#include<graphics.h>
#include<dos.h>
using namespace std;
int main(void)
{
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"");
	float wx1,wx2,wy1,wy2,vx1,vx2,vy1,vy2,sx,sy;
	float vxmin,vxmax,vymin,vymax,wxmin,wxmax,wymin,wymax;
	cout<<"Enter coordinates(Window): "<<endl;
	cout<<"Enter WXMIN,WYMIN,WXMAX,WYMAX: ";
	cin>>wxmin>>wymin>>wxmax>>wymax;
	cout<<"Enter coordinate(Viewport): "<<endl;
	cout<<"Enter VXMIN,VYMIN,VXMAX,VYMAX: ";
	cin>>vxmin>>vymin>>vxmax>>vymax;
	cout<<"Enter coordinates(recatangle): "<<endl;
	cout<<"Enter WX1,WY1,WX2,WY2: ";
	cin>>wx1>>wy1>>wx2>>wy2;
	float wx3,wy3,wx4,wy4;
	wx3=wx1+15;
	wy3=wy1-40;
	wx4=wx2+15;
	wy4=wy2-40;
	float l1=100,l2=100,l3=115,l4=60;
	float l5=50,l6=150,l7=65,l8=110;
	
	
	
	sx=(vxmax-vxmin)/(wxmax-wxmin);
	sy=(vymax-vymin)/(wymax-wymin);
	rectangle(wxmin,wymin,wxmax,wymax);
	rectangle(vxmin,vymin,vxmax,vymax);
	outtextxy(100,180,"Window");
	outtextxy(400,320,"Viewport");
	rectangle(wx1,wy1,wx2,wy2);
	rectangle(wx3,wy3,wx4,wy4);
	line(wx1,wy1,wx3,wy3);
	line(wx2,wy2,wx4,wy4);
	line(l1,l2,l3,l4);
	line(l5,l6,l7,l8);
	float vx3,vy3,vx4,vy4,lv1,lv2,lv3,lv4,lv5,lv6,lv7,lv8;
	vx1=sx*(wx1-wxmin)+vxmin;
	vy1=sy*(wy1-wymin)+vymin;
	vx2=sx*(wx2-wxmin)+vxmin;
	vy2=sy*(wy2-wymin)+vymin;
	vx3=sx*(wx3-wxmin)+vxmin;
	vy3=sy*(wy3-wymin)+vymin;
	vx4=sx*(wx4-wxmin)+vxmin;
	vy4=sy*(wy4-wymin)+vymin;
	lv1=sx*(l1-wxmin)+vxmin;
	lv2=sy*(l2-wymin)+vymin;
	lv3=sx*(l3-wxmin)+vxmin;
	lv4=sy*(l4-wymin)+vymin;
	lv5=sx*(l5-wxmin)+vxmin;
	lv6=sy*(l6-wymin)+vymin;
	lv7=sx*(l7-wxmin)+vxmin;
	lv8=sy*(l8-wymin)+vymin;
	delay(800);
	rectangle(vx1,vy1,vx2,vy2);
	rectangle(vx3,vy3,vx4,vy4);
	line(vx1,vy1,vx3,vy3);
	line(vx2,vy2,vx4,vy4);
	line(lv1,lv2,lv3,lv4);
	line(lv5,lv6,lv7,lv8);
	
	getch();
	closegraph();
}
