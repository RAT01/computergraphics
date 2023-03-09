//program to demonstrate Breshnams line drawing algorithm
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void drawine(int x0,int y0, int x1, int y1)
{
	int dx,dy,p,x,y;
	dx=x1-x0;
	dy=y1-y0;
	x=x0;
	y=y0;
	p=2*dy-dx;
	while(x<x1)
	{
		if(p>0)
		{
			putpixel(x,y,7);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else
		{
			putpixel(x,y,7);
			p=p+2*dy;

		}
		x=x+1;

	}
}
void main()
{
	int gd=DETECT,gm,x0,y0,x1,y1;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cout<<"Enter coordinate of the first point";
	cin>>x0>>y0;
	cout<<"Enter the coordinate of second point";
	cin>>x1>>y1;
	drawine(x0,y0,x1,y1);
	getch();
	closegraph();
	}
