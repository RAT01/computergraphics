#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void drawcircle(int x0, int y0, int radius)
{
	int x = radius;
	int y = 0;
	int err = 0;
	while (x >=y)
	{
		putpixel(x0 + x, y0 + y, 1);
		putpixel(x0 + x, y0 + x, 2);
		putpixel(x0 - y, y0 + x, 4);
		putpixel(x0 - x, y0 + y, 5);
		putpixel(x0 - x, y0 - y, 9);
		putpixel(x0 - x, y0 - x,10);
		putpixel(x0 + x, y0 - y,11);
		putpixel(x0 + x, y0 - x,14);
		if (err <=0)
		{
			y+=1;
			err+=2*y+1:
		 }
		if (err >0)
		{
			x-=1;
			err-=2*y+1;
		}
		delay(50);
	}
}
void main()
{
int gd = DETECT,gm ,error, x, y, r;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
cout<<"Enter radius of circle";
cin>>r;
cout<<"Enter the coordinates of center (x and y):: ");
cin >> x >> y;
drawcircle(x,y,r);
getch();
closegraph();
}