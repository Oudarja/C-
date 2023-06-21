#include<graphics.h>
 main()
{
          int gd=DETECT,gm;
            initgraph(&gd,&gm,(char*)"");

       int x,y,radius;

       x=getmaxx()/2+410;
       y=getmaxy()/2+150;
       int c=0,c1=15;
       int dec=900;
       for(radius=5;radius<=9000;radius+=5)
       {
           delay(10);
           setcolor(c/10);
           circle(x,y,radius);
           setcolor(c1);
           circle(x,y,dec--);
           c++;
           c1--;
        if(c1==-1)
            c1=15;
          // if(radius*2>getmaxx()||radius*2>getmaxy())
            //cleardevice();
            if(dec==-1)
            dec=900;
       }
        getch();
    closegraph();
    return 0;
}

