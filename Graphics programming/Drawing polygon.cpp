#include<graphics.h>
 main()
{
          int gd=DETECT,gm;
            initgraph(&gd,&gm,(char*)"");
            int points[]={320,150,420,300,250,300,320,150};

            drawpoly(4,points);
            getch();
            fillpoly(4,points);
            getch();
             cleardevice();
            setcolor(RED);
            drawpoly(4,points);


                    getch();
    closegraph();
    return 0;
}
