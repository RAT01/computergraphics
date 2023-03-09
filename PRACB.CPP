#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd = DETECT, gm;
	int x1, y1, y2, xn, yn, x2;
	double r11, r12, r21, r22, th;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	cout<<"Enter the 2 line end point x1, y1 and x2, y2::";
	cin>>x1>>y1>>x2>>y2;
	cout<<"\n \n Enter the angle::::";

	cin>>th;
	r11 = cos((th*3.1428)/180);
	r12 = sin((th*3.1428)/180);
	r21 = sin((th*3.1428)/180);
	r22 = cos((th*3.1428)/180);
	xn = (x2*r11) - (y2*r21);
	yn = (x2*r21) - (y2*r22);
	line(x1, y1, xn, yn);
	getch();
	closegraph();
	}

