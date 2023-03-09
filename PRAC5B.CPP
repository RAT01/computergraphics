#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void display(int xsl, int ysl, int x, int y);
void ellips1( int xsl, int ysl, int rx, int ry)
{
	int x, y;
	float d1, d2, dx, dy;
	x = 0; y = ry;
	d1 = pow(ry,2)*x;
	dy = 2*pow(ry,2)*x;
	dy= 2*pow(rx,2)*y;
	do
	{
	display(xsl, ysl, x, y);
	if(d1<0)
	{
	x++;
	dx = dx +( 2* (pow(ry, 2)));
	d1 = d1 + dx + (pow(ry,2));
	}
	else
	{
	x++;
	y--;
	dx = dx+ (2 * (pow(ry,2)));
	dy = dy - (2*(pow(rx,2)));
	d1 = d1 + dx - dy +(pow(ry,2));
	}
}
while(dx<dy);
do{
	display(xsl, ysl, x,y);
	if(d2>0)
	{
		x = x;
		y --;
		dy = dy -(2*(pow(rx,2)));
		d2 = d2 - dy + pow(rx,2);
		}
		 else
		 {
			x++;
			y--;
			dy = dy -(2*(pow(rx,2)));
			dx = dx +(2*(pow(ry,2)));
			d2 = d2 +dx - dy + pow(rx,2);
		 }
} while(y>0);}

void display(int xs, int ys, int x, int y)
{
putpixel(xs + x, ys + y, WHITE);
putpixel(xs - x, ys - y, WHITE);
putpixel(xs + x, ys - y, WHITE);
putpixel(xs - x, ys + y, WHITE);
}
int main (void)
{
	int xsl, ysl;
	float rx1, ry1;
	int gd = DETECT,gm ;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");	cout<<"\t Mid point ellipse algo \n";
	cout<<"Enter the coordinate";
	cout<<"xc = \t";
	cin>> xsl;
	cout <<"yc = \t";
	cin>> ysl;
	cout<<"Enter the X Radius";
	cin>>rx1;
	cout<<"Enter the Y radius";
	cin>>ry1;
	ellips1(xsl, ysl, rx1, ry1);
	getch();
	closegraph();
	return 0;
}