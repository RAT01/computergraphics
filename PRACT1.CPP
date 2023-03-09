#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int main()
{
  int gd = DETECT;
  int gm;
  initgraph (&gd,&gm,"C:\\TURBOC3\\BGI");
  cout<<"line : " <<endl;
  line(50,50,200,50);
}