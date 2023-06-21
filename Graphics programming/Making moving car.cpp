#include<bits/stdc++.h>
#include<graphics.h>
main()
{
          int gd=DETECT,gm;
            initgraph(&gd,&gm,(char*)"");
            setbkcolor(RED);
        for(int x=0;x<=2000;x++)
        {
             cleardevice();
            //FillRect(5);
            setcolor(5);
          rectangle(50+x,100,150+x,200);
          //FillRect(RED);
          setcolor(3);
          rectangle(150+x,150,200+x,200);
          fillellipse(75+x,210,10,10);
          circle(75+x,210,10);
           fillellipse(175+x,210,10,10);
          circle(175+x,210,10);
            delay(0.5);
        }

            getch();
    closegraph();
    return 0;
}
