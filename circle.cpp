#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<graphics.h>


int main()
{
int gd=DETECT, gm;

initgraph(&gd,&gm,"");

initwindow(1080,768);
setbkcolor(12);
setcolor(3);
settextstyle(3,0,1);


outtextxy(255, 205, "point(250,200)");
circle(250,200,150);

outtextxy(105, 205, "point(100,200)");
line(100,200,700,200);
outtextxy(405, 205, "point(400,200)");
outtextxy(705, 205, "point(700,200)");

outtextxy(205, 25, "point(250,50)");
line(250,50,250,350);
outtextxy(205, 355, "point(250,350)");

outtextxy(555, 205, "point(550,200)");
circle(550,200,150);

outtextxy(505, 25, "point(550,50)");
line(550,50,550,350);
outtextxy(505, 355, "point(550,350)");

getch();
closegraph();
return 0;
}



