#include <stdio.h>
#include<conio.h>
#include<graphics.h>


int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm,"");
   setcolor(5);

   //line(100,30,400,30);
   //line(70,100,430,100);
   //setfillstyle(SOLID_FILL,WHITE);
   circle(100, 100, 50);
   floodfill(101,101,RED);

   /*line(100,30,70,102);
   line(120,30,90,100);
   line(140,30,110,100);
   line(160,30,130,100);
   line(180,30,150,100);
   line(200,30,170,100);
   line(220,30,190,100);
   line(240,30,210,100);

   line(400,30,430,102);

    line(100,300,400,300);*/
   getch();
   closegraph();
   return 0;
}

