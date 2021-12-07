#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<cstdlib>
#include <math.h>

using namespace std;

void drawBresenhamLine(int x1,int y1,int x2,int y2)
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
	m = (float)dy/ (float)dx;
	if(isinf(m))
    {
        while(y1 <= y2)
        {
            x1=x1;
            y1=y1+1;
            putpixel(x1,y1,RED);
            delay(10);
        }
    }
	else if(fabs(m)<1)
    {

        p = 2 * (dy) - (dx);
        while(x1 <= x2)
        {
            if(p < 0)
            {
                x1=x1+1;
                y1=y1;
                p = p + 2 * (dy);
            }
            else
            {
                x1=x1+1;
                y1=y1+1;
                p = p + 2 * (dy - dx);
            }
            putpixel(x1,y1,RED);
            delay(10);
        }
    }
    else
    {
        p = 2 * (dx) - (dy);
        while(x1 <= x2)
        {
            if(p < 0)
            {
                x1=x1+1;
                y1=y1;
                p = p + 2 * (dx);
            }
            else
            {
                x1=x1+1;
                y1=y1+1;
                p = p + 2 * (dx - dy);
            }
            putpixel(x1,y1,RED);
            delay(10);
        }
    }
}

int main()
{
int gd=DETECT, gm;

initgraph(&gd,&gm,"");

setbkcolor(1);
setcolor(11);
setfillstyle(SOLID_FILL,WHITE);
floodfill(0,0,RED);
settextstyle(3,0,3);
outtextxy(150, 120, "startpoint(150,150)");
drawBresenhamLine(450,150,150,450);
outtextxy(450, 450, "endpoint(450,450)");

getch();
closegraph();
return 0;
}
