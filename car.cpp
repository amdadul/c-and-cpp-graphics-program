#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
int gd=DETECT, gm;

initgraph(&gd,&gm,"");

setcolor(BLACK);
setfillstyle(SOLID_FILL,WHITE);
floodfill(0,0,RED);

line(200,350,400,320);
//martgat
ellipse(170,350,0,170,30,30);
ellipse(430,320,10,180,30,30);

//headlight
ellipse(125,265,200,285,80,80);
ellipse(145,243,190,285,95,80);

ellipse(155,234,190,275,95,80);

line(50,290,52,260);

ellipse(210,420,100,140,115,150);
ellipse(150,360,100,147,105,150);

ellipse(127,360,88,137,105,150);


line(193,273,130,210);

line(193,275,240,220);
line(199,280,248,220);

ellipse(318,250,0,150,85,50);
line(300,267,310,200);

ellipse(265,320,24,122,180,180);
line(430,245,460,240);
line(460,315,470,310);
ellipse(360,280,-24,30,120,80);
line(415,220,435,218);
line(460,240,435,218);

ellipse(160,300,0,360,7,8);
ellipse(170,290,0,360,3,4);

ellipse(75,242,0,360,7,8);
ellipse(88,230,0,360,3,4);

line(130,210,170,165);
line(240,220,170,165);

line(200,280,400,250);

//tire
circle(170,350,25);
circle(170,348,26);
circle(170,350,7);
line(164,344,153,333);
line(176,350,193,347);
line(169,356,165,370);

circle(430,320,25);
circle(430,318,26);
circle(430,320,7);
line(424,314,413,303);
line(436,320,452,316);
line(429,326,425,340);


getch();
closegraph();
return 0;
}
