#include<bits/stdc++.h>
#include<graphics.h>

 main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    //initwindow(500,500);

   setcolor(RED);
   setfillstyle(HATCH_FILL,BLUE);
   circle(250,250,50);
   floodfill(250,250,RED);
     getch();
    closegraph();
    return 0;

}
