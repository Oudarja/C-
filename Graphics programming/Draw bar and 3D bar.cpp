#include<graphics.h>
 main()
{
          int gd=DETECT,gm;

            initgraph(&gd,&gm,(char*)"");



            rectangle(50,50,100,100);
            bar(150,150,200,200);
            bar3d(400,450,300,350,40,1);




    getch();
    closegraph();
    return 0;
}


