#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{

int gd=DETECT, gm;

initgraph(&gd,&gm,"");

setcolor(RED);
setfillstyle(LTSLASH_FILL,LIGHTGRAY);

line(120,10,380,10);
line(70,100,430,100);
line(120,10,70,102);
line(380,10,430,102);
floodfill(121,31,RED);

setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(100,100,400,300);
floodfill(101,101,RED);

setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(190,180,220,300);
rectangle(221,180,251,300);
floodfill(191,181,RED);
floodfill(222,181,RED);

rectangle(300,140,380,190);
line(300,165,380,165);
line(340,140,340,190);
floodfill(301,141,RED);
floodfill(341,151,RED);
floodfill(301,180,RED);
floodfill(341,180,RED);

getch();

closegraph();
return 0;

}
