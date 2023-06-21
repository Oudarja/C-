#include<graphics.h>
#include<bits/stdc++.h>
 main()
{
          int gd=DETECT,gm;

            initgraph(&gd,&gm,(char*)"");

            setbkcolor(MAGENTA);

            ///since the window is drawn before even setting the background color.
            ///use cleardevice() after setting the background color to recreate the screen.

             cleardevice();

           circle(100,100,50);

           setcolor(RED);

           circle(200,200,50);



          //   setbkcolor(GREEN);

    getch();
    closegraph();
    return 0;
}
