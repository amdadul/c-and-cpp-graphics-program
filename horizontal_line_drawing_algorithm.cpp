#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<cstdlib>
#include <math.h>

using namespace std;

void drawHorizontalLine(int x1,int y1,int x2,int y2)
{
	int dx,dy,p,q,tempx,tempy;
	float m;
    if(x1>x2)
    {
        tempx = x1;
        x1=x2;
        x2 = tempx;
    }

    if(y1>y2)
    {
        tempy = y1;
        y1=y2;
        y2 = tempy;
    }

	dx=x2-x1;
	dy=y2-y1;
	m = isinf((float)dy/ (float)dx);
	if(fabs(m)<1)
    {
        while(x1 <= x2)
        {
            x1=x1+1;
            y1=y1;
            putpixel(x1,y1,RED);
            delay(10);
        }
    }
}

int main()
{
int gd=DETECT, gm;

initgraph(&gd,&gm,"");

setbkcolor(10);
setcolor(2);
setfillstyle(SOLID_FILL,WHITE);
floodfill(0,0,RED);
settextstyle(3,0,3);
outtextxy(150, 170, "startpoint(150,200)");
drawHorizontalLine(500,200,150,200);
outtextxy(450, 205, "endpoint(500,200)");

getch();
closegraph();
return 0;
}

