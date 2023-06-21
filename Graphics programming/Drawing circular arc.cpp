#include<graphics.h>
 main()
{
          int gd=DETECT,gm;
            initgraph(&gd,&gm,(char*)"");

    arc(250,250,0,600,50);
    getch();
    closegraph();
    return 0;
}

