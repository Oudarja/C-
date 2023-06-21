#include<graphics.h>
 main()
{
          int gd=DETECT,gm;
            initgraph(&gd,&gm,(char*)"");


            char str[100];

            sprintf(str,"current position of x=%d & y=%d",getx(),gety());

            outtext(str);

             sprintf(str,"current position of x=%d & y=%d",getmaxx(),getmaxy());
         outtextxy(100,100,str);








                    getch();
    closegraph();
    return 0;
}

