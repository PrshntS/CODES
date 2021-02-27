#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
    int Xw=30,Yw=60,Xv_min=30,Xv_max=60,Xw_max=80,Xw_min=20,Yv_min=40,Yv_max=60,Yw_min=40,Yw_max=80;
	/*cout<<"ENTER THE VALUES OF Xv_min and Xv_max"<<endl;
	cin>>Xv_min>>Xv_max;
	cout<<"ENTER THE VALUES OF Yv_min and Yv_max"<<endl;
	cin>>Yv_min>>Yv_max;
	cout<<"ENTER THE VALUES OF Xw_min and Xw_max"<<endl;
	cin>>Xw_min>>Xw_max;
	cout<<"ENTER THE VALUES OF Yw_min and Yw_max"<<endl;
	cin>>Yw_min>>Yw_max;
	*/
	float Sx = (Xv_max - Xv_min)/float(Xw_max-Xw_min);
	float Sy = (Yv_max - Yv_min)/float(Yw_max-Yw_min);
	float Xv = Xv_min + ((Xw - Xw_min)*Sx);
	float Yv = Yv_min + ((Yw - Yw_min)*Sy);
	cout<<"Coordinates of viewport:-\n"<<Xv<<" "<<Yv;
	getch();
	closegraph();
	return 0;
}
