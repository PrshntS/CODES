#include<graphics.h>
int main(void)
{
	
	initwindow(1000,1000);
	setcolor(1);
	circle(100,100,50);
	outtextxy(80,90,"CIRCLE");
	
	
	line(300,60,200,200);
	line(300,60,400,200);
	line(200,200,400,200);
	outtextxy(270,140,"TRIANGLE");
	
	
	line(500,100,900,100);
	outtextxy(660,110,"LINE");
	
	
	arc(80,350,10,80,100);
	outtextxy(90,340,"ARC");
	
	
	putpixel(660,300,GREEN);
	outtextxy(660,320,"PIXEL");
	getch();
	
}
