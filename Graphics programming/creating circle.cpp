#include<graphics.h>
 main()
{
          int gd=DETECT,gm;
            initgraph(&gd,&gm,(char*)"");

    circle(250,250,200);
    getch();
    closegraph();
    return 0;
}
