#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
	int i;
	int x1, y1, x2, y2, x, y;
	int gd =  DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	cout<<"Enter the end point co-ordinate of x1, y1 and x2, y2::";
	cin>>x1>>y1>>x2>>y2;
	cout<<"\n \n Enter Scaling Co - ordinated of x and y ::";
	cin>>x>>y;
	cout<<"\n \n Line after Scaling::";
	x1 = (x1 + x);
	y1 = (y1 +y);
	x2 = (x2 + x);
	y2 = (y2 + y);
	line(x1, y1, x2, y2);
	getch();
	closegraph();
	}


