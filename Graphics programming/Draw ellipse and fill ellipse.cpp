#include<graphics.h>
 main()
{
          int gd=DETECT,gm;

            initgraph(&gd,&gm,(char*)"");


            ellipse(100,100,0,360,50,25);

             ellipse(200,200,0,200,50,25);

             fillellipse(300,320,50,25);




    getch();
    closegraph();
    return 0;
}

