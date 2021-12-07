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
settextstyle(3,0,3);

outtextxy(100, 70, "point(100,100)");
rectangle(100,100,850,450);
outtextxy(720, 460, "point(850,450)");

outtextxy(720, 70, "point(850,100)");
line(100,100,850,450);
line(850,100,100,450);
outtextxy(100, 460, "point(100,450)");

outtextxy(405, 70, "point(475,100)");
line(475,100,475,450);
outtextxy(405, 460, "point(475,450)");

outtextxy(105, 280, "point(100,275)");
line(100,275,850,275);
outtextxy(720, 280, "point(850,275)");

getch();
closegraph();
return 0;
}


