#include<graphics.h>
 main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    circle(450,150,50);
    getch();
    closegraph();
    return 0;
}
