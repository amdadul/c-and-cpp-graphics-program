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
setcolor(4);
settextstyle(3,0,3);

outtextxy(150, 170, "point(150,200)");
rectangle(150,200,850,600);
outtextxy(710, 610, "point(850,600)");

outtextxy(710, 170, "point(850,200)");
line(150,200,850,600);
line(850,200,150,600);
outtextxy(150, 610, "point(150,600)");

outtextxy(430, 170, "point(500,200)");
line(500,200,500,600);
outtextxy(430, 610, "point(500,600)");

outtextxy(160, 410, "point(150,400)");
line(150,400,850,400);
outtextxy(710, 410, "point(850,400)");

getch();
closegraph();
return 0;
}


